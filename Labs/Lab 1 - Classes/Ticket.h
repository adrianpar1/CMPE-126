#ifndef TICKET_H_
#define TICKET_H_
#include "Passenger.h"
#include "Flight.h"



class Ticket {
public:
    //Default constructor for the ticket class, setting the passenger to the default passenger, flight, and 0 for the fare
    Ticket();

    //Constructor for the ticket class, taking a passenger type passenger and flight type flight as arguments
    Ticket(Passenger passenger, Flight flight);

    //Setter function for the ticket fare
    void setPassengerFare(double passengerFare);

    //Setter for the base fare
    void setFare(double baseFare);

    //Getter for the passenger
    Passenger getPassenger();

    //Getter for the flight
    Flight getFlight();

    //Getter for the fare
    double getFare();

    //Getter for the base fare
    double getBaseFare();

    //Function that updates the passenger
    void updatePassenger(Passenger passenger);

    //Function that updates the flight 
    void updateFlight(Flight flight);

    //Operator overload for the outstream
    friend ostream& operator << (ostream& outs, Ticket& ticket);

    //Helper function for the fare based on passenger discount
    void updateFare();


private:
    Passenger passenger;
    Flight flight;
    double passengerFare;


};

#endif //TICKET_H_