#include "arrayList.h"
#include "arrayList.cpp"
#include <iostream>

using namespace std;

int main(){

arrayList array;

cout<<"Creating array with default constructor: ";
array.print();
cout<<endl<<"\nArray size:"<<array.listSize()<<"\nMax size:"<<array.maxListSize()
    <<endl<<"Checking if is empty and is full:";

if (array.isEmpty()){
    cout<<"\n***IS EMPTY***";
}
else cout<<"\n***IS NOT EMPTY***";

if (array.isFull()){
    cout<<"\n***IS FULL***";
}
else cout<<"\n***IS NOT FULL***";



cout<<endl<<endl<<"Checking insertEnd:"<<endl;
array.insertEnd(4);
array.print();
cout<<endl;

array.insertEnd(8);
array.print();
cout<<endl;

array.insertEnd(1);
array.print();
cout<<endl;

array.insertEnd(0);
array.print();
cout<<endl;

array.insertEnd(7);
array.print();
cout<<endl;

array.insertEnd(3);
array.print();
cout<<endl;


cout<<endl<<"\nArray size:"<<array.listSize()<<"\nMax size:"<<array.maxListSize()
    <<endl<<"Checking if value at index 2 is 4";

if (array.isItemAtEqual(2,4)){
    cout<<"\n***EQUAL***";
}
else cout<<"\n***IS NOT EQUAL***";

cout<<endl<<"Checking if value at index 3 is 4";
if (array.isItemAtEqual(3,4)){
    cout<<"\n***EQUAL***";
}
else cout<<"\n***IS NOT EQUAL***";



cout<<endl<<"Checking if is empty and is full:";

if (array.isEmpty()){
    cout<<"\n***IS EMPTY***";
}
else cout<<"\n***IS NOT EMPTY***";

if (array.isFull()){
    cout<<"\n***IS FULL***";
}
else cout<<"\n***IS NOT FULL***";


cout<<endl<<endl;
array.print();
cout<<endl<<array.retreiveAt(4);
cout<<"\nChecking insertAt, inserting value 9 at index 1\n";
array.insertAt(1,9);
array.print();

cout<<endl<<"\nChecking replaceAt, replacing index 3 with the value 5\n";
array.replaceAt(3,5);
array.print();

cout<<endl<<"\nChecking removeAt, removing index 5\n";
array.removeAt(5);
array.print();


cout<<endl<<"Constructing a new object with maxsize 10";
arrayList array2(10);
cout<<"\n maxSize is "<<array2.maxListSize();
array2.print();

cout<<"\nChecking assignment operator, array2=array"<<endl;
array2=array;
cout<<"Array 2 now: ";
array2.print();







cout<<endl<<"\nChecking clearList\n";
array2.clearList();
array2.print();

cout<<endl<<"\nArray size:"<<array2.listSize()<<"\nMax size:"<<array2.maxListSize()
    <<endl<<"Checking if is empty and is full:";

if (array2.isEmpty()){
    cout<<"\n***IS EMPTY***";
}
else cout<<"\n***IS NOT EMPTY***";

if (array2.isFull()){
    cout<<"\n***IS FULL***";
}
else cout<<"\n***IS NOT FULL***";



    return 0;
}


/*
Creating array with default constructor: {0}

Array size:0
Max size:3
Checking if is empty and is full:
***IS EMPTY***
***IS NOT FULL***

Checking insertEnd:
{4}
{4,8}
{4,8,1}
{4,8,1,0}
{4,8,1,0,7}
{4,8,1,0,7,3}


Array size:6
Max size:6
Checking if value at index 2 is 4
***IS NOT EQUAL***
Checking if value at index 3 is 4
***IS NOT EQUAL***
Checking if is empty and is full:
***IS NOT EMPTY***
***IS FULL***

{4,8,1,0,7,3}
7
Checking insertAt, inserting value 9 at index 1
4,8,1,0,7,3,0,{4,9,8,1,0,7,3}

Checking replaceAt, replacing index 3 with the value 5
{4,9,8,5,0,7,3}

Checking removeAt, removing index 5
{4,9,8,5,0,3}
Constructing a new object with maxsize 10
 maxSize is 10{0}
Checking assignment operator, array2=array
Array 2 now: {4,9,8,5,0,3}

Checking clearList
{0}

Array size:0
Max size:12
Checking if is empty and is full:
***IS EMPTY***
***IS NOT FULL***
Deleting array
Deleting array%     */