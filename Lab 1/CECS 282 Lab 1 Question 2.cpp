//Quan Do, Hunter Lewis
// CECS 282 LAB 07
// 9/1/2020
#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int
bin2Dec (string bin)
{
  stringstream holder (bin);
  int x = 0;
  holder >> x;
  int power = 1;
  int decimal = 0;
  while (x > 0)
    {
      int last = x % 10;
      x /= 10;
      decimal += last * power;
      power = power * 2;
    }
  cout << decimal;
  return 0;
}

int
main ()
{
  string s;
  cout<<"Enter a binary number ";
  cin >> s;
  bin2Dec (s);
  return 0;
}
