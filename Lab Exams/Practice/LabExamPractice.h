#ifndef practice_h_
#define practice_h_
#include <iostream>

class Node{
    private:
    int data;
    Node* next;
};

template <class Type>
class array{
public:
    array();
    ~array();
    void print();
    bool isItemAtEqual(int, Type);
    void insertAt(int, Type);
    void removeAt(int);
    int retreiveAt(int);
    void replaceAt(int, Type);
    array &operator=(const array<Type> &array1);
    void sizecheck();

private:
int size;
int capacity;
Type* arr;
};

template <class Type>
class linkedList{
    linkedList();
    ~linkedList();
    void print();
    bool isItemAtEqual(int, Type);
    void insertEnd(Type);
    void insertAt(int, Type);
    void removeAt(int);
    int retreiveAt(int);
    void replaceAt(int, Type);
    void clearList();

    private:
    Node* head;
    Node* tail;

};
    template <class Type>
    array<Type>::array() : size(0), capacity(3){
        arr=new Type[capacity];
    }

    template <class Type>
    array<Type>::~array(){
        delete[] arr;
        std::cout<<"Deleting array";
    }

    template <class Type>
    void array<Type>::print(){
        for (int i=0; i<size; i++){
            std::cout<<arr[i]<<std::endl;
        }

        std::cout<<"SIZE/CAP"<<size<<" "<<capacity<<std::endl;
    }

    template <class Type>    
    bool array<Type>::isItemAtEqual(int index, Type elem){
        return (arr[index]==elem);
    }

    template <class Type>    
    void array<Type>::insertAt(int index, Type element){
    ++size;
    sizecheck();

    Type *temp = new Type[capacity];

    for (int i = 0; i < size; i++)
    {

        if (i < index)
        {
            temp[i] = arr[i];
        }

        if (i == index)
        {
            temp[i] = element;
        }

        if (i > index)
        {
            temp[i] = arr[i - 1];
        }
    }
    delete[] arr;
    arr=temp;

    }

    template <class Type>
    void removeAt(int);

    template <class Type>
    int retreiveAt(int);

    template <class Type>    
    void replaceAt(int, Type);

    template <class Type>
    void clearList();

    template <class Type>
    void array<Type>::sizecheck(){
        if (size>capacity){
            Type *temp = new Type[capacity*2];
            capacity*=2;

            for (int i =0; i<size; i++){
                temp[i]=arr[i];
            }

            delete[] arr;
            arr=temp;
        }
    }

    template <class Type>    
    array<Type> &array<Type>::operator=(const array<Type> &array1){

    size=array1.size;
    capacity=array1.maxSize;
    
    for (int i=0; i<size; i++){
        arr[i]=array1.arr[i];
    }
    return *this;
    }
    
    template <class Type>
    linkedList<Type>::linkedList(){
    head=nullptr;
    tail=nullptr;
    }

        template <class Type>
    linkedList<Type>::~linkedList(){
        Node<Type> *temp = head;

        while(temp){
            Node<Type> *temp2 = temp;
            delete temp;
            temp=temp2->next;
            
        }
    }

        template <class Type>
    void linkedList<Type>::print(){
        Node<Type> *p = head;

        while(p){
            std::cout<<p<<" ";
            p=p->next;
        }
    }
    
        template <class Type>
    void linkedList<Type>::insertEnd(Type element){
        if (head==tail){
            head=element;
            tail=element;
            element->next=nullptr;
        }

        else{
            tail->next=element;
            tail=element;
        }
    }

        template <class Type>
    void linkedList<Type>::insertAt(int, Type);

        template <class Type>
    void linkedList<Type>:: removeAt(int);




    
#endif //practice_h_