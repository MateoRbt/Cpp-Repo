#include "Student.h"
#include "Course.h"
#include <new>
#include <cstring>
#include <string>
#include <iostream>


//Constructor 1 ������������ �� ��� �������������
Student::Student (const char *am ,std::string oe) 
{
    semester = 1 ; // defualt ���� �������� �� 1
    onoma_eponimo = oe;
    int len =strlen(am);
    if (len)
    {
        AM = new char [len];
		strcpy(AM,am);
    }
}

//Constructor 2 ������������ ���� ��� �����  
Student::Student (const char *am ,std::string oe ,unsigned int sem) 
{
    semester = sem ;
    onoma_eponimo = oe;
    int i ; 
    int len =strlen(am);
    if (len)
    {
        AM = new char [len];
		strcpy(AM,am);
    }
}

//Constructor 3 Copy constructor 
Student::Student (const Student &stud) 
{
    int len = strlen(stud.AM);
    AM = new  char[len];
    strcpy(AM,stud.AM); 
    onoma_eponimo = stud.onoma_eponimo ; 
    semester = stud.semester;
}

//Destructor
Student::~Student() 
{
	delete [] AM;
}

//������������ ������

//�������� ���������  
void Student::ShowStudent ( std::ostream &channel ) const
{
    channel << "�� : " << AM <<" ������������� : "<< onoma_eponimo <<" ������� : " << semester << std::endl;
}

//������ �������� ���� 1 
void Student::IncreaseSemester ()
{
    semester += 1 ;
}

void Student::setPassedCourses (const Course mathima ,float vathmos)
{
    std::pair<Course,float> PAIR((Course)mathima,(float)vathmos);
    passed.push_back(PAIR);
}

void Student::enroll(const Course mathima)
{
    enrolled.push_back(mathima);
}

void Student::ShowEnrolledCourses() 
{   
    int i;
    std::string tmp;
    std::cout<<"Cousre Name :     Course Code :        Course Semester"<< std::endl;
    for(i=0; i<enrolled.size();i++)
    {
        std::cout << enrolled[i].getCourseName() <<"         "<< enrolled[i].getCourseCode() <<"       "<< enrolled[i].getCourseSemster()<< std::endl;
    }
}

std::ostream& operator<<(std::ostream &os, const Student &st)
{
    float sum=0;
    int i;
    float mo;
    int temp=st.passed.size();
    for(i=0; i<temp; i++)
    {
        sum+=st.passed[i].second;
    }
    mo=sum/temp;
    os << "Όνομα Επώνυμο " << st.onoma_eponimo <<" Αριθμός Μητρώου : "<<st.AM <<" Εξάμηνο "<< st.semester << " Μέσος όρος : "<< mo << std::endl;
    os << "Μάθημα : " << " Βαθμός : " << std::endl ;
    Course coursename;
    for(i=0; i<temp; i++)
    {
        coursename=st.passed[i].first;
        os << coursename.getCourseName()  << " " <<st.passed[i].second << std::endl;
    }
    return os;
}

void Student::operator+= (const Course &subject)
{
    this->enroll(subject);
}

int Student::operator!= (const Student &st )
{
    if (this->semester == st.semester)
    {
        return 0;
    }
    return 1;
}

int Student::operator== (const Student &st )
{
    if (this->semester == st.semester)
    {
        return 1;
    }
    return 0;
}

int Student::operator>= (const Student &st )
{
    if (this->semester >= st.semester)
    {
        return 1;
    }
    return 0;
}

int Student::operator<= (const Student &st )
{
    if (this->semester <= st.semester)
    {
        return 1;
    }
    return 0;
}

int Student::operator< (const Student &st )
{
    if (this->semester < st.semester)
    {
        return 1;
    }
    return 0;
}

int Student::operator> (const Student &st )
{
    if (this->semester > st.semester)
    {
        return 1;
    }
    return 0;
} 