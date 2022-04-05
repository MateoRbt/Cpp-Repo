#include <iostream>
#include <string>

/*
1η εργαστηριακή άσκηση  
Όνομα : Ματέο 
Επώνυμο : Ρουμπάτι 
ΑΜ : 71347122 
*/

struct triangle
{
    int pleura_a;
    int  pleura_b;
    int ipotinousa;
    std::string id;
};

using namespace std;

//Δήλωσεις Συναρτήσεων 
void square ( int& ); 
triangle* Inittriangle();
void square (triangle&);
triangle& pythagorio (triangle[] , const int );
double radCalc (double , int = 2 , int = 4);

int main (int argc, char **argv)
{
    const double pi = 3.14 ;
    double *p ;
    p = (double *) (&pi);     //Αλλαγή τιμής σε const double με χρήση pointer.
    *p = 3.14159;
    cout << "Τιμή const pi  = " << pi << " Διέυθυνση μνήμης του const pi  = " << &pi << endl;
    cout << "Τιμή pointer p = " << *p << " Διέυθυνση μνήμης που δείχνει ο pointer p = " << p << endl;
    int num1 = 5;
    cout << "Τιμή num1 = "<< num1 << endl;
    square(num1);
    cout << "Μετά την συνάρτηση square num1 = "<< num1  << endl;
    triangle *testing=Inittriangle(); 
    triangle &orthogonio_trigono = pythagorio(testing,3); 
    cout <<"Το ορθογώνιο τρίγωνο είναι το  "<< orthogonio_trigono.id <<endl;
    delete[] testing ; //Χρήση delete για αποδέσμευση μνήμης που χρησοιμοποιήσαμε για τον δυναμικό πίνακα sample
    cout << radCalc (3.14 , 6, 4) << endl;
    cout << radCalc( 3.14159 , 3) << endl;
    cout << radCalc (pi) << endl;
}

//Συναρτηση με Reference στίς παραμέτρους 
void square(int &n1)
{
    n1=n1*n1;

}

//Συνάρτηση που αρχικοποιή καρφωτά τον πίνακα sample
triangle* Inittriangle()
{
    triangle *sample = new triangle[3]; //Χρήση new για δήλωση δυναμικού πίνακα 
    sample[0].pleura_a=4;
    sample[0].pleura_b=3;
    sample[0].ipotinousa=5;
    sample[0].id="Τρίγωνο Α";
    sample[1].pleura_a=3;
    sample[1].pleura_b=3;
    sample[1].ipotinousa=5;
    sample[1].id="Τρίγωνο Β";
    sample[2].pleura_a=4;
    sample[2].pleura_b=4;
    sample[2].ipotinousa=6;
    sample[2].id="Τρίγωνο Γ";
    return sample;
}

//Συνάρτηση square με υπερφόρτωση 
void square( triangle &test1)
{
    test1.pleura_a=test1.pleura_a*test1.pleura_a;
    test1.pleura_b=test1.pleura_b*test1.pleura_b;
    test1.ipotinousa=test1.ipotinousa*test1.ipotinousa;

}

//Συνάρτηση που επιστρέφη Reference 
triangle& pythagorio (triangle array[] , const int num_of_triangles )
{
    int i;
    int a;
    int b;
    int number ;
    for (i=0; i < num_of_triangles; i++)
    {
        square(array[i]);
        a=array[i].ipotinousa;
        b=array[i].pleura_a+array[i].pleura_b;
        if (a == b)
        {
            number = i;
        }
    }
    return array[number];
}

// Συνάρτηση που έχουν παραμέτρους με default τιμή 
double radCalc (double val ,int numerator , int denominator)
{
    return  (numerator * val ) / denominator ;
}
