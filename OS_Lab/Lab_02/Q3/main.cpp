#include "student.h"
#include "teacher.h"
#include "course.h"

int main() {
    Student s1("Sana Ullah") , s2("Ali");
    Teacher t1("Dr. Smith"), t2("Prof. Johnson");
    Course c1("Math"), c2("Physics");

    s1.enroll(&c1);
    s2.enroll(&c1);
    s2.enroll(&c2);

    t1.teach(&c1);
    t2.teach(&c2);

    c1.addStudent(&s1);
    c1.addStudent(&s2);
    c2.addStudent(&s2);

    c1.addTeacher(&t1);
    c2.addTeacher(&t2);

    c1.printInfo();
    c2.printInfo();

    return 0;
}