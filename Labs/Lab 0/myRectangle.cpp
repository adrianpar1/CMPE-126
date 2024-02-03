#include <iostream>
#include "myRectangle.h"
using namespace std;


 myRectangle::myRectangle(){
         width=1;
         length=1;
       }

 myRectangle::myRectangle(int newwidth, int newlength){
         width=newwidth;
         length=newlength;
       }

void myRectangle::setLength(){
    cout<<"What length?\n";
    cin>>length;

}

void myRectangle::setWidth(){
    cout<<"What width?\n" ;
    cin>>width;

}

int myRectangle::getArea(){
    if((length*width)<=0){
        cout<<"Rectangle cannot exist with these dimensions, area would be: ";
    }

   return length*width;
}

void myRectangle::printArea(){
    if((length*width)<=0){
        cout<<"printArea function: Rectangle cannot exist with these dimensions\n";
    }
    else
    cout<<"Area is : "<<length*width<<endl;
}


