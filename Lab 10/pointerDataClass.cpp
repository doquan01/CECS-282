#include "pointerDataClass.h"
#include<iostream>

using namespace std;

pointerDataClass::pointerDataClass(pointerDataClass &x) //Deep copy
{
   maxSize = x.maxSize;
   length = x.length;
   p = new int[maxSize];
   for (int i = 0; i < x.maxSize; i++)
       p[i] = x.p[i];
}
pointerDataClass::pointerDataClass(int size){
	maxSize = size;
	length = 0;
	p = new int[maxSize];
	for (int i = 0; i < maxSize; i++){
		 p[i] = 0;
	}
}
pointerDataClass::~pointerDataClass(){
	delete [] p;
}
void pointerDataClass::insertAt(int index, int num){
	p[index] = num;
	length = length + 1;
}
void pointerDataClass::displayData(){
	for(int i = 0; i < maxSize; i++){
		cout<<p[i];
		if(i < maxSize - 1){
			cout<<", ";
		}
	}
	cout<<endl;
}

int main()
{
pointerDataClass list1(10);
list1.insertAt(0, 50);
list1.insertAt(4, 30);
list1.insertAt(8, 60);
cout<<"List1: " <<endl;
list1.displayData();
cout<<"List 2: "<<endl;
pointerDataClass list2(list1);
list2.displayData();
list1.insertAt(4,100);
cout<<"List1: (after insert 100 at indext 4) " <<endl;
list1.displayData();
cout<<"List 2: "<<endl;
list2.displayData();
return 0;
}
