/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionVer_Usuarios;
    QAction *actionAgregar_Usuarios;
    QAction *actionVer_Locales;
    QAction *actionAgregar_Locales;
    QAction *actionOpciones;
    QAction *actionSalir;
    QAction *actionVer_Libros;
    QAction *actionVer_Trabajos;
    QAction *actionListar_Trabajos_Pendientes;
    QAction *actionDe_Empleado;
    QAction *actionCrear_back_up_en_la_nube;
    QAction *actionManegar_backup_locales;
    QAction *actionDe_Fuera_de_Serie;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QMdiArea *mdiArea;
    QMenuBar *menuBar;
    QMenu *menuArchivo;
    QMenu *menuLocales;
    QMenu *menuUsuarios;
    QMenu *menuLibros;
    QMenu *menuRegistros;
    QMenu *menuHerramientas;
    QMenu *menuTrabajos;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionVer_Usuarios = new QAction(MainWindow);
        actionVer_Usuarios->setObjectName(QString::fromUtf8("actionVer_Usuarios"));
        actionAgregar_Usuarios = new QAction(MainWindow);
        actionAgregar_Usuarios->setObjectName(QString::fromUtf8("actionAgregar_Usuarios"));
        actionVer_Locales = new QAction(MainWindow);
        actionVer_Locales->setObjectName(QString::fromUtf8("actionVer_Locales"));
        actionAgregar_Locales = new QAction(MainWindow);
        actionAgregar_Locales->setObjectName(QString::fromUtf8("actionAgregar_Locales"));
        actionOpciones = new QAction(MainWindow);
        actionOpciones->setObjectName(QString::fromUtf8("actionOpciones"));
        actionSalir = new QAction(MainWindow);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        actionVer_Libros = new QAction(MainWindow);
        actionVer_Libros->setObjectName(QString::fromUtf8("actionVer_Libros"));
        actionVer_Trabajos = new QAction(MainWindow);
        actionVer_Trabajos->setObjectName(QString::fromUtf8("actionVer_Trabajos"));
        actionListar_Trabajos_Pendientes = new QAction(MainWindow);
        actionListar_Trabajos_Pendientes->setObjectName(QString::fromUtf8("actionListar_Trabajos_Pendientes"));
        actionDe_Empleado = new QAction(MainWindow);
        actionDe_Empleado->setObjectName(QString::fromUtf8("actionDe_Empleado"));
        actionCrear_back_up_en_la_nube = new QAction(MainWindow);
        actionCrear_back_up_en_la_nube->setObjectName(QString::fromUtf8("actionCrear_back_up_en_la_nube"));
        actionManegar_backup_locales = new QAction(MainWindow);
        actionManegar_backup_locales->setObjectName(QString::fromUtf8("actionManegar_backup_locales"));
        actionDe_Fuera_de_Serie = new QAction(MainWindow);
        actionDe_Fuera_de_Serie->setObjectName(QString::fromUtf8("actionDe_Fuera_de_Serie"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QString::fromUtf8("mdiArea"));
        mdiArea->setViewMode(QMdiArea::TabbedView);
        mdiArea->setTabShape(QTabWidget::Rounded);

        verticalLayout->addWidget(mdiArea);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuArchivo = new QMenu(menuBar);
        menuArchivo->setObjectName(QString::fromUtf8("menuArchivo"));
        menuLocales = new QMenu(menuBar);
        menuLocales->setObjectName(QString::fromUtf8("menuLocales"));
        menuUsuarios = new QMenu(menuBar);
        menuUsuarios->setObjectName(QString::fromUtf8("menuUsuarios"));
        menuLibros = new QMenu(menuBar);
        menuLibros->setObjectName(QString::fromUtf8("menuLibros"));
        menuRegistros = new QMenu(menuBar);
        menuRegistros->setObjectName(QString::fromUtf8("menuRegistros"));
        menuHerramientas = new QMenu(menuBar);
        menuHerramientas->setObjectName(QString::fromUtf8("menuHerramientas"));
        menuTrabajos = new QMenu(menuBar);
        menuTrabajos->setObjectName(QString::fromUtf8("menuTrabajos"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuArchivo->menuAction());
        menuBar->addAction(menuLocales->menuAction());
        menuBar->addAction(menuUsuarios->menuAction());
        menuBar->addAction(menuLibros->menuAction());
        menuBar->addAction(menuTrabajos->menuAction());
        menuBar->addAction(menuRegistros->menuAction());
        menuBar->addAction(menuHerramientas->menuAction());
        menuArchivo->addAction(actionOpciones);
        menuArchivo->addAction(actionSalir);
        menuLocales->addAction(actionVer_Locales);
        menuLocales->addAction(actionAgregar_Locales);
        menuUsuarios->addAction(actionVer_Usuarios);
        menuUsuarios->addAction(actionAgregar_Usuarios);
        menuLibros->addAction(actionVer_Libros);
        menuRegistros->addAction(actionDe_Empleado);
        menuRegistros->addAction(actionDe_Fuera_de_Serie);
        menuHerramientas->addAction(actionCrear_back_up_en_la_nube);
        menuHerramientas->addAction(actionManegar_backup_locales);
        menuTrabajos->addAction(actionVer_Trabajos);
        menuTrabajos->addAction(actionListar_Trabajos_Pendientes);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionVer_Usuarios->setText(QCoreApplication::translate("MainWindow", "Ver Usuarios", nullptr));
        actionAgregar_Usuarios->setText(QCoreApplication::translate("MainWindow", "Agregar Usuarios", nullptr));
        actionVer_Locales->setText(QCoreApplication::translate("MainWindow", "Ver Locales", nullptr));
        actionAgregar_Locales->setText(QCoreApplication::translate("MainWindow", "Agregar Locales", nullptr));
        actionOpciones->setText(QCoreApplication::translate("MainWindow", "Opciones", nullptr));
        actionSalir->setText(QCoreApplication::translate("MainWindow", "Salir", nullptr));
        actionVer_Libros->setText(QCoreApplication::translate("MainWindow", "Ver Libros", nullptr));
        actionVer_Trabajos->setText(QCoreApplication::translate("MainWindow", "Ver Trabajos", nullptr));
        actionListar_Trabajos_Pendientes->setText(QCoreApplication::translate("MainWindow", "Listar Trabajos Pendientes", nullptr));
        actionDe_Empleado->setText(QCoreApplication::translate("MainWindow", "de Empleado", nullptr));
        actionCrear_back_up_en_la_nube->setText(QCoreApplication::translate("MainWindow", "Crear back-up en la nube", nullptr));
        actionManegar_backup_locales->setText(QCoreApplication::translate("MainWindow", "Manegar backup locales", nullptr));
        actionDe_Fuera_de_Serie->setText(QCoreApplication::translate("MainWindow", "de Fuera de Serie", nullptr));
        menuArchivo->setTitle(QCoreApplication::translate("MainWindow", "Archivo", nullptr));
        menuLocales->setTitle(QCoreApplication::translate("MainWindow", "Locales", nullptr));
        menuUsuarios->setTitle(QCoreApplication::translate("MainWindow", "Usuarios", nullptr));
        menuLibros->setTitle(QCoreApplication::translate("MainWindow", "Libros", nullptr));
        menuRegistros->setTitle(QCoreApplication::translate("MainWindow", "Registros", nullptr));
        menuHerramientas->setTitle(QCoreApplication::translate("MainWindow", "Herramientas", nullptr));
        menuTrabajos->setTitle(QCoreApplication::translate("MainWindow", "Trabajos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
