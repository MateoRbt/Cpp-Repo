#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string.h>


class Student 
{
    //Atributtes
    private:
    char *AM ;
    std::string  onoma_eponimo ;
    unsigned int semester ;

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

};

#endif
