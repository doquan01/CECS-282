#ifndef Distance_H
#define Distance_H

#include <iostream>
using namespace std;

class Distance //English Distance class
{
private:
int feet;
float inches;
public: //constructor (no args)
Distance() : feet(0), inches(0.0)
{ } //constructor (two args)
Distance(int ft, float in) : feet(ft), inches(in)
{ }
//a. +  to add two Distance objects using member function.
//b. -   to subtract two Distance objects using friend function
//c.  <<  and >>
Distance operator+(const Distance & d2) const;
friend Distance operator-(Distance d1, Distance d2);
friend ostream& operator<<(ostream& out, const Distance & d);
friend istream& operator>>(istream& in, Distance & d);
Distance operator++(int);
Distance operator+(int n);
bool operator>(Distance&);
};
#endif
