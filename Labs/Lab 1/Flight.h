#ifndef FLIGHT_H
#define FLIGHT_H
#include "Time.h"
#include <string>

using namespace std;

class Flight{
    private:
    string src;
    string dest;
    Time departureTime;

    public:

    //Default constructor for the flight class
    Flight();

    //Constructor for the flight class, taking in two strings as args
    Flight(string src, string dest);

    //Constructor for flight class, taking in two strings and a departure time as args
    Flight(string src, string dest, Time departureTime);

    //Sets departure time using two ints for the time
    void setDepartureTime(int hour, int minute);

    //Sets departure time using a type time
    void setDepartureTime(Time time);

    //Operator overload for outstream
    friend ostream& operator <<(ostream& outs, Flight& flight);

};

#endif //FLIGHT_H