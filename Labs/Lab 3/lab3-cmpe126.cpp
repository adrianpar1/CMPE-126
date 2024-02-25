#include "arrayList.h"
//#include "arrayList.cpp"
#include <iostream>
#include <string>

using namespace std;

int main(){

arrayList<int> array;

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

array.insertEnd(2);
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
cout<<"\nChecking insertAt, inserting value 9 at index 1\n";
array.insertAt(1,9);
array.print();

cout<<endl<<"\nChecking replaceAt, replacing index 3 with the value 5\n";
array.replaceAt(3,5);
array.print();

cout<<endl<<"\nChecking removeAt, removing index 5\n";
array.removeAt(5);
array.print();

cout<<"\nChecking retrieveAt, getting value at index 1\n";
cout<<array.retreiveAt(1);


cout<<endl<<"Constructing a new object with maxsize 10";
arrayList<int> array2(10);
cout<<"\nmaxSize is "<<array2.maxListSize();
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












cout<<endl<<endl<<endl<<endl<<endl<<endl;
cout<<"\n***********TESTING STRING ARRAY***********";
cout<<endl<<endl;


arrayList<string> array3;

cout<<"Creating array with default constructor: ";
array3.print();
cout<<endl<<"\nArray size:"<<array3.listSize()<<"\nMax size:"<<array.maxListSize()
    <<endl<<"Checking if is empty and is full:";

if (array3.isEmpty()){
    cout<<"\n***IS EMPTY***";
}
else cout<<"\n***IS NOT EMPTY***";

if (array3.isFull()){
    cout<<"\n***IS FULL***";
}
else cout<<"\n***IS NOT FULL***";



cout<<endl<<endl<<"Checking insertEnd:"<<endl;
array3.insertEnd("HELLO");
array3.print();
cout<<endl;

array3.insertEnd("THERE");
array3.print();
cout<<endl;

array3.insertEnd("THIS");
array3.print();
cout<<endl;

array3.insertEnd("IS");
array3.print();
cout<<endl;

array3.insertEnd("A");
array3.print();
cout<<endl;

array3.insertEnd("TEST");
array3.print();
cout<<endl;


cout<<endl<<"\nArray size:"<<array3.listSize()<<"\nMax size:"<<array3.maxListSize()
    <<endl<<"Checking if value at index 2 is THIS";

if (array3.isItemAtEqual(2,"THIS")){
    cout<<"\n***EQUAL***";
}
else cout<<"\n***IS NOT EQUAL***";

cout<<endl<<"Checking if value at index 3 is TEST";
if (array3.isItemAtEqual(3,"TEST")){
    cout<<"\n***EQUAL***";
}
else cout<<"\n***IS NOT EQUAL***";



cout<<endl<<"Checking if is empty and is full:";

if (array3.isEmpty()){
    cout<<"\n***IS EMPTY***";
}
else cout<<"\n***IS NOT EMPTY***";

if (array3.isFull()){
    cout<<"\n***IS FULL***";
}
else cout<<"\n***IS NOT FULL***";


cout<<endl<<endl;
cout<<"\nChecking insertAt, inserting value MY FRIEND at index 2\n";
array3.insertAt(2," MY FRIEND");
array3.print();

cout<<endl<<"\nChecking replaceAt, replacing index 6 with the value DEBUG\n";
array3.replaceAt(6,"DEBUG");
array3.print();

cout<<endl<<"\nChecking removeAt, removing index 5\n";
array3.removeAt(5);
array3.print();

cout<<"\nChecking retrieveAt, getting value at index 1\n";
cout<<array3.retreiveAt(1);


cout<<endl<<"Constructing a new object with maxsize 10";
arrayList<string> array4(10);
cout<<"\nmaxSize is "<<array4.maxListSize();
array4.print();

cout<<"\nChecking assignment operator, array4=array3"<<endl;
array4=array3;
cout<<"Array 4 now: ";
array4.print();







cout<<endl<<"\nChecking clearList\n";
array4.clearList();
array4.print();

cout<<endl<<"\nArray size:"<<array4.listSize()<<"\nMax size:"<<array4.maxListSize()
    <<endl<<"Checking if is empty and is full:";

if (array4.isEmpty()){
    cout<<"\n***IS EMPTY***";
}
else cout<<"\n***IS NOT EMPTY***";

if (array4.isFull()){
    cout<<"\n***IS FULL***";
}
else cout<<"\n***IS NOT FULL***";




    return 0;
}


/*
*/