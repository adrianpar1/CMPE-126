#include <iostream>
#include "imperialWeight.h"
#include "imperialWeight.cpp"
#include "Box.h"
#include "Box.cpp"

using namespace std;

void Heaviest(Box []);
void addBox(Box[], Box);
void TotalWeight(Box []);



int main(){


imperialWeight w1(10,14);
imperialWeight w2(3,3);
imperialWeight w3(10,14);
imperialWeight w4;


if (w1>w2){
    cout<<"\nw1 is greater than w2";
}
else cout<<"\nw1 is not greater than w2";

if (w1<w2){
    cout<<"\nw1 is less than w2";
}
else cout<<"\nw1 is not less than w2";

if (w1>=w3){
    cout<<"\nw1 is greater than or equal to w3";
}
else cout<<"\nw1 is not greater than or equal to w3";

if (w1<=w2){
    cout<<"\nw1 is greater than or equal to w2";
}
else cout<<"\nw1 is not greater than or equal to w2";


w4=w1+w2;
cout<<endl<<"w4 weight is:"<<w4;



    
    int size=0;
    int maxSize=10;

    Box Room[10];
    Box B1("Books",25,12);
    Box B2("Table Left",5,4);
    Box B3("Table Right",10,5);
    Box B4("Paintings",7,1);

    Room[0]=B1;
    Room[1]=B2;
    Room[2]=B3;
    Room[3]=B4;

    for (int i=0; i<10; i++){
        cout<<Room[i]<<endl;
    }

    
    Heaviest(Room);
    TotalWeight(Room);

    Box B5("Statue",30,0);

    addBox(Room,B5);
        
    Heaviest(Room);
    TotalWeight(Room);



    return 0;
}





void Heaviest(Box Room[]){
    int indexOfHeaviest;

    for (int i=1; i<10; i++){
        if (Room[i].getWeight()>Room[i-1].getWeight()){
            indexOfHeaviest=i;
        }
    }

    cout<<"\nThe heaviest box is "<<Room[indexOfHeaviest];

}

void addBox(Box Room[], Box box){
    for (int i=0;i<10;i++){
        if (Room[i].getName()=="NaN"){
            Room[i]=box;
            break;
        }
    }
}

void TotalWeight(Box Room[]){
    imperialWeight total(0,0);

    for(int i=0; i<10; i++){
        total=total+Room[i].getWeight();
    }

    cout<<"Total weight is:"<<total;
    
}

/*
w1 is greater than w2
w1 is not less than w2
w1 is greater than or equal to w3
w1 is not greater than or equal to w2
w4 weight is:14lbs, 2ozName:Books
Weight:25lbs, 12oz

Name:Table Left
Weight:5lbs, 4oz

Name:Table Right
Weight:10lbs, 5oz

Name:Paintings
Weight:7lbs, 1oz

Name:NaN
Weight:0lbs, 0oz

Name:NaN
Weight:0lbs, 0oz

Name:NaN
Weight:0lbs, 0oz

Name:NaN
Weight:0lbs, 0oz

Name:NaN
Weight:0lbs, 0oz

Name:NaN
Weight:0lbs, 0oz


The heaviest box is Name:Table Right
Weight:10lbs, 5oz
Total weight is:48lbs, 7oz
The heaviest box is Name:Statue
Weight:30lbs, 0oz
Total weight is:78lbs, 7oz%         */