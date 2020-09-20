//Team 8
//Quan Do, Hunter Lewis
//Lab 3
#include <iostream>

using namespace std;

void bubbleSort(int * arr, int size, int(* compare)(int a, int b));
int compare_ascend(int a, int b);
int compare_descend(int a, int b);


void bubbleSort(int * array, int size, int(* compare)(int a, int b)){
    int temp;
        for(int i = 0; i < size; i++){
        	for(int j = 0; j < size; j++){
        		int x = compare(*(array+i), *(array+j));
            	if(x == 1){
                	temp = *(array + i);
                	*(array + i) = *(array + j);
                	*(array + j) = temp;
            	}
			}
        }
    }
int compare_ascend(int a, int b){
	if(a < b){
		return 1;
	}
	else{
	return 0;	
	}
}
int compare_descend(int a, int b){
	if(a > b){
		return 1;
	}
	else{
		return 0;
	}
}
int main(){
    int size;
    cout << "Enter size: " << endl;
    cin >> size;

    int *array = new int[size];

    cout << "Enter " <<size << " elements" << endl;
    for(int i = 0; i < size; i++){
        cin >> *(array + i);
    }
    bubbleSort((array), size, &compare_ascend);
    cout << "Array in ascending order: " << endl;
    for(int i = 0; i < size; i++){
        cout << *(array+i)<<" ";
    }
    cout<<endl;
    bubbleSort((array), size, &compare_descend);
    cout << "Array in descending order: " << endl;
    for(int i = 0; i < size; i++){
        cout << *(array+i)<<" ";
    }
    cout<<endl;

}
