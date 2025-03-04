#ifndef TEACHER_H
#define TEACHER_H

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Course;

class Teacher{
    public:
        string name;
        vector<Course*> courses ;

        Teacher(string name);
        void teach(Course* course);
        void printCourse();
    };
#endif