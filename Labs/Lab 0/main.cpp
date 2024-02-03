#include <iostream>
#include "myRectangle.h"
#include "myRectangle.cpp"
using namespace std;

int main(){
    
    myRectangle rectangle(3,2);
    rectangle.getArea();
    rectangle.printArea();
    rectangle.setWidth();
    rectangle.setLength();
    cout<<"Area from getArea function call: "<<rectangle.getArea()<<endl;
    rectangle.printArea();


    return 0;
}

/*
Area is : 6
What width?
5
What length?
8
Area from getArea function call: 40
Area is : 40


Area is : 6
What width?
0
What length?
-3
Area from getArea function call: Rectangle cannot exist with these dimensions, area would be: 0
printArea function: Rectangle cannot exist with these dimensions
*/