#include <iostream>
#include "Time.h"
#include "Time.cpp"

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






    return 0;
}
