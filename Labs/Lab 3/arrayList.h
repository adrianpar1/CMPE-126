#ifndef ARRAYLIST_H_
#define ARRAYLIST_H_

class arrayList{
public:

    //Default constructor
    arrayList();

    //Default constructor
    arrayList(int);

    //Copy Constructor
    arrayList (arrayList& copy);

    //Destructor
    virtual ~arrayList();

    //Checks if list is empty
    bool isEmpty() const;

    //Checks if list is full
    bool isFull() const;

    //Returns of the size of the list
    int listSize() const;

    //Returns the maximum possible size of the list
    int maxListSize() const;

    //Prints the elements of the list on the console
    void print();

    //Checks if the item at position matches the 2nd parameter
    bool isItemAtEqual(int, int);

    //Inserts 2nd parameter at position
    void insertAt(int, int);

    //Inserts object to end of the list
    void insertEnd(int);

    //Removes object at position
    void removeAt(int);

    //Retrieves object at position
    int retreiveAt(int);

    //Replaces object at position with 2nd parameter
    void replaceAt(int, int);

    //Empties the list
    void clearList();

    //Operator overload for =
    arrayList& operator=(arrayList& array1);

    void checkSize();

private:
int* array;
int size;
int maxSize;

};

#endif //ARRAYLIST_H_