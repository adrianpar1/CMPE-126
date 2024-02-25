#ifndef ARRAYLIST_H_
#define ARRAYLIST_H_
#include <iostream>
using namespace std;


template <class T>
class arrayList
{
public:
    // Default constructor
    arrayList();

    // Default constructor
    arrayList(int);

    // Copy Constructor
    arrayList(arrayList &copy);

    // Destructor
    virtual ~arrayList();

    // Checks if list is empty
    bool isEmpty() const;

    // Checks if list is full
    bool isFull() const;

    // Returns of the size of the list
    int listSize() const;

    // Returns the maximum possible size of the list
    int maxListSize() const;

    // Prints the elements of the list on the console
    void print();

    // Checks if the item at position matches the 2nd parameter
    bool isItemAtEqual(int, T);

    // Inserts 2nd parameter at position
    void insertAt(int, T);

    // Inserts object to end of the list
    void insertEnd(T);

    // Removes object at position
    void removeAt(int);

    // Retrieves object at position
    T retreiveAt(int);

    // Replaces object at position with 2nd parameter
    void replaceAt(int, T);

    // Empties the list
    void clearList();

    // Operator overload for =
    arrayList &operator=(arrayList &array1);

    void checkSize();

private:
    T *array;
    int size;
    int maxSize;
};

template <class T>
arrayList<T>::arrayList() : maxSize(3), size(0)
{
    array = new T[maxSize];
}

template <class T>
arrayList<T>::arrayList(int maxSize) : maxSize(maxSize), size(0)
{
    array = new T[maxSize];
}

template <class T>
arrayList<T>::arrayList(arrayList &copy)
{
    maxSize = copy.maxSize;
    size = copy.size;
    array = copy.array;
}


template <class T>
arrayList<T>::~arrayList()
{
    delete[] array;
    cout << "\nDeleting array";
}

template <class T>
bool arrayList<T>::isEmpty() const
{
    return (size == 0);
}

template <class T>
bool arrayList<T>::isFull() const
{
    return (size == maxSize);
}

template <class T>
int arrayList<T>::listSize() const
{
    return size;
}

template <class T>
int arrayList<T>::maxListSize() const
{
    return maxSize;
}

template <class T>
void arrayList<T>::print()
{
    cout << "{";
    for (int i = 0; i < size - 1; i++)
    {
        cout << array[i] << ",";
    }
    cout << array[size - 1] << "}";
}

template <class T>
bool arrayList<T>::isItemAtEqual(int index, T type)
{
    if (array[index] == type)
    {
        return true;
    }
    else
        return false;
}

template <class T>
void arrayList<T>::insertAt(int index, T type)
{
    size++;
    checkSize();

    T *temp = new T[size];

    for (int i = 0; i < size; i++)
    {

        if (i < index)
        {
            temp[i] = array[i];
        }

        if (i == index)
        {
            temp[i] = type;
        }

        if (i > index)
        {
            temp[i] = array[i - 1];
        }
    }

    delete[] array;
    array = new T[size];

    for (int i = 0; i < size; i++)
    {
        array[i] = temp[i];
    }

    delete[] temp;
}

template <class T>
void arrayList<T>::insertEnd(T type)
{
    size++;
    checkSize();

    T *temp = new T[size];
    for (int i = 0; i < size; i++)
    {
        temp[i] = array[i];
    }

    delete[] array;

    array = new T[size];

    for (int i = 0; i < size; i++)
    {
        array[i] = temp[i];
    }

    delete[] temp;
    array[size - 1] = type;
}

template <class T>
void arrayList<T>::removeAt(int index)
{
    size--;
    T *temp = new T[size];

    for (int i = 0; i < size; i++)
    {
        if (i != index)
        {
            temp[i] = array[i];
        }
        if (i >= index)
        {
            temp[i] = array[i + 1];
        }
    }
    delete[] array;
    array = new T[size];

    for (int i = 0; i < size; i++)
    {
        array[i] = temp[i];
    }
    delete[] temp;
}

template <class T>
T arrayList<T>::retreiveAt(int index)
{
    if (index > size)
    {
        throw out_of_range("INDEX OUT OF BOUNDS");
    }
    return array[index];
}

template <class T>
void arrayList<T>::replaceAt(int index, T type)
{
    array[index] = type;
}

template <class T>
void arrayList<T>::clearList()
{
    size = 0;
    delete[] array;
    array = new T[0];
}

template <class T>
arrayList<T> &arrayList<T>::operator=(arrayList<T> &array1)
{
    array = array1.array;
    size = array1.size;
    maxSize = array1.maxSize;
    return *this;
}

template <class T>
void arrayList<T>::checkSize()
{
    if (size > maxSize)
    {
        maxSize = maxSize * 2;
    }
}

#endif // ARRAYLIST_H_