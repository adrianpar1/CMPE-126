#include "Ticket.h"

Ticket::Ticket(){
    Passenger p;
    this->passenger = p;
    Flight f;
    this->flight=f;
}

Ticket::Ticket(Passenger passenger, Flight flight) : passenger(passenger), flight(flight){
    updateFare();
}

void Ticket::setPassengerFare(double passengerFare){
    this->passengerFare=passengerFare;
}

Passenger Ticket::getPassenger(){
    return this->passenger;
}

Flight Ticket::getFlight(){
    return this->flight;
}

double Ticket::getFare(){
    return passengerFare;
}

double Ticket::getBaseFare(){
    return flight.getBaseFare();
}

void Ticket::updatePassenger(Passenger passenger){
    this->passenger.setFareDiscount(passenger.getfareDiscount());
    this->passenger=passenger;
}

void Ticket::updateFlight(Flight flight){
   this->flight=flight;
}

ostream& operator << (ostream& outs, Ticket& ticket){
    outs<<endl<<endl<<"Passenger: "<<ticket.getPassenger().getFirstName()<<" "<<ticket.getPassenger().getLastName()<<endl<<"D.O.B: "<<ticket.getPassenger().getDateOfBirth()<<endl
        <<ticket.flight
        <<"Date of Flight: "<<ticket.getFlight().getDateOfTravel()<<endl
        <<"Fare: "<<ticket.passengerFare<<endl;
    return outs;
}

void Ticket::updateFare()
 {
    passengerFare=flight.getBaseFare()*passenger.getfareDiscount();
 }
