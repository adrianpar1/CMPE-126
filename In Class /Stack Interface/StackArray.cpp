template <class Type>
class Stack{
    public: 
    Stack();
    int size();
    bool isEmpty();
    Type& top() throw (EmptyStackException);
    void push(Type e);
    Type pop() throw (EmptyStackException);

    private: 
    int capacity;
    int size;
};

template <class Type>
Stack<Type>::Stack(){
}