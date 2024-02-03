#include <iostream>
#include "Time.h"

using namespace std;

Time::Time() : hour(0),minute(0){}

Time::Time(int hour){
    this->hour=hour;
}

Time::Time(int hour){
    this->hour=hour;
}

Time::Time(int hour, int minute){
    this->hour=hour;
    this->minute=minute;
}

void Time::set_hour(int hour){
    this->hour=hour;
}

void Time::set_minute(int minute){
    this->minute=minute;
}

void Time::set_time(int hour, int minute){
    this->hour=hour;
}

int get_hour(){
    
}

int get_minute();

Time get_time();

void print_time();

