#include <iostream>
#include "arrayList.h"
#include "linkedList.h"

int main(){

    arrayList<int> array1(5);

    array1.insertEnd(8);
    array1.insertEnd(3);
    array1.insertEnd(9);
    array1.insertEnd(2);
    array1.insertEnd(6);
    array1.insertEnd(4);


    std::cout<<"Array min using recursion:"<<array1.getMinRecursive()<<std::endl;

    linkedList<int> linkedlist1;

    linkedlist1.insertEnd(4);
    linkedlist1.insertEnd(3);
    linkedlist1.insertEnd(1);
    linkedlist1.insertEnd(5);

    std::cout<<"LinkedList min using recursion:"<<linkedlist1.getMinRecursive();



    return 0;
}

/*
Array min using recursion:2
LinkedList min using recursion:1
Deleting array%   */
