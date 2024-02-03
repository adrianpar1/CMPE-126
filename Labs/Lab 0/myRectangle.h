
#ifndef MYRECTANGLE_H
#define MYRECTANGLE_H

using namespace std;

class myRectangle{
        public:
        //Default constructor for the myRectangle class
        myRectangle();

        //Constructor for the myRectangle class, will set the width and length to the values given in the arguments
        myRectangle(int newwidth, int newlength);
        
        //Function that sets the width of the myRectangle object
        void setWidth();


        // Function that sets the length of the myRectangle object
        void setLength();

        //Function that returns the area of the myRectangle object as an int
        int getArea();

        //Function that prints the area of the myRectangle object
        void printArea();

        private:
        //private variables of the myRectangle object
        int width;
        int length;
        

    };

#endif