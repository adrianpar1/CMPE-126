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

/*
Vector 1:
x:2
y:4
Magnitude:4.47214
Direction:1.10715


Vector 1+2:
x:5
y:7
Magnitude:8.60233
Direction:0.950547


Vector 1-2:
x:-1
y:1
Magnitude:1.41421
Direction:-0.785398


Vector 1 normalized:
x:0.447214
y:0.993808
Magnitude:1.0898
Direction:1.14794


Unit vector:
x:0
y:0
Magnitude:1
Direction:nan


Unit vector 2:
x:0.447214
y:0.993808
Magnitude:1.0898
Direction:1.14794
*/