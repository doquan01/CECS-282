//Quan Do, Hunter Lewis
//CECS 282 Lab 8
// 9/1/2020

#include<iostream>
#include<fstream>
#include<iomanip>
#include<cmath>
using namespace std;
const int NUM_MONTHS=12;
const double RAIN_RATE=0.20;//20% more rain than average
const double DRY_RATE = 0.25;
void inputRainFall(int [], int);
int calculateAverageRainFall(int  [], int );
void classifyAndDisplayRainfall(int [],int);

int main()
{int rainFall[NUM_MONTHS];
 int i;
 //Read rainfall from the the file and the fill them in the array
 inputRainFall(rainFall, NUM_MONTHS);
 //Calculate the average rainfall
 double  averageRain;
 averageRain=calculateAverageRainFall(rainFall,NUM_MONTHS);
 
 //Classify months as Dry, Average, or Rainy and display the result
 classifyAndDisplayRainfall(rainFall,NUM_MONTHS);

 
 
 }
void inputRainFall(int rainFall[], int size)
{
	
ifstream inputFile;
inputFile.open("rainfall.txt");
//Initialize month counter
int month = 0; //first month
//Read the monthly rainfall in the file
for(month; month < size; month++){
	inputFile >> rainFall[month];
}
inputFile.close();
}
int calculateAverageRainFall(int rainFall [], int size)
{
	//itterate through array and add total
	float total = 0;
	int average;
	for(int i = 0; i < size; i++){
		total += rainFall[i];
	}
	//calculate average
	average = ceil(total / size);
	return average;
}

void classifyAndDisplayRainfall(int rainFall[], int months)
{
	string  month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
	double averageRain = calculateAverageRainFall(rainFall,NUM_MONTHS);
   //high low avg
   int highestMonth = rainFall[0];
   int lowestMonth = rainFall[0];
   
   int highestIndex = 0;
   int lowestIndex = 0;
   
   for(int i = 0; i < months; i++){
   	if(rainFall[i] < lowestMonth){
   		lowestMonth = rainFall[i];
   		lowestIndex = i;
	   }
	if(highestMonth < rainFall[i]){
		highestMonth = rainFall[i];
		highestIndex = i;
	}
   }
   //display avg, highest, lowest rainfall
   cout<<"\nThe year's average monthly rainfall was ("<< averageRain<< ")mm";
   cout<<"\n"<< month[highestIndex]<<" has the highest rainfall ("<< highestMonth<< ") mm";
   cout<<"\n"<<month[lowestIndex]<<" has the lowest rainfall is ("<< lowestMonth<< ") mm\n\n";
  
  
  //calculate classification, rainy, dry, avg
  float dryMonth = averageRain - (DRY_RATE * averageRain);
  float rainyMonth = averageRain + (RAIN_RATE * averageRain);
  
    //Classify months as Dry, Average, or Rainy and display the result
   cout<<"Month          Rainfall(mm)   Classification"<<endl;
   cout<<"__________     ___________    _____________"<<endl;
   for(int i =0; i<months;i++)
   {
     	if(rainFall[i] < dryMonth ){
     		cout<<"\n"<<i+1<<"\t\t"<<rainFall[i]<<"\t\t   Dry";
		 }
		 else if(rainFall[i] > rainyMonth){
		 	cout<<"\n"<<i+1<<"\t\t"<<rainFall[i]<<"\t\t  Rainy";
		 }
		 else{
		 	cout<<"\n"<<i+1<<"\t\t"<<rainFall[i]<<"\t\t Average";
		 }
      
   }
}
