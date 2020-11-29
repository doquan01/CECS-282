#ifndef pointerDataClass_H
#define pointerDataClass_H

#include<iostream>

using namespace std;

class pointerDataClass

{ int maxSize;//variable to store the maximum size of p

  int length;//variable to store the number of elements in p

  int *p;// pointer to an int array

  public:

  pointerDataClass(int size);

  ~pointerDataClass();

  void insertAt(int index, int num);

  void displayData(); 
  
  pointerDataClass(pointerDataClass &x);

}; 
#endif
