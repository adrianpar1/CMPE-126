#include <iostream>
#include "Time.h"


using namespace std;

Time::Time() : hour(12),minute(0){}

Time::Time(int hour) : minute(0){
    if (isHourValid(hour)){
        this->hour=hour;
    }
    else{
        setHour(12);
        cout<<"Hour is invalid, time set to 12:00\n";
    }
}

Time::Time(int hour, int minute){
    if (isHourValid(hour) && isMinuteValid(minute)){
        this->hour=hour;
        this->minute=minute;
    }
    else{
        setHour(12);
        setMinute(0);
        cout<<"Time is invalid, time set to 12:00\n";
    }
}

void Time::setHour(int hour){
    if (isHourValid(hour)){
        this->hour=hour;
    }
    else{
        setHour(12);
        cout<<"Hour is invalid, hour set to 12\n";
    }  
}

void Time::setMinute(int minute){
    if (isMinuteValid(minute)){
        this->minute=minute;
    }
    else{
        this->minute=0;
        cout<<"Minute is invalid, minute set to 0\n";
    }
}

void Time::setTime(int hour, int minute){
    if (isHourValid(hour)){
        this->hour=hour;
    }
    else{
        this->hour=0;
        this->minute=0;
        cout<<"Time is invalid, time set to 00:00\n";
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
        temp.hour= time1.hour + time2.hour;
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

Time operator +(const int& int1, const Time& time1){
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

bool Time::isHourValid(int hour){
    if (hour>=0 && hour<=23){
        return true;
    }
    else{
        return false;
    }
}

bool Time::isMinuteValid(int minute){
    if (minute>=0 && minute<=59){
        return true;
    }
        else{
        return false;
    }
}
