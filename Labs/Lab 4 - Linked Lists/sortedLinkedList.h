#ifndef SORTED_LINKEDLIST_H_
#define SORTED_LINKEDLIST_H_

#include <iostream>
#include "linkedList.h"


template <class Type>
class sortedLinkedList{

private:
    Node<Type> *head;
    Node<Type> *tail;
    int size;

public:

    //Default constructor for the class
    sortedLinkedList();

    //Destructor for the linkedList class
    ~sortedLinkedList();

    //Checks if list is empty
    bool isEmpty() const;

    //Checks if list is full
    bool isFull() const;

    //Returns the size of the list
    int listSize() const;

    //Prints the elements of the list on the console
    void print();


   //Inserts element into the sorted linked list
    void insert(Type);

    //inserting at the front
    void insertFront(Type);

    //Inserts object at the end of the list
    void insertEnd(Type);

    //Removes element from the sorted linked list.
    void remove(Type);

    //Returns true if the 1st parameter is in the list.
    bool isItemInList(Type);

    //Retrieves object at position. 
    //You may need to check that the position is smaller than the size of the list
    Type retreiveAt(int);


    //Empties the list
    void clearList();

    //Overload the assignment operator
    sortedLinkedList &operator=(const sortedLinkedList &list1);

};

template <class Type>
sortedLinkedList<Type>::sortedLinkedList(){
    head=nullptr;
    tail=nullptr;
    size=0;
}


template <class Type>
sortedLinkedList<Type>::~sortedLinkedList(){
    Node<Type> *p = head;
    
    while (p!=NULL){
        Node<Type> *p2 = p;
        delete p;
        p = p2->next;
    }
}

template <class Type>
bool sortedLinkedList<Type>::isEmpty() const{
    return head==nullptr;
}

template <class Type>
bool sortedLinkedList<Type>::isFull() const{
    return head!=nullptr;
}

template <class Type>
int sortedLinkedList<Type>::listSize() const{
    return size;
}

template <class Type>
void sortedLinkedList<Type>::print(){
    Node<Type> *p = head;
    
    while (p!=nullptr){
        std::cout<<p->data<<" ";
        p=p->next;
    }
}


template <class Type>
void sortedLinkedList<Type>::insert(Type data){

    Node<Type> *entry = new Node<Type>;
    entry->data=data;

    Node<Type> *p = head;
    Node<Type> *previous; 
    int index=0;

    while(p){
        if((data<=p->data) && (index==0)){ //if it's the smaller than the first element, it should be the new head
           insertFront(data);
           return;
        }

        if (data<=p->data){  //if it's smaller than an element in the middle, insert it 
            previous->next=entry;
            entry->next=p;
            size++;
            return;
        }

        previous=p; //increasing the index
        p=p->next;
        index++;
    }
    insertEnd(data); //if it traversed through the entire index, it is the biggest element, make it the tail
}


template <class Type>
void sortedLinkedList<Type>::insertFront(Type data){
Node<Type> *entry = new Node<Type>;
        entry->next=head;
        head=entry;
        entry->data=data;

        if(tail==nullptr){
            tail=head;
        }
        size++;
}

template <class Type>
void sortedLinkedList<Type>::insertEnd(Type data){

    Node<Type> *entry = new Node<Type>;
    entry->data=data;
    entry->next=nullptr;

    if (head==nullptr){
        head=entry;
        tail=entry;
    }

    else{
        tail->next=entry;
        tail=entry;
    }
    size++;
}


template <class Type>
void sortedLinkedList<Type>::remove(Type data){

    Node<Type> *p = head;
    Node<Type> *previous; 

    while(p){

        if(p->data==data){
        previous->next=p->next;
        delete p;
        size--;
        return;
        }

        previous=p;
        p=p->next;
    }
    throw std::invalid_argument("VALUE IS NOT EQUAL TO ANY ELEMENT IN THE LIST");

}

template <class Type>
bool sortedLinkedList<Type>::isItemInList(Type data){
    
    Node<Type> *p = head;
    int index=0;

    while(p){
        if(p->data==data){
            return true;
        }
        p=p->next;
        index++;
    }
    return false;
    
}

template <class Type>
Type sortedLinkedList<Type>::retreiveAt(int pos){

    if (pos<0 || pos>size){
        throw std::out_of_range("Position is out of bounds");
    }

      Node<Type> *p = head;
      
      for(int i=0; i<pos; i++){
        p=p->next;
      }
      return p->data;

}


template <class Type>
void sortedLinkedList<Type>::clearList(){
    
    Node<Type> *p = head;
    Node<Type> *p2 = p;
    while(p){
        delete p;
        p=p2->next;
        size--;
    }
    head=nullptr;
    tail=nullptr;

}

template <class Type>
sortedLinkedList<Type> &sortedLinkedList<Type>::operator=(const sortedLinkedList<Type> &list1){
    
    if (list1.isEmpty()){
        head = nullptr;
    }
    else{
        size=list1.size;
        head = new Node<Type>;
        Node<Type> *p = list1.head;
        Node<Type> *p2 = head;
        Node<Type> *temp;

    while(p){
        p2->data = p->data;

        if (p->next == nullptr){
            break;
        }
        
        p2->next = new Node<Type>;
        p=p->next;
        p2=p2->next;
        }

    }

    return *this;

}






#endif //LINKEDLIST_H_