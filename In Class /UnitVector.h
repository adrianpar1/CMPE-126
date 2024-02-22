#ifndef UNITVECTOR_H
#define UNITVECTOR_H
#include "vector.h"

using namespace std;

class UnitVector : public Vector{
    
    public:
    //default constructor
    UnitVector();

    //Constructor with two arguments
    UnitVector(double x, double y);

    //Constructor with four arguments
    UnitVector(double x, double y, double magnitude, double direction);
    
};


#endif //UNITVECTOR_H