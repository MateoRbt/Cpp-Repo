#include "Student.h"
#include <new>
#include <iostream>

using namespace std;

int main ()
{
    system ("chcp 1253");

    //Constructor 1 
    cout <<"-------------------------------------------------------------------------------------------------------" << endl;

    cout << "�����  Constructor 1 ,������������ �� ,������������ �������������� ��� default ���� �������� 1 : " << endl;
    Student foititis1("47122","����� ��������");
    foititis1.ShowStudent(cout); //���������� ���������
    foititis1.IncreaseSemester(); //����������� ��������� ��������.
    foititis1.ShowStudent(cout);
      
    cout <<"-------------------------------------------------------------------------------------------------------" << endl;

    cout << "�����  Constructor 2 : " << endl;
    //Constructor 2  
    Student foititis2("12345","��������� ���������",4);
    foititis2.ShowStudent(cout);
    
    cout <<"-------------------------------------------------------------------------------------------------------" << endl;

    cout << "����� Copy Constructor " << endl;
    //Copy constructor
    Student foititis3(foititis1);
    foititis3.ShowStudent(cout);

    cout <<"-------------------------------------------------------------------------------------------------------" << endl;

    cout << "����� Setters  :" << endl;
    //Setters 
    Student foititis4("00000","���� ����",0); //����� constructor 2 ��� ���������� student �� dummy data  
    foititis4.ShowStudent(cout);
    foititis4.setAm("71347122");
    foititis4.setOnomaEponimo("����� ��������");
    foititis4.setSemester(12);

    cout <<"-------------------------------------------------------------------------------------------------------" << endl;

    cout << "�������� ��������� ������� ��  getters " << endl;
    //Getters
    char *arithmos_mitroou;
    std::string fullname;
    unsigned int eksamino;

    arithmos_mitroou=foititis4.getAm();
    fullname=foititis4.getOnomaEponimo();
    eksamino=foititis4.getSemester();

    cout << "AM : "<<arithmos_mitroou <<" ������������� : " << fullname << " ������� : " << eksamino << endl;
    cout <<"-------------------------------------------------------------------------------------------------------" << endl;


    return 0;
}
