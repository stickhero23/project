#include "courseadminwindow.h"
#include "ui_courseadminwindow.h"

CourseAdminWindow::CourseAdminWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CourseAdminWindow)
{
    ui->setupUi(this);
}

CourseAdminWindow::~CourseAdminWindow()
{
    delete ui;
}
