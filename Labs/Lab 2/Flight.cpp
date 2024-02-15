#include "Flight.h"
#include "Time.h"
#include <string>
#include <iostream>

using namespace std;
    
    Flight::Flight() : src("Not yet set"), dest("Not yet set"), departureTime(0){};

    Flight::Flight(string src, string dest){
        this->src=src;
        this->dest=dest;
    }
   
    Flight::Flight(string src, string dest, Time departureTime){
        this->src=src;
        this->dest=dest;
    }

    Flight::Flight(string src, string dest, Date dateOfTravel): src(src), dest(dest), dateOfTravel(dateOfTravel){

    }

    void Flight::setDepartureTime(int hour, int minute){
        departureTime.setHour(hour);
        departureTime.setMinute(minute);
    }

    void Flight::setDepartureTime(Time time){
        departureTime.setTime(time.getHour(),time.getMinute());
    }

    ostream& operator <<(ostream& outs, Flight& flight){
        outs<<"Flight source:"<<flight.src<<endl<<"Flight destination:"<<flight.dest<<endl<<"Departure time:"<<flight.departureTime<<endl;
        return outs;
    }

    void Flight::setBaseFare(double baseFare){
        this->baseFare=baseFare;
    }

    double Flight::getBaseFare(){
        return baseFare;
    }
    
    Date Flight::getDateOfTravel(){
        return dateOfTravel;
    }

    void Flight::setDateOfTravel(Date date){
        dateOfTravel=date;
    }
