#include <iostream>
#include <string>
#include "Time.h"
#include "Time.cpp"
#include "Flight.h"
#include "Flight.cpp"

using namespace std;

int main(){

Time t1; //t1 initialized to 0 hour 0 minute, i.e., 12:00 
Time t2 (2); //t2 initialized to 3 hour 0 minute, i.e., 03:00 
Time t3 (3,10); //t3 initialized to 5 hour 10 minute, i.e., 05:10 
int minute = 10; 
cout << "t1="<< t1 <<endl; 
cout << "t2="<< t2 << endl << "t3="<< t3 <<endl;  
cout << "t2+t3="<<t2+t3<< endl;  
t1 = t3+minute;
cout<<"new t1="<<t1<<endl;


t1.setTime(23,59);
cout<<t1;
string src = "SFO";
string dest = "LAX";
Flight f1(src,dest); //Note that there should be no default value of src and dest
f1.setDepartureTime(13, 45);//Sets the departureTime field to 13:45
cout << f1; //Outputs flight information in a suitable format 
Time t(6, 30);
f1.setDepartureTime(t); //Sets the departureTime field to values from t
cout << f1; 


    return 0;
    
}
