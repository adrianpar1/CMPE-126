#include <iostream>
#include "/Users/adrianpar/Projects/CMPE126/Workspace/Labs/Lab 3 - arrayList/arrayList.h"
#include "/Users/adrianpar/Projects/CMPE126/Workspace/Labs/Lab 4 - Linked Lists/linkedList.h"

int main(){

std::cout<<"---ARRAY LIST---"<<std::endl;
arrayList<int> array;
arrayList<int> array2;

array.insertEnd(6);
array.insertEnd(4);
array.insertEnd(2);
std::cout<<"ARRAY 1: ";
array.print();
std::cout<<std::endl;

array2.insertEnd(8);
array2.insertEnd(4);
array2.insertEnd(10);
array2.insertEnd(3);
array2.insertEnd(4);
array2.insertEnd(1);
array2.insertEnd(9);
std::cout<<"ARRAY 2: ";
array2.print();
std::cout<<std::endl;


std::cout<<std::endl<<"--EXTENDING--\nARRAY 1: ";
array.extend(array2);
array.print();
std::cout<<std::endl;

std::cout<<"Min: "<<array.min()<<std::endl;
std::cout<<"Max: "<<array.max()<<std::endl;
std::cout<<"Count of element (4):"<<array.count(4);


std::cout<<std::endl<<std::endl<<std::endl<<"---LINKED LIST---"<<std::endl;
linkedList<string> linkedlist;
linkedList<string> linkedlist2;


linkedlist.insertEnd("HI");
linkedlist.insertEnd("FOR");
linkedlist.insertEnd("THIS");
std::cout<<"LINKEDLIST 1: ";
linkedlist.print();
std::cout<<std::endl;

linkedlist2.insertEnd("IS");
linkedlist2.insertEnd("DEBUG");
linkedlist2.insertEnd("TEXT");
linkedlist2.insertEnd("FOR");
linkedlist2.insertEnd("LINKED");
linkedlist2.insertEnd("LISTS");
linkedlist2.insertEnd("FUNCTIONALITIES");
std::cout<<"LINKEDLIST 2: ";
linkedlist2.print();
std::cout<<std::endl;


std::cout<<std::endl<<"--EXTENDING--\nLINKEDLIST 1: ";
linkedlist.extend(linkedlist2);
linkedlist.print();
std::cout<<std::endl;

std::cout<<"Min: "<<linkedlist.min()<<std::endl;
std::cout<<"Max: "<<linkedlist.max()<<std::endl;
std::cout<<"Count of element (FOR):"<<linkedlist.count("FOR");

    return 0;
}


/*
---ARRAY LIST---
ARRAY 1: {6,4,2}
ARRAY 2: {8,4,10,3,4,1,9}

--EXTENDING--
ARRAY 1: {6,4,2,8,4,10,3,4,1,9}
Min: 1
Max: 10
Count of element (4):3


---LINKED LIST---
LINKEDLIST 1: HI FOR THIS 
LINKEDLIST 2: IS DEBUG TEXT FOR LINKED LISTS FUNCTIONALITIES 

--EXTENDING--
LINKEDLIST 1: HI FOR THIS IS DEBUG TEXT FOR LINKED LISTS FUNCTIONALITIES 
Min: DEBUG
Max: THIS
Count of element (FOR):2
Deleting array
Deleting array% */