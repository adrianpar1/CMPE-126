#ifndef linkedListStack_h
#define linkedListStack_h
#include <iostream>

template <class Type>
struct Node{
Type data;
Node<Type>* next;
};

template <class Type>
class linkedListStack{
private:
Node<Type>* head;
int size;

public:
linkedListStack();
~linkedListStack();
void push(Type element);
Type pop();
Type top();
bool empty();
};



template <class Type>
linkedListStack<Type>::linkedListStack(){
    head=nullptr;
    size=0;
}


template <class Type>
linkedListStack<Type>::~linkedListStack(){
    Node<Type>* p=head;
    Node<Type>* p2=p;

    while(p2){
        p2=p->next;
        delete p;
        p=p2;
    }
}


template <class Type>
void linkedListStack<Type>::push(Type element){
    Node<Type>* temp=new Node<Type>;
    temp->data=element;
    temp->next=head;
    head=temp;

    ++size;
}

template <class Type>
Type linkedListStack<Type>::pop(){
    if(empty()){
        throw ("STACK IS EMPTY");
    }

    Node<Type>* temp=head;
    Node<Type>* val=temp;
    head=head->next;

    delete temp;
    --size;
    return val->data;
}

template <class Type>
Type linkedListStack<Type>::top(){
    if(empty()){
        throw ("STACK IS EMPTY");
    }
    
    return head->data;
}

template <class Type>
bool linkedListStack<Type>::empty(){
    return (size==0);
}








#endif //linkedListStack_h