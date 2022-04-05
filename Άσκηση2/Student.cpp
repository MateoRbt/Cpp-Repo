#include "Student.h"
#include <new>
#include <string.h>
#include <iostream>


//Constructor 1 Αρχικοποιήση ΑΜ και Ονοματεπώνυμο
Student::Student (const char *am ,std::string oe) 
{
    semester = 1 ; // defualt ΤΙμή εξαμήμου σε 1
    onoma_eponimo = oe;
    int len =strlen(am);
    if (len)
    {
        AM = new char [len];
		strcpy(AM,am);
    }
}

//Constructor 2 Αρχικοποιήση όλων των τιμών  
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

//Λειτουργείες Κλάσης

//Εκτύπωση στοιχείων  
void Student::ShowStudent ( std::ostream &channel ) const
{
    channel << "ΑΜ : " << AM <<" Ονοματεπώνυμο : "<< onoma_eponimo <<" Εξάμηνο : " << semester << std::endl;
}

//Αυξηση εξαμήνου κατα 1 
void Student::IncreaseSemester ()
{
    semester += 1 ;
}

    
