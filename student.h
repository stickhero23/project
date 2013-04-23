#ifndef STUDENT_H
#define STUDENT_H

namespace school{
class Student
{
public:
    Student(std::string name);
    ~Student();
private:
    unsigned int studentId;
};
}
#endif // STUDENT_H
