#include "uiterminalmain.h"
#include "ui_terminal.h"

#include "uiuserlogin.h"
#include "uiuserpanel.h"
#include "uiterminalmain.h"

#include "global_scope.h"
#include <QJsonDocument>
#include <QSpacerItem>

uiTerminalMain::uiTerminalMain(QJsonObject &b, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::terminalWidget),
    t_spacer(new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Expanding))
{
    ui->setupUi(this);
    business = b;

    connect(ui->logUserButton, SIGNAL(pressed()), this, SLOT(addUser()));

    abd.cbSize = sizeof( APPBARDATA );
    abd.uEdge = (int)ABE_RIGHT;
    registerAppBar();
    setWidth( width() );

}

uiTerminalMain::~uiTerminalMain()
{
    delete ui;
}

void uiTerminalMain::addUser()
{
    uiUserLogin *login = new uiUserLogin(this->business);
    login->setAttribute(Qt::WA_DeleteOnClose);
    if (login->exec() == QDialog::Accepted) {
        //update users
        updateUsers();
    };
}

void uiTerminalMain::startUser()
{
    QPushButton* btn = static_cast<QPushButton*>(sender());
    int i = buttons.indexOf(btn);
    QJsonObject usr = loggedUsers.at(i).toObject();
    uiUserPanel* panel = new uiUserPanel(blueBusiness, usr);
    panel->setAttribute(Qt::WA_DeleteOnClose);
    panel->setWindowModality(Qt::ApplicationModal);
    panel->show();
}

void uiTerminalMain::updateUsers()
{
    QPushButton*    tmp_btn;
    QJsonValue      tmp_val;
    QByteArray      data = app->jqXHR()->request(QString("get"), QString("/business/%1/loggeduser").arg(business.value("id").toString()));

    loggedUsers = QJsonDocument::fromJson(data).array();
    qDebug() << loggedUsers;

    //remove all buttons

    while(buttons.length()) {
        tmp_btn = buttons.takeFirst();
        ui->userArea->widget()->layout()->removeWidget(tmp_btn);
        delete tmp_btn;
    };
    ui->userArea->widget()->layout()->removeItem(t_spacer);

    for(int i = 0; i < loggedUsers.count(); i++) {
        tmp_val = loggedUsers.at(i);
        tmp_btn = new QPushButton(QIcon(":/icons/graphics/im-user.png"), tmp_val.toObject().value("username").toString());
        connect(tmp_btn, SIGNAL(pressed()), this, SLOT(startUser()));
        ui->userArea->widget()->layout()->addWidget(tmp_btn);
        buttons << tmp_btn;
    };

    ui->userArea->widget()->layout()->addItem(t_spacer);
}



bool uiTerminalMain::winEvent(MSG *msg, long *result)
{
    *result = 0;

    switch( msg->message )
    {
    case WM_APPBAR_CALLBACK:
        appBarCallback( msg->wParam, msg->lParam );
        break;

    case WM_ACTIVATE:
        SHAppBarMessage( ABM_ACTIVATE, &abd );
        break;

    case WM_WINDOWPOSCHANGED:
        SHAppBarMessage( ABM_WINDOWPOSCHANGED, &abd );
        break;

    default:
        return false;
    }

    return true;
}

void uiTerminalMain::registerAppBar()
{
    abd.hWnd = (HWND)winId();
    abd.uCallbackMessage = WM_APPBAR_CALLBACK;

    if( SHAppBarMessage( ABM_NEW, &abd ) != TRUE )
        qDebug() << "Error: QAppBar: SHAppBarMessage( ABM_NEW ) failed";
}

void uiTerminalMain::unregisterAppBar()
{
    SHAppBarMessage( ABM_REMOVE, &abd );
}

void uiTerminalMain::appBarCallback(WPARAM msg, LPARAM lParam)
{
    if( msg == ABN_FULLSCREENAPP )
    {
        // An application is going fullscreen (lParam = 1) or all fullscreen apps
        // have ended (lParam = 0).  We are supposed to use this to remove or re-add
        // the 'topmost' style attribute.  But apparently being a Qt.Tool window
        // takes care of this? Tried one fullscreen app (Windows Media Player) and
        // the appbar hid, minimized it and the appbar reappeared as topmost.
    }
    else if( msg == ABN_POSCHANGED )
    {
        // The taskbar or another appbar has changed its size or position, we might
        // need to move now.
        setWidth( width());
    }
}

void uiTerminalMain::setWidth(int w)
{
    //if( minimumWidth() != 0 ) w = max( w, minimumWidth());

    // Get the area of the entire desktop
    abd.rc.left = abd.rc.top = 0;
    abd.rc.right = GetSystemMetrics( SM_CXSCREEN );
    abd.rc.bottom = GetSystemMetrics( SM_CYSCREEN );

    // Let Windows subtract the amount being used by other appbars and the
    // taskbar
    SHAppBarMessage( ABM_QUERYPOS, &abd );

    // Position our window on either the left or right side of the screen
    if( abd.uEdge == ABE_LEFT ) abd.rc.right = abd.rc.left + w;
    else abd.rc.left = abd.rc.right - w;

    // Pass the final bounding rectangle to the system
    SHAppBarMessage( ABM_SETPOS, &abd );

    // Set our actual position based on what came back from ABM_SETPOS
    RECT& rc = abd.rc;
    setGeometry( rc.left + 10, rc.top, rc.right - rc.left, rc.bottom - rc.top );
    //resizeHandle->setFixedHeight( rc.bottom - rc.top );
}
