#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <utility>
#include <fstream>
#include "Course.h"

class Course;

class Student 
{
    //Atributtes
    private:
    char *AM ;
    std::string  onoma_eponimo ;
    unsigned int semester ;
    std::vector<std::pair<Course,float>> passed ; // Vector με τα περασμένα μαθήματα
    std::vector<std::pair<Course,float>>::iterator ptr; //parser για τα περασμένα μαθήματα
    std::vector <Course> enrolled; // Vector με τα δηλωμένα μαθήματα
    std::vector <Course>::iterator ptr2; // Parser για τα δηλωμένα μαθήματα

    //Methods 
    public:
  	 //setters
	void setAm (const char *Arithmos_Mitroou)
    {
        delete [] AM;
        int len;
        len=strlen(Arithmos_Mitroou);
        AM=new char[len];
        strcpy(AM,Arithmos_Mitroou);
    }
	void setOnomaEponimo (std::string OnEp)
	{
        onoma_eponimo = OnEp ;
    }
	void setSemester (unsigned int Sem)
    {
        semester = Sem;
    }

    //Getters
	char *getAm ()
    {
        return AM;
    } 
	std::string getOnomaEponimo ()
    {
        return onoma_eponimo;
    } 
	unsigned int getSemester()
    {
        return semester;
    }
    
    
    //Constructors
    Student (const char *, std::string );
    Student (const char *, std::string, unsigned int );
    Student (const Student & );
    //Destructors
    ~Student ();

    //Printer
    void ShowStudent ( std::ostream & ) const;
    //Increment
    void IncreaseSemester ();

    //Courses
    void setPassedCourses (const Course ,float); 
    void enroll(const Course);
    void ShowEnrolledCourses() ;
    //overloads
    friend std::ostream& operator<<(std::ostream& , const Student& );
    void operator+= (const Course &);
    int operator== (const Student &);
    int operator!= (const Student &);
    int operator<= (const Student &);
    int operator>= (const Student &);
    int operator> (const Student &);
    int operator< (const Student &);

};

#endif
