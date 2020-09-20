//Team 8
//Quan Do, Hunter Lewis
//Lab 3
#include <iostream>
#include <fstream>

using namespace std;

int readData(int *&arr){
    int size;
    ifstream inputFile;
    inputFile.open("data.txt");
    inputFile >> size;
    arr = new int[size];
    for(int i = 0; i < size; i++){
        inputFile >> *(arr + i);
    }
    inputFile.close();
    return size;
}
void bsort(int *arr, int last){
    bool sort = true;
    int j = 0;
    int temp;
    while(sort){
        sort = false;
        j++;
        for(int i = 0; i < last-j; i++){
            if(*(arr + i) > *(arr + i + 1)){
                temp = *(arr + i);
                *(arr + i) = *(arr + i + 1);
                *(arr + i + 1) = temp;
                sort = true;
            }
        }
    }
}
void writeToConsole(int *arr, int last){
    cout << "Sorted: " << endl;
	for(int i = 0; i < last; i++){
        cout << *(arr + i)<< " ";
    }
    cout<<endl;
}
int main(){
    int nums;
    int *arr;

    nums = readData(arr);
    bsort(arr, nums);
    writeToConsole(arr, nums);
    delete[] arr;
    return 0;
}
