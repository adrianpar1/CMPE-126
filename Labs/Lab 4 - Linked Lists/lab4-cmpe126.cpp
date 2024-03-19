#include <iostream>
#include "linkedList.h"
#include "sortedLinkedList.h"

template <class Type>
void isEmpty(linkedList<Type>);

template <class Type>
void isItemAtEqual(linkedList<Type>& ,int,Type);

template <class Type>
void isItemInList(sortedLinkedList<Type>&, Type);

int main(){

//Creating a linkedList;
linkedList<int> list;

std::cout<<"Checking if list is empty:"<<std::endl;
isEmpty(list);


std::cout<<"\nInserting elements 3,4,5 and then printing the linkedList";
std::cout<<std::endl;
list.insertEnd(3);
list.insertEnd(4);
list.insertEnd(5);
list.print();



std::cout<<"\nElement at index 1 is: "<<list.retreiveAt(1);
std::cout<<std::endl<<std::endl;


std::cout<<"\nChecking remove at function, removing element at index 1";
list.removeAt(1);
std::cout<<std::endl;
list.print();

std::cout<<"\nElement at index 1 is:"<<list.retreiveAt(1);
std::cout<<std::endl<<std::endl;


std::cout<<"\nChecking if element in position 1 is equal to 4:"<<std::endl;
isItemAtEqual(list,1,4);
std::cout<<"\nChecking if element in position 1 is equal to 5:"<<std::endl;
isItemAtEqual(list,1,5);


std::cout<<"\nChecking insertAt function, inserting 7 at index 1 and 9 at index 0, then printing the linkedList";
std::cout<<std::endl;
list.insertAt(1,7);
list.insertAt(0,9);
list.print();
std::cout<<std::endl<<std::endl;


std::cout<<"\nChecking replaceAt function, replacing index 1 with the element 8";
std::cout<<std::endl;
list.replaceAt(1,8);
list.print();



std::cout<<"\nCreating a second linked list, checking if it's empty, then checking the assignment operator, equating it to the first linkedList";
linkedList<int> list2;
list2=list;
std::cout<<std::endl;
list2.print();



std::cout<<"\nChecking the clearlist function:";
list.clearList();
list.print();
isEmpty(list);
std::cout<<std::endl<<std::endl;


std::cout<<std::endl<<std::endl;
std::cout<<"-----------CHECKING SORTEDLINKEDLIST-----------";
std::cout<<"\nCreating sorted linked list, adding elements 9 4 7 1 0 10 1 5:"<<std::endl;

sortedLinkedList<int> sortedlist;

sortedlist.insert(9);
sortedlist.insert(4);
sortedlist.insert(7);
sortedlist.insert(1);
sortedlist.insert(0);
sortedlist.insert(10);
sortedlist.insert(1);
sortedlist.insert(5);

std::cout<<std::endl;
sortedlist.print();


std::cout<<"\nChecking remove,removing element 1:"<<std::endl;
sortedlist.remove(1);
std::cout<<std::endl;
sortedlist.print();

std::cout<<"\nChecking remove,removing element 10:"<<std::endl;
sortedlist.remove(10);
std::cout<<std::endl;
sortedlist.print();

std::cout<<"\nChecking remove,removing element 4:"<<std::endl;
sortedlist.remove(4);
std::cout<<std::endl;
sortedlist.print();

std::cout<<"\nElement at index 1 is: "<<sortedlist.retreiveAt(1);
std::cout<<"\nElement at index 3 is: "<<sortedlist.retreiveAt(3);
std::cout<<std::endl;

std::cout<<"\nChecking if 3 is in list"<<std::endl;
isItemInList(sortedlist,3);
std::cout<<"\nChecking if 5 is in list"<<std::endl;
isItemInList(sortedlist,5);


std::cout<<"\nCreating a second sorted linked list, then checking the assignment operator, equating it to the first linkedList";
sortedLinkedList<int> sortedlist2;
sortedlist2=sortedlist;
std::cout<<std::endl;
sortedlist2.print();
    return 0;
}


//FUNCTION DEFINITIONS

template <class Type>
void isEmpty(linkedList<Type> list){
    if (list.isEmpty()){
        std::cout<<"Is empty"<<std::endl;
    }
    else{
        std::cout<<"Is not empty"<<std::endl;
    }
}

template <class Type>
void isItemAtEqual(linkedList<Type> &list, int pos, Type element){
   
    if(list.isItemAtEqual(pos,element)){
        std::cout<<"Is equal"<<std::endl;
        }
    else{
        std::cout<<"Is not equal"<<std::endl;
        }
}

template <class Type>
void isItemInList(sortedLinkedList<Type> &list, Type element){
   
    if(list.isItemInList(element)){
        std::cout<<"Is in list"<<std::endl;
        }
    else{
        std::cout<<"Is not in list"<<std::endl;
        }
}




/*
Checking if list is empty:
Is empty

Inserting elements 3,4,5 and then printing the linkedList
3 4 5 
Element at index 1 is: 4


Checking remove at function, removing element at index 1
3 5 
Element at index 1 is:5


Checking if element in position 1 is equal to 4:
Is not equal

Checking if element in position 1 is equal to 5:
Is equal

Checking insertAt function, inserting 7 at index 1 and 9 at index 0, then printing the linkedList
9 3 7 5 


Checking replaceAt function, replacing index 1 with the element 8
9 8 7 5 
Creating a second linked list, checking if it's empty, then checking the assignment operator, equating it to the first linkedList
9 8 7 5 
Checking the clearlist function:Is empty




-----------CHECKING SORTEDLINKEDLIST-----------
Creating sorted linked list, adding elements 9 4 7 1 0 10 1 5:

0 1 1 4 5 7 9 10 
Checking remove,removing element 1:

0 1 4 5 7 9 10 
Checking remove,removing element 10:

0 1 4 5 7 9 
Checking remove,removing element 4:

0 1 5 7 9 
Element at index 1 is: 1
Element at index 3 is: 7

Checking if 3 is in list
Is not in list

Checking if 5 is in list
Is in list

Creating a second sorted linked list, then checking the assignment operator, equating it to the first linkedList
0 1 5 7 9 %                          */