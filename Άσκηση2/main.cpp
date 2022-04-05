#include "Student.h"
#include <new>
#include <iostream>

using namespace std;

int main ()
{
    system ("chcp 1253");

    //Constructor 1 
    cout <<"-------------------------------------------------------------------------------------------------------" << endl;

    cout << "Χρήση  Constructor 1 ,αρχικοποιήση ΑΜ ,αρχικοποιήση ονοματεπωνύμου και default τιμη εξαμήνου 1 : " << endl;
    Student foititis1("47122","Ματέο Ρουμπάτι");
    foititis1.ShowStudent(cout); //Λειτουργία Εμφάνισης
    foititis1.IncreaseSemester(); //Λειρουργεία προσάυξης εξαμήνου.
    foititis1.ShowStudent(cout);
      
    cout <<"-------------------------------------------------------------------------------------------------------" << endl;

    cout << "Χρήση  Constructor 2 : " << endl;
    //Constructor 2  
    Student foititis2("12345","Μαυρίκιος Μαυρικίου",4);
    foititis2.ShowStudent(cout);
    
    cout <<"-------------------------------------------------------------------------------------------------------" << endl;

    cout << "Χρήση Copy Constructor " << endl;
    //Copy constructor
    Student foititis3(foititis1);
    foititis3.ShowStudent(cout);

    cout <<"-------------------------------------------------------------------------------------------------------" << endl;

    cout << "Χρήση Setters  :" << endl;
    //Setters 
    Student foititis4("00000","Κενό Κενό",0); //Χρήση constructor 2 για δημιουργία student με dummy data  
    foititis4.ShowStudent(cout);
    foititis4.setAm("71347122");
    foititis4.setOnomaEponimo("Ματέο Ρουμπάτι");
    foititis4.setSemester(12);

    cout <<"-------------------------------------------------------------------------------------------------------" << endl;

    cout << "Εμφάνιση στοιχείων φοιτητή με  getters " << endl;
    //Getters
    char *arithmos_mitroou;
    std::string fullname;
    unsigned int eksamino;

    arithmos_mitroou=foititis4.getAm();
    fullname=foititis4.getOnomaEponimo();
    eksamino=foititis4.getSemester();

    cout << "AM : "<<arithmos_mitroou <<" Ονοματεπώνυμο : " << fullname << " Εξάμηνο : " << eksamino << endl;
    cout <<"-------------------------------------------------------------------------------------------------------" << endl;


    return 0;
}
