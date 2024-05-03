#include <iostream>

template <class Type>
struct Node{
Type data;
Node *next;
};

template <class Type>
class QueueLL{
Node *head;
Node *tail;

void enqueue(Type element){
    Node<Type> *newNode= new Node<Type>;
    newNode->data=element;

    if(head==nullptr){
        newNode->next=nullptr;
        head=newNode;
        tail=newNode;
    }

    else{   //inserting at tail
        tail->next=newNode;
        newNode->next=nullptr;
        tail=newNode;
        size++;
    }
}

Type dequeue(){
//remove at head
    if(head==nullptr){
        throw emptystackexception("empty lol");
    }


    Node<Type> *temp = head;
    head=temp->next;
    
    if(head==nullptr){
        tail=nullptr;
    }

    Type element = temp->data;

    delete temp;
    --size;
    return element;

}

//b=(b+1)%size;
//f=(f+1)%size;

};





template <class Type>
class QueueArray{
Type* Queue = new Type [];
Type* front;
Type* rear;
int size;
int capacity;


    void enqueue(Type element){
        Queue[rear]=element;
        rear=(rear+1)%capacity;
    }


    Type dequeue(){
        Type element = Queue[front];
        front = front+1;
        return element;
    }

    bool isFull(){
        return (rear+1==front);
    }

};