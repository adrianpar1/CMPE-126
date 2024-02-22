#include "unitvector.h"
#include "vector.h"

using namespace std;

UnitVector::UnitVector() : Vector(){
   magnitude=1;
}

UnitVector::UnitVector(double x, double y) : Vector(x,y){
   normalize();
}

UnitVector::UnitVector(double x, double y, double magnitude, double direction) : Vector(x,y,magnitude,direction){
   normalize();
}

