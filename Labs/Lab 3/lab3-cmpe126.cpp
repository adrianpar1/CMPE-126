#include "arrayList.h"
#include <iostream>
#include <string>
using namespace std;

//**No upper limit for the maximum size of the list, this is so I can dynamically change the size of the array if it were to go past the maxSize

//These functions are just to make the main file easier to read
template <class T>
void sizeMaxSize(arrayList<T>& a1);
template <class T>
void checkIfFullEmpty(arrayList<T>& a1);
template <class T>
void checkIfEqual(arrayList<T>& a1, int index, T);
template <class T>
void checkInsertEnd(arrayList<T>& a1,T type);
template <class T>
void checkInsertAt(arrayList<T>& a1, int index, T type);
template <class T>
void checkReplaceAt(arrayList<T>& a1, int index, T type);
template <class T>
void checkRemoveAt(arrayList<T>& a1, int index);
template <class T>
void checkRetrieveAt(arrayList<T>& a1, int index);
template <class T>
void fillArray(arrayList<T>&);

int main(){

//CREATING AN INT ARRAY
cout<<"+*+*+*+*+*CHECKING INT ARRAY+*+*+*+*+*";
arrayList<int> array;
cout<<"\nCreating array with default constructor: "<<endl;
array.print();
sizeMaxSize(array);
checkIfFullEmpty(array);

//POPULATING THE ARRAY
checkInsertEnd(array,4);
checkInsertEnd(array,8);
checkInsertEnd(array,1);
checkInsertEnd(array,2);
checkInsertEnd(array,7);
checkInsertEnd(array,3);

//CHECKING IF THE ARRAY IS FULL/EMPTY AND THE ISEQUAL FUNCTION
sizeMaxSize(array);
checkIfFullEmpty(array);
checkIfEqual(array,2,2);
checkIfEqual(array,3,2);

//CHECKING THE INSERT,REPLACE,REMOVE, AND RETRIEVE AT FUNCTIONW
checkInsertAt(array,1,9);
checkReplaceAt(array,3,5);
checkRemoveAt(array,5);
checkRetrieveAt(array,1);


//CREATING A SECOND INT ARRAY
cout<<endl<<"Constructing a new object with maxsize 10";
arrayList<int> array2(10);
sizeMaxSize(array2);
cout<<"\nFilling array";
fillArray(array2);
cout<<"\nChecking assignment operator, array2=array"<<endl;
array2=array;
cout<<"Array 2 now:";
array2.print();

//CHECKING CLEARLIST
cout<<endl<<"\nChecking clearList\n";
array2.clearList();
array2.print();

//CHECKING ARRAY 2'S SIZE AND IF FUlL/EMPTY
sizeMaxSize(array2);
checkIfFullEmpty(array2);











cout<<endl<<endl<<endl<<endl<<endl;

//CREATING A STRING ARRAY
cout<<"+*+*+*+*+*CHECKING STRING ARRAY+*+*+*+*+*";
arrayList<string> array3;
cout<<"\nCreating array with default constructor: "<<endl;
array3.print();
sizeMaxSize(array3);
checkIfFullEmpty(array3);

//POPULATING THE ARRAY
checkInsertEnd(array3,string("Hello"));
checkInsertEnd(array3,string("there"));
checkInsertEnd(array3,string("this"));
checkInsertEnd(array3,string("is"));
checkInsertEnd(array3,string("a"));
checkInsertEnd(array3,string("test"));

//CHECKING IF THE ARRAY IS FULL/EMPTY AND THE ISEQUAL FUNCTION
sizeMaxSize(array3);
checkIfFullEmpty(array3);
checkIfEqual(array3,0,string("Hello"));
checkIfEqual(array3,3,string("this"));

//CHECKING THE INSERT,REPLACE,REMOVE, AND RETRIEVE AT FUNCTIONW
checkInsertAt(array3,2,string("my friend"));
checkReplaceAt(array3,6,string("debug"));
checkRemoveAt(array3,2);
checkRetrieveAt(array3,1);


//CREATING A SECOND INT ARRAY
cout<<endl<<"Constructing a new object with maxsize 10";
arrayList<string> array4(10);
sizeMaxSize(array4);
cout<<"\nChecking assignment operator, array4=array3"<<endl;
array4=array3;
cout<<"Array 4 now:";
array4.print();

//CHECKING CLEARLIST
cout<<endl<<"\nChecking clearList\n";
array4.clearList();
array4.print();

//CHECKING ARRAY 2'S SIZE AND IF FUlL/EMPTY
sizeMaxSize(array4);
checkIfFullEmpty(array4);


    return 0;
}


template <class T>
void sizeMaxSize(arrayList<T>& a1){
    cout<<"\nChecking size"<<endl<<"SIZE:"<<a1.listSize()<<endl;
    cout<<"\nChecking maxSize"<<endl<<"MAX SIZE:"<<a1.maxListSize()<<endl;
}

template <class T>
void checkIfFullEmpty(arrayList<T>& a1){
    cout<<"\nChecking if array is full";
    if (a1.isFull()){
        cout<<"\nIS FULL"<<endl;
    }
    else cout<<"\nIS NOT FULL"<<endl;

    cout<<"\nChecking if array is empty";
    if (a1.isEmpty()){
        cout<<"\nIS EMPTY"<<endl;
    }
    else cout<<"\nIS NOT EMPTY"<<endl;
}


