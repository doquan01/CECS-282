//Quan Do
#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
using namespace std;

void transform( char *raw, char *testStr){
	
	int count = strlen(raw);
	for(int i = 0; *(raw+i) != '\0'; i++){
		if(isalpha(*(raw+i)) == 0 || isspace(*(raw+i))){
			count--;
		}
	}
	char* temp = new char[count+1];
	int j = 0;
	for(int i = 0; i < strlen(raw); i++){
		if(isalpha(*(raw+i))){
			*(temp+j) = toupper(*(raw+i));
			j++;
		}
	}
	temp[count] = '\0';
	strcpy(testStr, temp);
}
bool testPalindrome(char *test){
    int i = 0;
    int r = strlen(test) - 1;

    while(i != r){
        if(*(test+i) != *(test+r)){
        	 return false;
		}
        else{
			i++;
        	r--;
		}
		return true;
    }
    return false;
}

int main(){
	cout<< "Enter a word or scentence to see if it is a palindrome."<<endl;
	string s;
	getline(cin, s);

	//declares a constant char[] and puts the contents of s into it
	const char* input = s.c_str();

	//make a new char[] of length s + 1 so we can have \0 at the end
	char* test = new char[s.length() + 1];

	//copies char[] input to char[] test
	strcpy(test, input);
	
	transform(test, test);
	if(testPalindrome(test) == true){
		cout<<s<<" is a palindrome"<<endl;
	}
	else{
		cout<<s<<" is not a palindrome"<<endl;
	}
}


