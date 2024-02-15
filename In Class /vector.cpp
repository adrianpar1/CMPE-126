#include <iostream>
#include <cmath>
#include "vector.h"


using namespace std;

    Vector::Vector() : x(0),y(0){

    }

    Vector::Vector(double x, double y) : x(x), y(y){
    }

    Vector::Vector(double x, double y, double magnitude, double direction){
        this->x=x;
        this->y=y;
        this->magnitude=magnitude;
        this->direction=direction;
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

    Vector Vector::normalize(){
        Vector vector1(x,y);
        x=x/getmagnitude();
        y=y/getmagnitude();

        vector1.x=x;
        vector1.y=y;

        return vector1;
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

   void Vector::update(){
    magnitude=getmagnitude();
    }


