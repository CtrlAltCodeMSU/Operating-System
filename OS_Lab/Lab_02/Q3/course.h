#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <string>
#include <vector>
#include "student.h"
#include "teacher.h"

using namespace std;

class Course {
    public:
        string name;
        vector <Student *> students;
        vector <Teacher *> teachers;

        Course(string name);
        void addStudent(Student* student);
        void addTeacher(Teacher* teacher);
        void printInfo();
};
#endif






