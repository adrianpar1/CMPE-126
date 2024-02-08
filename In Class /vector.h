#ifndef VECTOR_H
#define VECTOR_H

class Vector{

    public:

    //Default constructor
    Vector();

    //Constructor with two parameters
    Vector(double x, double y);

    //Constructor with four parameters
    Vector(double x, double y, double magnitude, double direction);

    //Function that sets x
    void setx(double x);

    //Function that sets y
    void sety(double y);

    //Function that gets x
    double getx();

    //Function that gets y
    double gety();

    //Function that calculates the magnitude
    double calcmagnitude();

    //Function that calculates the direction
    double calcdirection();

    //Function that normalizes
    Vector normalize();

    //Function that calculates x
    double calcx(double direction, double magnitude);

    //Function that calculates y
    double calcy(double direction, double magnitude);


    protected:
    double x;
    double y;
    double direction;
    double magnitude;

     //Function that updates the magnitude and direction every time x and y are set
    void update();


};


#endif //VECTOR_H