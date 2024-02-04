#ifndef TIME_H
#define TIME_H

using namespace std;

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
    void setHour(int hour);

    //Setter for the minute variable
    void setMinute(int minute);

    //Setter for both the hour and minute variable
    void setTime(int hour, int minute);

    //Getter for the hour variable
    int getHour();

    //Getter for the minute variable
    int getMinute();

    //Getter for the time
    Time getTime();

    //Prints the time
    void printTime();

    //Operator overload for outstream
    friend ostream& operator <<(ostream& outs, const Time& time);

    //Operator overload for addition
    friend Time operator +(const Time& time1, const Time& time2);

    //Operator overload for addition
    friend Time operator +(const Time& time1, const int& int1);

};

#endif //TIME_H