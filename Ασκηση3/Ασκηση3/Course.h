#ifndef COURSE_H
#define COURSE_H

#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <utility>
#include <fstream>

//κλάση μάθημα 
class Course
{
    //Atributtes
    private: 
    std::string course_code ;
    std::string course_name;
    unsigned int course_semester;

    public:
    void setCourseCode(std::string);
    std::string getCourseCode();
    void setCourseName(std::string);
    std::string getCourseName();
    void setCourseSemester(unsigned int );
    unsigned int getCourseSemster();
    Course(std::string ,std::string,unsigned int);
    Course();
    virtual ~Course();

};

#endif