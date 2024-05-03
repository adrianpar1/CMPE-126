template <class Type>
class Node{
Type data;
Node* next;
};

template <class Type>
class Stack{
private: 
Node* head;
int size;

public:
Stack();
void push(Type element);
Type pop();


};

template <class Type>
Stack<Type>::Stack(){
    head = nullptr;
    size = 0;
}

template <class Type>
void Stack<Type>::push(Type element){
    Node* newNode = new Node;
    newNode->data = element;
    newNode->next = head;
    head = newNode;
    ++size;
}

template <class Type>
Type Stack<Type>::pop(){
    Node* temp = head;
    head = head->next;
    Type tempvar = temp->data;
    delete temp;
    --size;
    return tempvar;
}

/*
#ifndef linkedListStack_h
#define linkedListStack_h

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
linkedListStack(){
    head=nullptr;
    size=0;
}

~linkedListStack(){
    Node<Type>* p=head;
    Node<Type>* p2=p;

    while(p2){
        p2=p->next;
        delete p;
        p=p2;
    }
    std::cout<<"Deleting linkedListStack";
}

void push(Type element){
    Node<Type>* temp=new Node<Type>;
    temp->data=element;
    temp->next=head;
    head=temp;

    ++size;
}

Type pop(){
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

Type top(){
    if(empty()){
        throw ("STACK IS EMPTY");
    }
    
    return head->data;
}

bool empty(){
    return (size==0);
}

void print(){
    Node<Type>*p=head;

    while(p){
        std::cout<<p->data<<" ";
        p=p->next;
    }
}
};


#endif //linkedListStack_h*/
