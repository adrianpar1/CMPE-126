#include <iostream>
#include <cmath>
#include "vector.h"


using namespace std;

    Vector::Vector() : x(0),y(0){
        update();
    }

    Vector::Vector(double x, double y) : x(x), y(y){
        update();
    }

    Vector::Vector(double x, double y, double magnitude, double direction) : x(x), y(y), magnitude(magnitude), direction(direction){
    }

    void Vector::setx(double x){
        this->x=x;
        update();
    }

    void Vector::sety(double y){
        this->y=y;
        update();
    }
    double Vector::getx(){
        return x;
    }
    double Vector::gety(){
        return y;
    }

    double Vector::getmagnitude(){
        magnitude = sqrt(pow(x,2)+pow(y,2));
        return magnitude;
    }

    double Vector::getdirection(){
        direction = atan(y/x);
        return direction;
    }

    void Vector::normalize(){

        x=x/getmagnitude();
        y=y/getmagnitude();

        update();
    }

    double Vector::calcx(double direction, double magnitude){
        double x=cos(direction)*magnitude;
        return x;
    }

    double Vector::calcy(double direction, double magnitude){
        double y=sin(direction)*magnitude;
        return y;
    }

    Vector operator+(const Vector& v1,const Vector& v2){
        Vector v3;
        v3.x=v1.x+v2.x;
        v3.y=v1.y+v2.y;
        v3.update();
        return v3;
    }

    
    Vector operator-(const Vector& v1,const Vector& v2){
        Vector v3;
        v3.x=v1.x-v2.x;
        v3.y=v1.y-v2.y;
        v3.update();
        return v3;
    }

    ostream& operator <<(ostream& outs,const Vector& v){
        outs<<"x:"<<v.x<<endl<<"y:"<<v.y<<endl<<"Magnitude:"<<v.magnitude<<endl<<"Direction:"<<v.direction<<endl;
        return outs;
    }

   void Vector::update(){
    magnitude=getmagnitude();
    direction=getdirection();
    }


