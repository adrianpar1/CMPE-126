//============================================================================
// Name        : recursiveReverseNumber.cpp
// Author      : Mahima
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;


unsigned int reverseNumber(unsigned int input);

int main2() {
	unsigned int n;
	n = reverseNumber(1234);
	cout << n << endl; //expects 4321

	n = reverseNumber(5);
	cout << n << endl; //expects 5

	n = reverseNumber(13);
	cout << n << endl; //expects 31

	return 0;
}

/*
1234
%1000
=
4000+
234
*/

unsigned int reverseNumber(unsigned int input){
	 //BASE CASES
    if (input>=0 && input<10){
        return input;
    }

    if (input%10==0 && input!=0){
        return input;
    }

    //Getting the length of the integer
    int temp=input;
    int length = 0;
    while (temp>0){
        temp = temp/10;
        length++;
    }

    int divisor = 1;
    for(int i=1; i<length; i++){
        divisor = divisor*10;
    };

    int last=input%10;


    int newNumber=(input/10);
    return ((last*divisor) + reverseNumber(newNumber));
}

//1234
//4*1000 + 3*100 + 2*10 + 1*1