#include <iostream>
#include <vector>
#include<algorithm>
#include<numeric>//for accumulator operations

using namespace std;

 
int main(){ // an array of doubles

	double arr[] = { 1.1, 2.2, 3.3, 2.2, 4.4 };
	
	//Determine the array size
	int size = sizeof(arr)/sizeof(arr[0]);
	
	// initialize vector v1 to array arr
	vector<double> v1;
	for(int i = 0; i < size; i++){
	v1.push_back(arr[i]);
	}
	//Display the contents of vector v1
	cout<<"Content of v1"<<endl;
	for(int i = 0; i < v1.size(); i++){
		cout<<v1[i]<<" ";
	}
	cout<<endl;

    // Sorting the Vector in Ascending order
    sort(v1.begin(), v1.end());

    //Display the content of vector v1 after sorting
	cout<<"Content of sorted v1"<<endl;
		for(int i = 0; i < v1.size(); i++){
			cout<<v1[i]<<" ";
		}
	cout<<endl;
	
    // Reversing the Vector v1
    reverse(v1.begin(), v1.end());

    //Display the content of vector v1
	cout<<"Content of reversed v1"<<endl;
		for(int i = 0; i < v1.size(); i++){
			cout<<v1[i]<<" ";
		}
	cout<<endl;
   
    //Display the maximum element of vector v1
    double max = *max_element(v1.begin(), v1.end());
    cout<<"Max value from v1: "<<max<<endl;

     //Display the minimum element of vector v1
     double min = *min_element(v1.begin(), v1.end());
    cout<<"Min value from v1: "<<min<<endl;

    //Display the accumulation of all elements in vector v1
    // Starting the summation from 0
	double accum = accumulate(v1.begin(), v1.end(), 0.0);
    cout<<"Accumulation of all elements "<< accum<<endl;
    
    
    // Counts the occurrences of 2.2 from 1st to last element
    //Display the counts
    int c = count(v1.begin(), v1. end(), 2.2);
    cout<<"Number of occurrences of 2.2: "<< c<< endl;

    // Delete second element of vector
    v1.erase(v1.begin() + 1);
    //Display the v1 after erasing the element
	cout<<"Content of v1 after removing second element"<<endl;
			for(int i = 0; i < v1.size(); i++){
				cout<<v1[i]<<" ";
			}
		cout<<endl;
   	
	//Remove the duplicate occurrences
	v1.erase(unique(v1.begin(),v1.end()),v1.end());
	cout<<"Content of v1 after removing duplicate elements"<<endl;
			for(int i = 0; i < v1.size(); i++){
				cout<<v1[i]<<" ";
			}
		cout<<endl;
   
return 0;
}

 
