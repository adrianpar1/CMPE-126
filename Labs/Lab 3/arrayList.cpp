    #include "arrayList.h"
    #include <iostream>
    using namespace std;
    
    arrayList::arrayList() : maxSize(3), size(0){
        array=new int[maxSize];
    }

    arrayList::arrayList(int maxSize) : maxSize(maxSize), size(0){
        array=new int[maxSize];

    }

    arrayList::arrayList(arrayList& copy){
        maxSize=copy.maxSize;
        size=copy.size;
        array = copy.array;
    }

    arrayList::~arrayList(){
        delete []array;
        cout<<"\nDeleting array";
    }

    bool arrayList::isEmpty() const{
       return (size==0);
    }

    bool arrayList::isFull() const{
       return (size==maxSize);
    }

    int arrayList::listSize() const{
        return size;
    }

    int arrayList::maxListSize() const{
        return maxSize;
    }

    void arrayList::print(){
        cout<<"{";
        for (int i=0; i<size-1; i++){
            cout<<array[i]<<",";
        }
        cout<<array[size-1]<<"}";

    }

    bool arrayList::isItemAtEqual(int index, int num){
        if (array[index]==num){
            return true;
        }
        else return false;
    }

    void arrayList::insertAt(int index, int num){
        size++;
        checkSize();

        int* temp=new int[size];

        for (int i=0; i<size; i++){
            cout<<array[i]<<",";
            if (i<index){
                temp[i]=array[i];
            }

            if (i==index){
                temp[i]=num;
            }

            if (i>index){
                temp[i]=array[i-1];
            }
            

        }

        delete[] array;
        array=new int[size];

        for (int i=0; i<size; i++){
            array[i]=temp[i];
        }
        
        delete[] temp;
        
    }
        
    void arrayList::insertEnd(int num){
        size++;
        checkSize();
        array[size-1]=num;
    }

    void arrayList::removeAt(int index){
        size--;
        int* temp=new int[size];

        for(int i=0; i<size; i++){
            if(i!=index){
                temp[i]=array[i];
            }
            if (i>=index){
                temp[i]=array[i+1];
            }
        }
        delete[] array;
        array=new int[size];

        for(int i=0; i < size; i++){
            array[i]=temp[i];
        }

        delete[] temp;
    }

    int arrayList::retreiveAt(int index){
        return array[index];
    }

    void arrayList::replaceAt(int index, int num){
        array[index]=num;
    }

    void arrayList::clearList(){
        size=0;
        delete[] array;
        array= new int[0];
        
    }

    arrayList& arrayList::operator=(arrayList& array1){
        array=array1.array;
        size=array1.size;
        maxSize=array1.maxSize;
        return *this;


    }

   void arrayList::checkSize(){
    if (size>maxSize){
        maxSize=maxSize*2;

    int* temp = new int[size];
    for (int i=0; i<size; i++){
        temp[i]=array[i];
    }
    
    delete[] array;

    array=new int[size];
    
    for (int i=0; i<size; i++){
        array[i]=temp[i];
    }
    
    delete[] temp;

    }
   }