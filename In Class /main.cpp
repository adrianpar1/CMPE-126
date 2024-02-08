#include <iostream>
#include "vector.h"
#include "vector.cpp"
#include "UnitVector.h"
#include "UnitVector.cpp"

using namespace std;

int main(){

    Vector vector(2,4);

    cout<<"Vector's x is: "<<vector.getx()<<endl;
    cout<<"Vector's y is: "<<vector.gety()<<endl;
    cout<<"Vector's magnitude is: "<<vector.calcmagnitude()<<endl;
    cout<<"Vector's direction is: "<<vector.calcdirection()<<endl;
    
   //Normalizing
    vector.normalize();
    cout<<"Vector's normalized x is: "<<vector.getx()<<endl;
    cout<<"Vector's normalized y is: "<<vector.gety()<<endl;

    UnitVector uvector;
    cout<<"Unit vector magnitude is: "<<uvector.calcmagnitude();
/*
    //Setting new x and y
    vector.setx(10);
    vector.sety(20);

    cout<<"Vector's x is: "<<vector.x<<endl;
    cout<<"Vector's y is: "<<vector.y<<endl;
    cout<<"Vector's magnitude is: "<<vector.calcmagnitude()<<endl;
    cout<<"Vector's direction is: "<<vector.calcdirection()<<endl;
    
   //Normalizing
    vector.normalize();
    cout<<"Vector's normalized x is: "<<vector.x<<endl;
    cout<<"Vector's normalized y is: "<<vector.y<<endl;*/




    return 0;
}