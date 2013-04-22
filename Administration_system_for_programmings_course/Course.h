#ifndef COURSE_H
#define COURSE_H

/*Course.h
 *
*/
class Course{
public:
    std::string GetCourseName();
    std::string GetCourseId();
    unsigned int GetCourseCredit();
    std::string GetCourseObjectives();

    void SetCourseName(std::string newCourseName);
    bool SetCourseCredit(unsigned int newCourseCredit);
    bool SetCourseObjectives(std::string newCourseObjectives);

private:
    std::string courseName;
    std::string courseId;
    unsigned int courseCredits;
    std::string courseObjectives;
    std::vector<Course> activeCourse;
    std::vector<Course> endedCourse;

};
#endif // COURSE_H
