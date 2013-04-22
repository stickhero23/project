#ifndef COURSEADMINWINDOW_H
#define COURSEADMINWINDOW_H

#include <QMainWindow>

namespace Ui {
class CourseAdminWindow;
}

class CourseAdminWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit CourseAdminWindow(QWidget *parent = 0);
    ~CourseAdminWindow();
    
private:
    Ui::CourseAdminWindow *ui;
};

#endif // COURSEADMINWINDOW_H
