#include "Student.h"
#include <new>
#include <iostream>
#include "Course.h"
#include <fstream>
#include <cstring>


using namespace std;

int main ()
{
    system ("chcp 1253");
    ofstream myfile;
    myfile.open ("myfile.txt");

    Student foititis("71347122","Mateo Rubati",12);
    Student foititis2("12345","Mhtsos mhtsou",1);
    Course mathima1("1001","αλγεβρα",1);
    Course mathima2("1002","dasdasdas",1);
    Course mathima3("2001","dasdasdad",2);
    Course mathima4("2002","dasdasd",2);
    Course mathima5("3001","dasdasdad",3);
    Course mathima6("3002","dasdasd",3);
    vector<Course> mathimata;

    mathimata.push_back(mathima1);
    mathimata.push_back(mathima2);
    mathimata.push_back(mathima3);
    mathimata.push_back(mathima4);
    mathimata.push_back(mathima5);
    mathimata.push_back(mathima6);
    foititis.ShowEnrolledCourses();

    foititis.setPassedCourses(mathimata[1],5.0);
    foititis.setPassedCourses(mathimata[2],5.0);
    foititis.setPassedCourses(mathimata[3],6.0);
    foititis += mathimata[0];
    foititis.ShowEnrolledCourses();
    cout << foititis ;
    myfile << foititis;
    myfile.close();

    return 0;
}
