#include "Passenger.h"

using namespace std;

Passenger::Passenger() : first_name("Jane"), last_name("Doe"), dateOfBirth(1,1,2000){
}

Passenger::Passenger(string first_name, string last_name, DateOfBirth dateOfBirth) : first_name(first_name), last_name(last_name), dateOfBirth(dateOfBirth){

}

string Passenger::getFirstName(){
    return first_name;
}

string Passenger::getLastName(){
    return last_name;
}

DateOfBirth Passenger::getDateOfBirth(){
    return dateOfBirth;
}

double Passenger::getfareDiscount(){
    return fare_discount;
}

void Passenger::setFirstName(string firstname){
    this->first_name=firstname;
}

void Passenger::setLastName(string lastname){
    this->last_name=lastname;
}

void Passenger::setDateOfBirth(DateOfBirth dateOfBirth){
    this->dateOfBirth=dateOfBirth;
}

void Passenger::setFareDiscount(double farediscount){
    fare_discount=farediscount;
}

ostream& operator << (ostream& outs, Passenger& passenger){
    outs<<"First name: "<<passenger.first_name<<endl
        <<"Last name: "<<passenger.last_name<<endl
        <<"Date of Birth: "<<passenger.dateOfBirth<<endl
        <<"Fare discount: "<<passenger.fare_discount;
    return outs;
}
