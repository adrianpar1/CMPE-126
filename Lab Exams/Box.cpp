#include <iostream>
#include "Box.h"

using namespace std;

Box::Box() : name("NaN"){
    this->weight.setPounds(0);
    this->weight.setOunces(0);

    //array=new Box[maxSize];

}

Box::Box(string name, int pounds, int ounces) : name(name){
    this->weight.setPounds(pounds);
    this->weight.setOunces(ounces);

   // array=new Box[maxSize];

} 

/*
Box::~Box(){
    delete[]array;
}
*/



void Box::setName(string name){
    this->name=name;
}
void Box::setWeight(int pounds, int ounces){
    this->weight.setPounds(pounds);
    this->weight.setOunces(ounces);
}

string Box::getName(){
    return name;
}
imperialWeight Box::getWeight(){
    return weight;
}

ostream& operator<<(ostream& out, Box& box){
    out<<"Name:"<<box.name<<endl<<"Weight:"<<box.weight<<endl;
    return out;
}

/*


void Box::Heaviest(){
    int indexOfHeaviest;

    for (int i=1; i<size; i++){
        if (array[i].getWeight()>array[i-1].getWeight()){
            indexOfHeaviest=i;
        }
    }

    cout<<"\nThe heaviest box is "<<array[indexOfHeaviest];

}

void Box::addBox(Box box){
    if (++size>maxSize){
        throw out_of_range("ARRAY CANNOT BE LARGER THAN MAXSIZE");
    }
    ++size;

    Box *newArray = new Box[maxSize];
    for (int i = 0; i < size; i++)
    {
        newArray[i] = array[i];
    }

    delete[] array;
    for (int i = 0; i < size; i++)
    {
        array[i] = newArray[i];
    }

    array[size - 1] = box;
}

void Box::TotalWeight(){
    imperialWeight total(0,0);

    for(int i=0; i<size; i++){
        total=total+array[i].getWeight();
    }

    cout<<"Total weight is:"<<total;
    
}


void Box::print(){
    for (int i=0; i<size; i++){
        cout<<array[i];
    }
}
*/