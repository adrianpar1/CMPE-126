#include <iostream>
#include <string>
#include <ctime>
#include "DateOfBirth.h"
#include "DateOfBirth.cpp"
#include "Passenger.h"
#include "Passenger.cpp"
#include "Ticket.h"
#include "Ticket.cpp"
#include "Flight.h"
#include "Flight.cpp"
#include "Time.h"
#include "Time.cpp"




using namespace std;

int main(){

time_t t = std::time(0);   // get time now
tm* now = std::localtime(&t);
 cout << (now->tm_year + 1900) << '-' 
         << (now->tm_mon + 1) << '-'
         <<  now->tm_mday
         << "\n";



//TASK 1 The Date and DateOfBirth class
cout<<"-------------TASK 1-------------\n";
Date d1; //d1 initialized to January 1st, 1900
Date d2 (3, 15, 2024); //d2 initialized to March 15th, 2024
cout<<"D1:"<<d1<<endl;
DateOfBirth d3 (5, 10, 1970); //d3 initialized to May 10th, 1970
DateOfBirth d4 (d1); //d4 initialized to January 1st, 1900, copying from d1
cout <<"D2:"<< d2 <<endl;
cout <<"D3:"<< d3 <<endl <<"D4:"<< d4 <<endl;
cout <<"Age of d3:"<< d3.getAge(); //You can make today’s date a global or static variable 







//Task 2 The Passenger Class
cout<<endl<<endl<<"-------------TASK 2-------------\n";
string first_name = "John";
string last_name = "Smith";
DateOfBirth d(5, 10, 1970);
Passenger p1(first_name, last_name, d);
cout << endl << p1 << endl;; //Outputs flight information in a suitable format
p1.setFareDiscount(0.25); //Sets the fare_discount meeting to 0.25, i.e., 25%  
cout<<"Fare discount: "<<p1.getfareDiscount();






//Task 3 The Ticket Class
cout<<endl<<endl<<endl<<"-------------TASK 3-------------\n";
Flight f1;
f1.setBaseFare(235.85);
f1.setDateOfTravel(d2);
p1.setFareDiscount(1);
Ticket ticket(p1, f1);  //In f1, update 235.85 as the base fare and d2 as dateOfTravel
cout << ticket << endl; //Outputs flight information in a suitable format
p1.setFareDiscount(0.5); //Update fare discount to 0.5, i.e., 50%
//ticket.updatePassenger(p1);
ticket.updateFare(); //Updates the fare based on passenger discount
cout << "Ticket fare is: "<<ticket.getFare()<<endl; //Outputs flight information in a suitable format
Date d5(3, 18, 2024);
Flight f2("SFO", "LAX", d5);
ticket.updateFlight(f2); //Updates flight information 
cout<< ticket;




    return 0;
}