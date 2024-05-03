#ifndef BOX_H_
#define BOX_H_

#include <iostream>
#include "imperialWeight.h"
using namespace std;


class Box : public imperialWeight{
    private: 
    string name;
    imperialWeight weight;
    //int size;
   //int maxSize;
   // Box *array;

    public:
    Box();
    Box(string, int, int);
   // ~Box();
    void setName(string);
    void setWeight(int, int);
    string getName();
    imperialWeight getWeight();
    friend ostream& operator<<(ostream& out, Box&);

/*
    void Heaviest();

    void TotalWeight();

    void addBox(Box box);

    void print();
*/


};




#endif //BOX_H_