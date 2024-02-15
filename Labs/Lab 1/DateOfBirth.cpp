#include <iostream>
#include "DateOfBirth.h"


using namespace std;

Date::Date() : month(1), day(1), year(2000){}

Date::Date(int month, int day, int year){
    if (!isDateValid(month,day,year)){
        cout<<"Date "<<month<<"/"<<day<<"/"<<year<<" invalid, set to 1/1/1900"<<endl;
        this->day=1;
        this->month=1;
        this->year=1900;
    }
    else{
        this->day=day;
        this->month=month;
        this->year=year;
    }
}

int Date::getDay(){
    return day;
}

int Date::getMonth(){
    return month;
}

int Date::getYear(){
    return year;
}

Date Date::getDate(){
    Date date1(month,day,year);
    return date1;
}

void Date::setDay(int day){
    if (isDayValid(day)){
        this->day=day;
    }
    else {
        cout<<"Day invalid, set to 1"<<endl;
        this->day=1;
    }
}

void Date::setMonth(int month){
    if (isMonthValid(month)==true){
        this->month=month;
    }
    else{
        cout<<"Month invalid, set to January"<<endl;
        this->month=1;
    }
}

void Date::setYear(int year){
    if (isYearValid(year)){
        this->year=year;
    }
    else{
        cout<<"Year invalid, set to 2000"<<endl;
        this->year=2000;
    }
}

void Date::setDate(int month, int day, int year){
    this->month=month;
    this->day=day;
    this->year=year;
}

ostream& operator <<(ostream& outs,const Date& date){
    outs<<date.month<<"/"<<date.day<<"/"<<date.year;
    return outs;
}

bool Date::isDayValid(int day){
    if (day>0 && day<=31){
        return true;
    }
    else return false;
}

bool Date::isMonthValid(int month){
    if (month>0 && month<=12){
        return true;
    }
    else return false;
}

bool Date::isYearValid(int year){
    if (year<=2024){
        return true;
    }
    else return false; 
}

bool Date::isDateValid(int month, int day, int year){
    if (isYearValid(year) && isMonthValid(month) && isDayValid(day)){
            //April, June, September, and November have 30 days
        if (month==4 || month == 6 || month == 9 || month == 11){
            
            if (day>0 && day<=30){
                return true;
            }
            else return false;
        }

        //February has 28 days
        if (month == 2){
            //Except for leap years
            if (isLeapYear(year)){
                if (day>0 && day<=29){
                    return true;
                }
                else return false;
            }

            if (day>0 && day<=28){
                return true;
            }
            else return false;
        }

        //Every other month has 31 days
        if (month==1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){

            if (day>0 && day<=31){
                return true;
            }
            else return false;
        }
        return true;
    }
    return false;
}

bool Date::isLeapYear(int year){
    if (year%4==0 && (year%100!=0 || year%400==0)){
        return true;
    }
    else return false;
}

DateOfBirth::DateOfBirth() : Date(){
}

DateOfBirth::DateOfBirth(int month, int day, int year) : Date(month,day,year){
    if (!isYearValid(year)){
        cout<<"Year is invalid, set to 1900"<<endl;
        setYear(1900);

    }
}

DateOfBirth::DateOfBirth(Date date) : Date(date.getMonth(),date.getDay(),date.getYear()){

}


int DateOfBirth::getAge(){
    int day = t->tm_mday;
    int month = t->tm_mon + 1;
    int year = t->tm_year + 1900;
    
    age=year-getYear();

    if (age!=0){
        if (month-getMonth()>=0){
                if (month-getMonth()==0 && day-getDay()>=0){
                        return age;
                    }
                
                if (month-getMonth()==0 && day-getDay()<0){
                    age--;
                    }
                return age;
            }
            else age--;
    }

    return age;
}

bool DateOfBirth::isYearValid(int year){
    if (year>=1900 && year<=2024){
        return true;
    }
    else return false; 
}