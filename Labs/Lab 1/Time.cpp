#include <iostream>
#include "Time.h"


using namespace std;

Time::Time() : hour(0),minute(0){}

Time::Time(int hour) : minute(0){
    if (hour>=0 && hour<=23){
        this->hour=hour;
    }

    else cout<<"Invalid time set";
}

Time::Time(int hour, int minute){
    if (hour>=0 && hour <=23){
        this->hour=hour;
    }

    if (minute>=0 && minute<=59){
        this->minute=minute;
    }
}

void Time::setHour(int hour){
    if (hour>=0 && hour <=23){
        this->hour=hour;
    }
}

void Time::setMinute(int minute){
    if (minute>=0 && minute<=59){
        this->minute=minute;
    }
}

void Time::setTime(int hour, int minute){
    if (hour>=0 && hour <=23){
        this->hour=hour;
    }

    if (minute>=0 && minute<=59){
        this->minute=minute;
    }
}


int Time::getHour(){
    return hour;
}

int Time::getMinute(){
    return minute;
}

Time Time::getTime(){
    Time time1(hour,minute);
    return time1;
}

void printTime(){
    
}

ostream& operator <<(ostream& outs, const Time& time){
    if (time.hour<10){
        outs<<"0"<<time.hour;
    }
    else{
        outs<<time.hour;
    }

    outs<<":";

    if (time.minute<10){
        outs<<"0"<<time.minute;
    }
    else{
        outs<<time.minute;
    }
      return outs;
 }

Time operator +(const Time& time1, const Time& time2){
    Time temp;

        if (time1.hour+time2.hour > 23){
            if (time1.hour+time2.hour==24){
                temp.hour=0;
            }
            else{
                temp.hour = ((time1.hour+time2.hour)-23);
            }

         if(time1.hour+time2.hour < 23){
            temp.hour=time1.hour+time2.hour;
         }
        }

        if (time1.minute+time2.minute > 59){
            if ((temp.hour+1)<24){
            temp.hour++;
            }
            if ((temp.hour+1)==24){
            temp.hour=0;
            }
            if (time1.minute+time2.minute == 60){
            temp.minute=0;
            }
            else{
            temp.minute=((time1.minute+time2.minute)-60);
            }
            
        }

        else{
        temp.minute = time1.minute + time2.minute;
        }

    return temp;
}

Time operator +(const Time& time1, const int& int1){
    Time temp;

    temp.hour=time1.hour;

    if (time1.minute+int1 > 59){
            if ((time1.hour+1)<24){
            temp.hour++;
            }
            if ((time1.hour+1)==24){
            temp.hour=0;
            }
            if (time1.minute+int1 == 60){
            temp.minute=0;
            }
            else{
            temp.minute=((time1.minute+int1)-60);
            }
        }

        else{
        temp.minute = time1.minute + int1;
        }

    return temp;
}
