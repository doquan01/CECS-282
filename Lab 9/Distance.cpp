#include "Distance.h"
#include <iostream>

using namespace std;
Distance Distance::operator+(const Distance & d2) const{
	int totalFeet = (feet + d2.feet);
	float totalInches = (inches + d2.inches);
	if(totalFeet > 0 && totalInches < 0){
		while(totalInches < 0){
		totalInches = 12 + totalInches;
		totalFeet = totalFeet - 1;
		}
	}
	while(totalInches >= 12){
		totalInches = totalInches - 12;
		totalFeet = totalFeet + 1;
	}
	return Distance(totalFeet, totalInches);
}
Distance operator-(Distance d1, Distance d2){
	int totalFeet = (d1.feet - d2.feet);
	float totalInches = (d1.inches - d2.inches);
	if(totalFeet > 0 && totalInches < 0){
		while(totalInches < 0){
		totalInches = 12 + totalInches;
		totalFeet = totalFeet - 1;
		}
	}	
	while(totalInches >= 12){
		totalInches = totalInches - 12;
		totalFeet = totalFeet + 1;
	}
	return Distance(totalFeet, totalInches);
}
ostream& operator<<(ostream& out, const Distance & d){
	out << d.feet << "'"<< d.inches << "\"";
		return out;
}
istream& operator>>(istream& in, Distance & d){
	int ft;
	float inc;
	cout<<"Enter feet: ";
	in>>ft;
	cout<<"Enter inches: ";
	in>>inc;
	d.feet = ft;
	d.inches = inc;
	
	return in;
}
Distance Distance::operator++(int){
	return Distance(feet+1,inches);
} 
Distance Distance::operator+(int n){
	return Distance(feet+n,inches);
} 
bool Distance::operator>(Distance&o){
	if((feet>o.feet)&&(inches>o.inches)){
		return true;
	}
	else{
		return false;
	}
}
int main()
{
Distance dist1, dist3, dist4; //define distances
cin>>dist1;
Distance dist2(11, 6.25); //define, initialize dist2
dist3 = dist1 + dist2; //single '+' operator
dist4 = dist1 - dist2; //friend '-' operators
//display all lengths
cout << "dist1 = ";
cout<< dist1 << endl;
cout << "dist2 = ";
cout<< dist2 << endl;
cout << "dist3 = ";
cout<< dist3 << endl;
cout << "dist4 = ";
cout<< dist4 << endl;

dist2=dist1++; //Increase feet by one
dist3=dist2+10;//10 mean feet
cout << "dist2 = ";
cout<< dist2 << endl;
cout << "dist3 = ";
cout<< dist3 << endl;
if(dist4>dist1)
   cout<<"Yes"<<endl;
else
   cout<<"No"<<endl;
return 0;
}
