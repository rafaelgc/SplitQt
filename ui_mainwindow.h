/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExportHtml;
    QAction *actionExit;
    QAction *actionAbout;
    QAction *actionUsersManager;
    QAction *actionEliminar_perfil;
    QAction *actionExportAllHtml;
    QAction *actionConfig;
    QAction *actionSave;
    QAction *actionSaveAll;
    QAction *actionLoadTicket;
    QAction *actionNotes;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_4;
    QMenuBar *menubar;
    QMenu *menuArchivo;
    QMenu *menuSobre;
    QMenu *menuPerfiles;
    QMenu *menuUtilidades;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(533, 453);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1);
        MainWindow->setAnimated(true);
        MainWindow->setTabShape(QTabWidget::Rounded);
        actionExportHtml = new QAction(MainWindow);
        actionExportHtml->setObjectName(QStringLiteral("actionExportHtml"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/red-cross.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        actionUsersManager = new QAction(MainWindow);
        actionUsersManager->setObjectName(QStringLiteral("actionUsersManager"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/avatar.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUsersManager->setIcon(icon2);
        actionEliminar_perfil = new QAction(MainWindow);
        actionEliminar_perfil->setObjectName(QStringLiteral("actionEliminar_perfil"));
        actionExportAllHtml = new QAction(MainWindow);
        actionExportAllHtml->setObjectName(QStringLiteral("actionExportAllHtml"));
        actionConfig = new QAction(MainWindow);
        actionConfig->setObjectName(QStringLiteral("actionConfig"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/wrench.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionConfig->setIcon(icon3);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/floppy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon4);
        actionSaveAll = new QAction(MainWindow);
        actionSaveAll->setObjectName(QStringLiteral("actionSaveAll"));
        actionSaveAll->setIcon(icon4);
        actionLoadTicket = new QAction(MainWindow);
        actionLoadTicket->setObjectName(QStringLiteral("actionLoadTicket"));
        actionNotes = new QAction(MainWindow);
        actionNotes->setObjectName(QStringLiteral("actionNotes"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/note.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNotes->setIcon(icon5);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_4 = new QVBoxLayout(page);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        stackedWidget->addWidget(page);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 533, 21));
        menuArchivo = new QMenu(menubar);
        menuArchivo->setObjectName(QStringLiteral("menuArchivo"));
        menuSobre = new QMenu(menubar);
        menuSobre->setObjectName(QStringLiteral("menuSobre"));
        menuPerfiles = new QMenu(menubar);
        menuPerfiles->setObjectName(QStringLiteral("menuPerfiles"));
        menuUtilidades = new QMenu(menubar);
        menuUtilidades->setObjectName(QStringLiteral("menuUtilidades"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuArchivo->menuAction());
        menubar->addAction(menuPerfiles->menuAction());
        menubar->addAction(menuUtilidades->menuAction());
        menubar->addAction(menuSobre->menuAction());
        menuArchivo->addAction(actionSave);
        menuArchivo->addAction(actionSaveAll);
        menuArchivo->addAction(actionLoadTicket);
        menuArchivo->addAction(actionExportHtml);
        menuArchivo->addAction(actionExportAllHtml);
        menuArchivo->addAction(actionConfig);
        menuArchivo->addSeparator();
        menuArchivo->addAction(actionExit);
        menuSobre->addAction(actionAbout);
        menuPerfiles->addAction(actionUsersManager);
        menuUtilidades->addAction(actionNotes);

        retranslateUi(MainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "EasyReceipt", 0));
        actionExportHtml->setText(QApplication::translate("MainWindow", "Exportar a HTML", 0));
        actionExit->setText(QApplication::translate("MainWindow", "Salir", 0));
        actionAbout->setText(QApplication::translate("MainWindow", "Sobre...", 0));
        actionAbout->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        actionUsersManager->setText(QApplication::translate("MainWindow", "Gestionar perfiles", 0));
        actionUsersManager->setShortcut(QApplication::translate("MainWindow", "Ctrl+P", 0));
        actionEliminar_perfil->setText(QApplication::translate("MainWindow", "Eliminar perfil", 0));
        actionExportAllHtml->setText(QApplication::translate("MainWindow", "Exportar todo a HTML", 0));
        actionConfig->setText(QApplication::translate("MainWindow", "Configuraci\303\263n", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Guardar", 0));
        actionSave->setShortcut(QApplication::translate("MainWindow", "Ctrl+G", 0));
        actionSaveAll->setText(QApplication::translate("MainWindow", "Guardar todo", 0));
        actionLoadTicket->setText(QApplication::translate("MainWindow", "Cargar ticket", 0));
        actionLoadTicket->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0));
        actionNotes->setText(QApplication::translate("MainWindow", "Notas", 0));
        actionNotes->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        menuArchivo->setTitle(QApplication::translate("MainWindow", "Archivo", 0));
        menuSobre->setTitle(QApplication::translate("MainWindow", "Ayuda", 0));
        menuPerfiles->setTitle(QApplication::translate("MainWindow", "Perfiles", 0));
        menuUtilidades->setTitle(QApplication::translate("MainWindow", "Utilidades", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
