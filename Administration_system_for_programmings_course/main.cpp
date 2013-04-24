#include "courseadminwindow.h"
#include <QApplication>
//some comment
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CourseAdminWindow w;
    w.show();
    
    return a.exec();
}
