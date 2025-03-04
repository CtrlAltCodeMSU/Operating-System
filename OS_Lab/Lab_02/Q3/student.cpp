#include "student.h"
#include "course.h"

Student::Student(string name) : name(name) {}

void Student::enroll(Course* course) {
    courses.push_back(course);
}
void Student::printCourses(){
    cout << name << " is enrolled in:\n";
    for (auto course: courses)
    {
        cout << "- " << course -> name << "\n" ;
    }
}
