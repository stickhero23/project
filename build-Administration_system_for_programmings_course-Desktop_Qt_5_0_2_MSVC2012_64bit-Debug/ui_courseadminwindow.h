/********************************************************************************
** Form generated from reading UI file 'courseadminwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSEADMINWINDOW_H
#define UI_COURSEADMINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CourseAdminWindow
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CourseAdminWindow)
    {
        if (CourseAdminWindow->objectName().isEmpty())
            CourseAdminWindow->setObjectName(QStringLiteral("CourseAdminWindow"));
        CourseAdminWindow->resize(847, 402);
        centralWidget = new QWidget(CourseAdminWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        CourseAdminWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CourseAdminWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 847, 21));
        CourseAdminWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CourseAdminWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CourseAdminWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CourseAdminWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CourseAdminWindow->setStatusBar(statusBar);

        retranslateUi(CourseAdminWindow);

        QMetaObject::connectSlotsByName(CourseAdminWindow);
    } // setupUi

    void retranslateUi(QMainWindow *CourseAdminWindow)
    {
        CourseAdminWindow->setWindowTitle(QApplication::translate("CourseAdminWindow", "CourseAdminWindow", 0));
    } // retranslateUi

};

namespace Ui {
    class CourseAdminWindow: public Ui_CourseAdminWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSEADMINWINDOW_H
