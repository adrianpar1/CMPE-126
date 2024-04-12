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
