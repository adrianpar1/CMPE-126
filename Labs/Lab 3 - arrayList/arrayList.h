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
    T retrieveAt(int);

    // Replaces object at position with 2nd parameter
    void replaceAt(int, T);

    // Empties the list
    void clearList();

    // Operator overload for =
    arrayList &operator=(const arrayList &array1);

    // Helper function that makes sure the size of the array is within the maxsize, if not, it will increase the size of the array.
    void checkSize();

    //LAB 5
    //Extend the arrayList with the elements in the arrrayList passed in the first parameter
    void extend(const arrayList &);

    //Returns the minimum element in the list
    T min() const;

    //Returns the maximum element in the list
    T max() const;

    //Counts the number of elemeents in the list matching the element passed in the first parameter
    int count(const T&);

    //LAB 6
    //Finds the min in the list recursively
    T getMinRecursive();


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
    if (index>size-1 || index<0){
        throw out_of_range("INDEX OUT OF BOUNDS");
    }

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
    if (index>size-1 || index<0){
        throw out_of_range("OUT OF BOUNDS");
    }

    ++size;
    checkSize();

    T *temp = new T[maxSize];

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
    array = temp;

}

template <class T>
void arrayList<T>::insertEnd(T type)
{
    ++size;
    checkSize();

    T *temp = new T[maxSize];
    for (int i = 0; i < size; i++)
    {
        temp[i] = array[i];
    }

    delete[] array;
    array=temp;

    array[size - 1] = type;
    
}

template <class T>
void arrayList<T>::removeAt(int index)
{
    if (index>size-1 || index<0){
        throw out_of_range("INDEX OUT OF BOUNDS");
    }

    size--;
    T *temp = new T[maxSize];

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
    array=temp;
}

template <class T>
T arrayList<T>::retrieveAt(int index)
{
    if (index > size-1 || index<0)
    {
        throw out_of_range("INDEX OUT OF BOUNDS");
    }
    return array[index];
}

template <class T>
void arrayList<T>::replaceAt(int index, T type)
{
    if (index>size-1|| index<0){
        throw out_of_range("OUT OF RANGE");
    }
    
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
arrayList<T> &arrayList<T>::operator=(const arrayList<T> &array1)
{
    size=array1.size;
    maxSize=array1.maxSize;
    
    for (int i=0; i<size; i++){
        array[i]=array1.array[i];
    }
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


//LAB 5
template <class T>
void arrayList<T>::extend(const arrayList &array2){
    
    int originalsize=size;
    size = size + array2.size;
    
    while(size>maxSize){
        maxSize*=2;
    }

    T *temp = new T[maxSize];

    for(int i=0; i<size; i++){
        if (i<originalsize){
            temp[i]=array[i];
        }
        else{
            temp[i]=array2.array[i-originalsize];
        }
    }


    delete[] array;
    array = temp;

}


template <class T>
T arrayList<T>::min() const{
    int indexofmin=0;

    for(int i=0; i<size; i++){
        if (array[i]<array[indexofmin]){
            indexofmin=i;
        }
    }

    return array[indexofmin];
}

template <class T>
T arrayList<T>::max() const{
    int indexofmax=0;

    for(int i=0; i<size; i++){
        if (array[i]>array[indexofmax]){
            indexofmax=i;
        }
    }

    return array[indexofmax];
}

template <class T>
int arrayList<T>::count(const T& element){

    int counter=0;

    for(int i=0; i<size; i++){
        if (array[i]==element){
            counter++;
        }
    }
    return counter;
}
/*emplate <class T>
T arrayList<T>::getMinRecursive(){


    if (size==1){
        return array[0];
    }

    T min = getMinRecursive();

    if (array[size-1]<min){
        return array[size-1];
    }
    else return min;

}
*/

template <class T>
T arrayList<T>::getMinRecursive() {
    static int index = 0;
    static T min = array[0];
    
    if (index == size) {
        return min;
    }
    
    if (array[index] < min) {
        min = array[index];
    }
    
    index++;
    
    return getMinRecursive();
}





#endif // ARRAYLIST_H_