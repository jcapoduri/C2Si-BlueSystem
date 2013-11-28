/********************************************************************************
** Form generated from reading UI file 'manager.ui'
**
** Created by: Qt User Interface Compiler version 5.0.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_managerWidget
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

    void setupUi(QMainWindow *managerWidget)
    {
        if (managerWidget->objectName().isEmpty())
            managerWidget->setObjectName(QStringLiteral("managerWidget"));
        managerWidget->resize(800, 600);
        actionVer_Usuarios = new QAction(managerWidget);
        actionVer_Usuarios->setObjectName(QStringLiteral("actionVer_Usuarios"));
        actionAgregar_Usuarios = new QAction(managerWidget);
        actionAgregar_Usuarios->setObjectName(QStringLiteral("actionAgregar_Usuarios"));
        actionVer_Locales = new QAction(managerWidget);
        actionVer_Locales->setObjectName(QStringLiteral("actionVer_Locales"));
        actionAgregar_Locales = new QAction(managerWidget);
        actionAgregar_Locales->setObjectName(QStringLiteral("actionAgregar_Locales"));
        actionOpciones = new QAction(managerWidget);
        actionOpciones->setObjectName(QStringLiteral("actionOpciones"));
        actionSalir = new QAction(managerWidget);
        actionSalir->setObjectName(QStringLiteral("actionSalir"));
        actionVer_Libros = new QAction(managerWidget);
        actionVer_Libros->setObjectName(QStringLiteral("actionVer_Libros"));
        actionVer_Trabajos = new QAction(managerWidget);
        actionVer_Trabajos->setObjectName(QStringLiteral("actionVer_Trabajos"));
        actionListar_Trabajos_Pendientes = new QAction(managerWidget);
        actionListar_Trabajos_Pendientes->setObjectName(QStringLiteral("actionListar_Trabajos_Pendientes"));
        actionDe_Empleado = new QAction(managerWidget);
        actionDe_Empleado->setObjectName(QStringLiteral("actionDe_Empleado"));
        actionCrear_back_up_en_la_nube = new QAction(managerWidget);
        actionCrear_back_up_en_la_nube->setObjectName(QStringLiteral("actionCrear_back_up_en_la_nube"));
        actionManegar_backup_locales = new QAction(managerWidget);
        actionManegar_backup_locales->setObjectName(QStringLiteral("actionManegar_backup_locales"));
        actionDe_Fuera_de_Serie = new QAction(managerWidget);
        actionDe_Fuera_de_Serie->setObjectName(QStringLiteral("actionDe_Fuera_de_Serie"));
        centralWidget = new QWidget(managerWidget);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));
        mdiArea->setViewMode(QMdiArea::TabbedView);
        mdiArea->setTabShape(QTabWidget::Rounded);

        verticalLayout->addWidget(mdiArea);

        managerWidget->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(managerWidget);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 21));
        menuArchivo = new QMenu(menuBar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        menuLocales = new QMenu(menuBar);
        menuLocales->setObjectName(QStringLiteral("menuLocales"));
        menuUsuarios = new QMenu(menuBar);
        menuUsuarios->setObjectName(QStringLiteral("menuUsuarios"));
        menuLibros = new QMenu(menuBar);
        menuLibros->setObjectName(QStringLiteral("menuLibros"));
        menuRegistros = new QMenu(menuBar);
        menuRegistros->setObjectName(QStringLiteral("menuRegistros"));
        menuHerramientas = new QMenu(menuBar);
        menuHerramientas->setObjectName(QStringLiteral("menuHerramientas"));
        menuTrabajos = new QMenu(menuBar);
        menuTrabajos->setObjectName(QStringLiteral("menuTrabajos"));
        managerWidget->setMenuBar(menuBar);
        mainToolBar = new QToolBar(managerWidget);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        managerWidget->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(managerWidget);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        managerWidget->setStatusBar(statusBar);

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

        retranslateUi(managerWidget);

        QMetaObject::connectSlotsByName(managerWidget);
    } // setupUi

    void retranslateUi(QMainWindow *managerWidget)
    {
        managerWidget->setWindowTitle(QApplication::translate("managerWidget", "MainWindow", 0));
        actionVer_Usuarios->setText(QApplication::translate("managerWidget", "Ver Usuarios", 0));
        actionAgregar_Usuarios->setText(QApplication::translate("managerWidget", "Agregar Usuarios", 0));
        actionVer_Locales->setText(QApplication::translate("managerWidget", "Ver Locales", 0));
        actionAgregar_Locales->setText(QApplication::translate("managerWidget", "Agregar Locales", 0));
        actionOpciones->setText(QApplication::translate("managerWidget", "Opciones", 0));
        actionSalir->setText(QApplication::translate("managerWidget", "Salir", 0));
        actionVer_Libros->setText(QApplication::translate("managerWidget", "Ver Libros", 0));
        actionVer_Trabajos->setText(QApplication::translate("managerWidget", "Ver Trabajos", 0));
        actionListar_Trabajos_Pendientes->setText(QApplication::translate("managerWidget", "Listar Trabajos Pendientes", 0));
        actionDe_Empleado->setText(QApplication::translate("managerWidget", "de Empleado", 0));
        actionCrear_back_up_en_la_nube->setText(QApplication::translate("managerWidget", "Crear back-up en la nube", 0));
        actionManegar_backup_locales->setText(QApplication::translate("managerWidget", "Manegar backup locales", 0));
        actionDe_Fuera_de_Serie->setText(QApplication::translate("managerWidget", "de Fuera de Serie", 0));
        menuArchivo->setTitle(QApplication::translate("managerWidget", "Archivo", 0));
        menuLocales->setTitle(QApplication::translate("managerWidget", "Locales", 0));
        menuUsuarios->setTitle(QApplication::translate("managerWidget", "Usuarios", 0));
        menuLibros->setTitle(QApplication::translate("managerWidget", "Libros", 0));
        menuRegistros->setTitle(QApplication::translate("managerWidget", "Registros", 0));
        menuHerramientas->setTitle(QApplication::translate("managerWidget", "Herramientas", 0));
        menuTrabajos->setTitle(QApplication::translate("managerWidget", "Trabajos", 0));
    } // retranslateUi

};

namespace Ui {
    class managerWidget: public Ui_managerWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_H
