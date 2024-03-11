#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

#include <iostream>

template <class Type>
struct Node{
    Type data;
    Node *previous;
    Node *next;
};

template <class Type>
class linkedList{

private:
    Node *head;
    Node *tail;

public:
    //Default constructor for the class
    linkedList();

    //Destructor for the linkedList class
    ~linkedList();

    //Checks if list is empty
    bool isEmpty() const;

    //Checks if list is full
    bool isFull() const;

    //Prints the elements of the list on the console
    void print();

    //Checks if the item at position matches the 2nd parameter.
    //You may need to check that the position is smaller than the size of the list
    bool isItemAtEuqal(int, Type);

    //Inserts 2nd parameter at position specified in the 1st parameter
    //You may need to check that the position is smaller than the size of the list
    void insertEnd(Type);

    //Removes object at position.
    //You may need to check that the position is smaller than the size of the list
    void removeAt(int);

    //Retrieves object at position. 
    //You may need to check that the position is smaller than the size of the list
    void retreiveAt(int);

    //Retrieves object at position.
    //You may need to check that the position is smaller than the size of the list
    void replaceAt(int, Type);

    //Replaces object at position with 2nd parameter.
    //You may need to check that the position is smaller than the size of the list
    void replaceAt(int, Type);

    //Empties the list
    void clearList();

    //Overload the assignment operator
    friend linkedList operator=(const &linkedList, const &linkedList);

};




#endif //LINKEDLIST_H_