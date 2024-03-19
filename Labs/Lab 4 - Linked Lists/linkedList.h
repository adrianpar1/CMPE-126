#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <iostream>

template <class Type>
struct Node{
    Type data;
    Node<Type> *next;

};

template <class Type>
class linkedList{

private:
    Node<Type> *head;
    Node<Type> *tail;
    int size;

public:

    //Default constructor for the class
    linkedList();

    //Destructor for the linkedList class
    ~linkedList();

    //Checks if list is empty
    bool isEmpty() const;

    //Checks if list is full
    bool isFull() const;

    //Returns the size of the list
    int listSize() const;

    //Prints the elements of the list on the console
    void print();

    //Checks if the item at position matches the 2nd parameter.
    //You may need to check that the position is smaller than the size of the list
    bool isItemAtEqual(int, Type);

    //Inserts 2nd parameter at position specified in the 1st parameter
    //You may need to check that the position is smaller than the size of the list
    void insertAt(int, Type);

    //inserting at the front
    void insertFront(Type);

    //Inserts object at the end of the list
    void insertEnd(Type);

    //Removes object at position.
    //You may need to check that the position is smaller than the size of the list
    void removeAt(int);

    //Removing at the front
    void removeFront();

    //Retrieves object at position. 
    //You may need to check that the position is smaller than the size of the list
    Type retreiveAt(int);

    //Replaces object at position with 2nd parameter.
    //You may need to check that the position is smaller than the size of the list
    void replaceAt(int, Type);

    //Empties the list
    void clearList();

    //Overload the assignment operator
    linkedList &operator=(const linkedList &list1);

};

template <class Type>
linkedList<Type>::linkedList(){
    head=nullptr;
    tail=nullptr;
    size=0;
}


template <class Type>
linkedList<Type>::~linkedList(){
    Node<Type> *p = head;
    
    while (p!=NULL){
        Node<Type> *p2 = p;
        delete p;
        p = p2->next;
    }
}

template <class Type>
bool linkedList<Type>::isEmpty() const{
    return head==nullptr;
}

template <class Type>
bool linkedList<Type>::isFull() const{
    return head!=nullptr;
}

template <class Type>
int linkedList<Type>::listSize() const{
    return size;
}

template <class Type>
void linkedList<Type>::print(){
    Node<Type> *p = head;
    
    while (p!=nullptr){
        std::cout<<p->data<<" ";
        p=p->next;
    }
}

template <class Type>
bool linkedList<Type>::isItemAtEqual(int pos, Type data){

    if (pos<0 || pos>size){
        throw std::out_of_range("Position is out of bounds");
    }
     
       Node<Type> *p = head;

       for (int i=0; i<pos; i++){
        p=p->next;
       }
       return(p->data == data);

}

template <class Type>
void linkedList<Type>::insertAt(int pos, Type data){

    if (pos<0 || pos>size){
        throw std::out_of_range("Position is out of bounds");
    }

    Node<Type> *entry = new Node<Type>;
    Node<Type> *p = head;
    Node<Type> *previous = nullptr; 
    entry->data=data;


    //For edge case position = 0
    if (pos==0){ 
        insertFront(data);
        return;
    }

    for (int i=0; i<pos; i++){ 
        previous=p;
        p=p->next;
    }

    previous->next=entry;
    entry->next=p;
    size++;

}

template <class Type>
void linkedList<Type>::insertFront(Type data){
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
void linkedList<Type>::insertEnd(Type data){

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
void linkedList<Type>::removeAt(int pos){

    if (pos<0 || pos>size){
        throw std::out_of_range("Position is out of bounds");
    }

    Node<Type> *p = head;
    Node<Type> *previous = nullptr; 


    //For edge case position = 0
    if (pos==0){ 
        removeFront();
        return;
    }

    for (int i=0; i<pos; i++){ 
        previous=p;
        p=p->next;
    }

    previous->next=p->next;
    delete p;
    size--;

}

template <class Type>
void linkedList<Type>::removeFront(){

    Node<Type> *p = head;
    head=head->next;
    delete p;

    if(head==nullptr){
        tail=head;
    }
    size--;
}

template <class Type>
Type linkedList<Type>::retreiveAt(int pos){

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
void linkedList<Type>::replaceAt(int pos, Type data){

    Node<Type> *p = head;
    for (int i=0; i<pos; i++){
        p=p->next;
    }
    p->data=data;
}

template <class Type>
void linkedList<Type>::clearList(){
    
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
linkedList<Type> &linkedList<Type>::operator=(const linkedList<Type> &list1){
    
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