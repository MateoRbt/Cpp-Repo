#include <iostream>
#include <string>
#include <cstring>
#include "Course.h"
#include "student.h"
using namespace std;


Course::Course(std::string id,std::string name,unsigned int sem)
{
    course_code=id;
    course_name=name;
    course_semester=sem;
}
Course::Course()
{
    
}

Course::~Course()
{
    
}

void Course::setCourseCode(std::string id)
{
    course_code=id;
}

string Course::getCourseCode()
{
    return course_code;
}

void Course::setCourseName(std::string name)
{
    course_name=name;
}
    
string Course::getCourseName()
{
    return course_name;
}

void Course::setCourseSemester(unsigned int sem )
{
    course_semester = sem;
}

unsigned int Course::getCourseSemster()
{
    return course_semester;
}