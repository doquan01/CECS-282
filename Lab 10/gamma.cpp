#include "gamma.h"
#include <iostream>

using namespace std;

gamma::gamma(){
	id = ++total;
}
void gamma::showid(){
	cout<<"ID number is "<<id<<endl;
}
void gamma::showtotal(){
	cout<<"Total is "<<total<<endl;
}
gamma::~gamma(){
	cout<<"Destroying ID number "<< id<<endl;
	total--;
}

int main()
   {
   gamma g1;
   gamma::showtotal();
   
   gamma g2, g3;
   gamma::showtotal();
   
   g1.showid();
   g2.showid();
   g3.showid();
   cout << "----------end of program----------\n";
   return 0;

   }
