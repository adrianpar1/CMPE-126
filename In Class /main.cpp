#include <iostream>
#include "vector.h"
#include "vector.cpp"
#include "unitvector.h"
#include "unitvector.cpp"

using namespace std;

int main(){

    Vector vector(2,4);
    Vector vector1(3,3);

    cout<<"Vector 1:"<<endl<<vector<<endl<<endl;
    cout<<"Vector 1+2:"<<endl<<vector+vector1<<endl<<endl;
    cout<<"Vector 1-2:"<<endl<<vector-vector1<<endl<<endl;



   //Normalizing
    vector.normalize();
    cout<<"Vector 1 normalized:"<<endl<<vector<<endl<<endl;

    UnitVector uvector;
    cout<<"Unit vector:"<<endl<<uvector<<endl<<endl;

    UnitVector uvector1(2,4);
    cout<<"Unit vector 2:"<<endl<<uvector1<<endl<<endl;

    return 0;
}