//Quan Do
#include <iostream>
#include <string>
#include <iomanip>
#include "time24.h"
using namespace std;

time24::operator time12() {
    int hrs24 = hours;
    bool pm = hours < 12 ? false : true;   //find am/pm
    //round secs
    int roundMins = seconds < 30 ? minutes : minutes + 1;
    if (roundMins == 60)                    //carry mins?
    {
        roundMins = 0;
        ++hrs24;
        if (hrs24 == 12 || hrs24 == 24)      //carry hrs?
            pm = (pm == true) ? false : true;  //toggle am/pm
    }
    int hrs12 = (hrs24 < 13) ? hrs24 : hrs24 - 12;
    if (hrs12 == 0)                           //00 is 12 a.m.
    {
        hrs12 = 12; pm = false;
    }
    return time12(pm, hrs12, roundMins);
}

