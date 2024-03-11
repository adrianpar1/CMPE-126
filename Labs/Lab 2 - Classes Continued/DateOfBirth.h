#ifndef DATEOFBIRTH_H_
#define DATEOFBIRTH_H_
#include <ctime>

using namespace std;

class Date{
public:
    //Default constructor for the Date class, setting the date to 1/1/2000
    Date();

    //Constructor for the date class, taking three ints, month, day, and year as arguments
    Date(int month, int day, int year);

    //Getter function for the day
    int getDay();

    //Getter function for the month
    int getMonth();

    //Getter function for the year
    int getYear();

    //Getter function for the date
    Date getDate();

    //Setter function for the day
    void setDay(int day);

    //Setter function for the month
    void setMonth(int month);

    //Setter function for the year
    void setYear(int year);

    //Setter function for the date
    void setDate(int month, int day, int year);

    //Operator overload for "<<"
    friend ostream& operator <<(ostream& outs, const Date& date);

private:
    int day;
    int month;
    int year;

    //Helper function to check if the day is valid
    bool isDayValid(int day);

    //Helper function to check if the month is valid
    bool isMonthValid(int month);

    //Helper function to check if the year is valid
    bool isYearValid(int year);

    //Helper function to check if the date is valid
    bool isDateValid(int month, int day, int year);

    //Helper function to check if the year is a leap year
    bool isLeapYear(int year);

};







class DateOfBirth : public Date{
public:
DateOfBirth();
DateOfBirth(int month, int day, int year);
DateOfBirth(Date date);


int getAge();

private:
int age;
time_t today = time(NULL);
struct tm *t = localtime(&today);

bool isYearValid(int year);

};


#endif //DATEOFBIRTH_H_