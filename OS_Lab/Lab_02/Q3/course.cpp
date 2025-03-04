#include "course.h"
Course::Course(string name):name(name){}
void Course::addStudent(Student* student){
    students.push_back(student);
}
void Course::addTeacher(Teacher* teacher){
    teachers.push_back(teacher);
}
void Course::printInfo() {
    cout << "Course: " << name << "\nStudents Enrolled: \n" ;
    for(auto student: students){
         cout << "- " << student -> name << "\n" ;
    }
    cout << "Teachers Teaching:\n";
    for (auto teacher : teachers) {
         cout << "- " << teacher->name << "\n";
    }
}