template <class T>
void checkIfEqual(arrayList<T>& a1, int index, T type){
    cout<<"\nChecking if index "<<index<<" is equal to "<<type;
    if (a1.isItemAtEqual(index, type)){
        cout<<"\nIS EQUAL"<<endl;
    }
    else cout<<"\nIS NOT EQUAL"<<endl;
}

template <class T>
void checkInsertEnd(arrayList<T>& a1, T type){
    cout<<"\nChecking insertEnd, inserting "<<type<<":"<<endl;
    a1.insertEnd(type);
    a1.print();
    cout<<endl;
}

template <class T>
void checkInsertAt(arrayList<T>& a1, int index, T type){
    cout<<"\nInserting "<<type<<" at index "<<index<<endl;
    a1.insertAt(index, type);
    a1.print();
    cout<<endl;
}

template <class T>
void checkReplaceAt(arrayList<T>& a1, int index, T type){
    cout<<"\n Replacing value at index "<<index<<" with value "<<type<<endl;
    a1.replaceAt(index, type);
    a1.print();
    cout<<endl;
}

template <class T>
void checkRemoveAt(arrayList<T>& a1, int index){
    cout<<"\nRemoving value at index "<<index<<endl;
    a1.removeAt(index);
    a1.print();
    cout<<endl;
}

template <class T>
void checkRetrieveAt(arrayList<T>& a1, int index){
    cout<<"\nRetrieving value at index "<<index<<endl;
    cout<<a1.retrieveAt(index);
}

template <class T>
void fillArray(arrayList<T>& a1){

    for (int i=0; i<10; i++){
        a1.insertEnd(i);
        a1.print();
        cout<<endl;
    }
}

/*
+*+*+*+*+*CHECKING INT ARRAY+*+*+*+*+*
Creating array with default constructor: 
{0}
Checking size
SIZE:0

Checking maxSize
MAX SIZE:3

Checking if array is full
IS NOT FULL

Checking if array is empty
IS EMPTY

Checking insertEnd, inserting 4:
{4}

Checking insertEnd, inserting 8:
{4,8}

Checking insertEnd, inserting 1:
{4,8,1}

Checking insertEnd, inserting 2:
{4,8,1,2}

Checking insertEnd, inserting 7:
{4,8,1,2,7}

Checking insertEnd, inserting 3:
{4,8,1,2,7,3}

Checking size
SIZE:6

Checking maxSize
MAX SIZE:6

Checking if array is full
IS FULL

Checking if array is empty
IS NOT EMPTY

Checking if index 2 is equal to 2
IS NOT EQUAL

Checking if index 3 is equal to 2
IS EQUAL

Inserting 9 at index 1
{4,9,8,1,2,7,3}

 Replacing value at index 3 with value 5
{4,9,8,5,2,7,3}

Removing value at index 5
{4,9,8,5,2,3}

Retrieving value at index 1
9
Constructing a new object with maxsize 10
Checking size
SIZE:0

Checking maxSize
MAX SIZE:10

Filling array{0}
{0,1}
{0,1,2}
{0,1,2,3}
{0,1,2,3,4}
{0,1,2,3,4,5}
{0,1,2,3,4,5,6}
{0,1,2,3,4,5,6,7}
{0,1,2,3,4,5,6,7,8}
{0,1,2,3,4,5,6,7,8,9}

Checking assignment operator, array2=array
Array 2 now:{4,9,8,5,2,3}

Checking clearList
{0}
Checking size
SIZE:0

Checking maxSize
MAX SIZE:12

Checking if array is full
IS NOT FULL

Checking if array is empty
IS EMPTY





+*+*+*+*+*CHECKING STRING ARRAY+*+*+*+*+*
Creating array with default constructor: 
{}
Checking size
SIZE:0

Checking maxSize
MAX SIZE:3

Checking if array is full
IS NOT FULL

Checking if array is empty
IS EMPTY

Checking insertEnd, inserting Hello:
{Hello}

Checking insertEnd, inserting there:
{Hello,there}

Checking insertEnd, inserting this:
{Hello,there,this}

Checking insertEnd, inserting is:
{Hello,there,this,is}

Checking insertEnd, inserting a:
{Hello,there,this,is,a}

Checking insertEnd, inserting test:
{Hello,there,this,is,a,test}

Checking size
SIZE:6

Checking maxSize
MAX SIZE:6

Checking if array is full
IS FULL

Checking if array is empty
IS NOT EMPTY

Checking if index 0 is equal to Hello
IS EQUAL

Checking if index 3 is equal to this
IS NOT EQUAL

Inserting my friend at index 2
{Hello,there,my friend,this,is,a,test}

 Replacing value at index 6 with value debug
{Hello,there,my friend,this,is,a,debug}

Removing value at index 2
{Hello,there,this,is,a,debug}

Retrieving value at index 1
there
Constructing a new object with maxsize 10
Checking size
SIZE:0

Checking maxSize
MAX SIZE:10

Checking assignment operator, array4=array3
Array 4 now:{Hello,there,this,is,a,debug}

Checking clearList
{}
Checking size
SIZE:0

Checking maxSize
MAX SIZE:12

Checking if array is full
IS NOT FULL

Checking if array is empty
IS EMPTY

Deleting array
Deleting array
Deleting array
Deleting array%        */