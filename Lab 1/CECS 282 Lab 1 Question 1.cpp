//Quan Do
// CECS 282 LAB 7
//9/1/2020
#include <iostream>

using namespace std;

int main ()
{
 int num;
 int odd = 0;
 cout << "Enter a number input: ";
 cin >> num;
 while(num > 0){
     int x = num % 10;
     num = num / 10;
     if(x % 2 != 0){ odd += x;}
 }
 cout << "The sum of all the odd digits in your input is " << odd;
 return 0;
}


