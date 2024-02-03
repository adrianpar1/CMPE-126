#ifndef TIME_H
#define TIME_H

class Time{
    private:
    int hour;
    int minute;

    public:
    //The default constructor for the Time class, sets hour and minute to 0
    Time();

    //Constructor for the Time class that takes in an int as an argument, to set the hour 
    Time(int hour);

    //Constructor for the Time class that takes in two ints as an argument, to set the hour and the minute
    Time (int hour, int minute);

    //Setter for the hour variable
    void set_hour(int hour);

    //Setter for the minute variable
    void set_minute(int minute);

    //Setter for both the hour and minute variable
    void set_time(int hour, int minute);

    //Getter for the hour variable
    int get_hour();

    //Getter for the minute variable
    int get_minute();

    //Getter for the time
    Time get_time();

    //Prints the time
    void print_time();






};

#endif //TIME_H