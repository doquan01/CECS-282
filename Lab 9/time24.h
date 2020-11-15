//Quan Do
#ifndef time24_H
#define time24_H
#include <iostream>
#include <string>
#include <iomanip>
#include "time12.h"
using namespace std;

class time24{
private:
    int hours; //0 to 23
    int minutes; //0 to 59
    int seconds; //0 to 59
public: //no-arg constructor
    time24() : hours(0), minutes(0), seconds(0){ }
    time24(int h, int m, int s) : //3-arg constructor
        hours(h), minutes(m), seconds(s)
    { }
    void display() const //format: 23:15:01
    {
        if (hours < 10) cout << '0';
        cout << hours << ':';
        if (minutes < 10) cout << '0';
        cout << minutes << ':';
        if (seconds < 10) cout << '0';
        cout << seconds;
    }

    int get_hours() const {
        return hours;
    };
    int get_minutes() const {
        return minutes;
    };
    int get_seconds() const {
        return seconds;
    };
    operator time12();
};
#endif
