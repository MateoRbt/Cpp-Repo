#include "Student.h"
#include <new>
#include <string.h>
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

    
