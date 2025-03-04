#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Course ;
class Student {
    public:
        string name ;
        vector<Course*> courses;

        Student(string name);
        void enroll(Course* course);
        void printCourses();
    };
#endif
