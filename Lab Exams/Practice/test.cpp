#include "LabExamPractice.h"
#include <iostream>

int main(){

    array<int> arr1;

    arr1.insertAt(0,3);
    arr1.insertAt(1,6);
    arr1.insertAt(2,9);
    arr1.insertAt(3,12);
    arr1.print();
    if(arr1.isItemAtEqual(2,12)){
        std::cout<<"YES";
    };
}