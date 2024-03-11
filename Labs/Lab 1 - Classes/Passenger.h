#ifndef PASSENGER_H_
#define PASSENGER_H_
#include <iostream>
#include <string>
#include "DateOfBirth.h" 



class Passenger{
public:

    //Default constructor for the passenger class, sets the Passenger to be "Jane Doe 1/1/2000"
    Passenger();

    //Constructor for the passenger class that takes a string first name, string last name, date of birth type date of birth as arguments
    Passenger(string first_name, string last_name, DateOfBirth dateOfBirth);
    
    //Getter function for the first name
    string getFirstName();

    //Getter function for the last name
    string getLastName();

    //Getter function for the date of birth
    DateOfBirth getDateOfBirth();

    //Getter function for the fare discount
    double getfareDiscount();

    //Setter function for the first name
    void setFirstName(string firstname);

    //Setter function for the last name
    void setLastName(string lastname);

    //Setter function for the date of birth
    void setDateOfBirth(DateOfBirth dateOfBirth);

    //Setter function for the fare discount
    void setFareDiscount(double farediscount);

    //Operator overload for outstream
    friend ostream& operator << (ostream& outs, Passenger& passenger);

    //
    void updatePassenger();

private:
    string first_name;
    string last_name;
    DateOfBirth dateOfBirth;
    double fare_discount;

};


#endif //PASSENGER_H_