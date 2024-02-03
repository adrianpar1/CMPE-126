#include <iostream>
#include <cmath>
#include "vector.h"


using namespace std;

    Vector::Vector() : x(0),y(0){

    }

    Vector::Vector(double x, double y){
        this->x=x;
        this->y=y;
    }

    Vector::Vector(double x, double y, double magnitude, double direction){
        this->x=x;
        this->y=y;
        this->magnitude=magnitude;
        this->direction=direction;
    }

    void Vector::setx(double x){
        this->x=x;
    }

    void Vector::sety(double y){
        this->y=y;
    }

    double Vector::calcmagnitude(){
        magnitude = sqrt(pow(x,2)+pow(y,2));
        return magnitude;
    }

    double Vector::calcdirection(){
        direction = atan(y/x);
        return direction;
    }

    Vector Vector::normalize(){
        Vector vector1(x,y);
        x=x/calcmagnitude();
        y=y/calcmagnitude();

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

   void Vector::update(){

    }


