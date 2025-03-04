#include "teacher.h"
#include "course.h"

Teacher::Teacher(string name) : name(name){}

void Teacher::teach(Course* course){
    courses.push_back(course);
}
void Teacher::printCourse(){
    cout << name << " is teaching:\n" ;
    for (auto course : courses)
    {
        cout << "- " << course -> name << "\n" ;
    }   
}