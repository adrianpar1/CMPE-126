#include "Arrays.h"
#include "Arrays.cpp"
#include <iostream>

using namespace std;

int main(){

    int array[5] = {1,2,3,4,5};

    cout<< array[3]<<endl;

    return 0;

    MyClass c;

    MyClass arr_myclass[5];
    c.a=1;
    c.b=2;
    c.c=3;

    arr_myclass[2] = c;

    cout<<arr_myclass[2].a << "," << arr_myclass[2].b << endl;







}