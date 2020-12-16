// listplus.cpp
// demonstrates reverse(), merge(), and unique()
#include <iostream>

#include <list>

#include<algorithm>

using namespace std;

 

int main()

   {
   //Create 2 lists called list1 and list2. Store integer numbers.
   int arr1[] = { 40, 30, 20, 10 };

   int arr2[] = { 15, 20, 25, 30, 35 };

  //Determine the array size of arr1 and arr2
  int size1 = sizeof(arr1)/sizeof(arr1[0]);
  int size2 = sizeof(arr2)/sizeof(arr2[0]);   

   //Push elements of array arr1 into list1
   list<int> list1;
   for(int i = 0; i < size1; i++){
   	list1.push_back(arr1[i]);
   }
  

  //Push elements of array arr2 into list2
  list<int> list2;
   for(int i = 0; i < size2; i++){
   	list2.push_back(arr2[i]);
   }
   
  // reverse list1: 10 20 30 40
  list1.reverse();

  // merge list2 into list1
  list1.merge(list2);
  
// remove duplicate 20 and 30 from list 1
list1.unique();

 //Diplay the content of list1 using iterator
list<int> :: iterator itr;
for(itr = list1.begin(); itr != list1.end(); ++itr){
	cout <<*itr<< " "; 
} 
cout<<endl;
        
  

   //Display the list1 in reverse
   list1.reverse();
for(itr = list1.begin(); itr != list1.end(); ++itr){
	cout <<*itr<< " "; 
} 
cout<<endl;

   //Find 25 in the list. If it's found, display "Found 25";otherwise, display "Not found 25"
   for(itr = list1.begin(); itr != list1.end(); ++itr){
		if(*itr == 25){
			cout<<"Found 25";
			break;
		} 
		else if(*itr == list1.back()){
			cout<<"Not found 25";
		}
	} 
	cout<<endl;
   return 0;

   }
