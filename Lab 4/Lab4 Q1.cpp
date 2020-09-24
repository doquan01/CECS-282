//Quan Do
//Team 8
#include <iostream>

using namespace std;

class Person{
	private:
		string name;
		float salary;
	public:
		void setPerson();
		string getName();
		float getSalary();
};
void Person::setPerson(){
	cout<<"Enter person's name ";
	cin>> name;
	cout<<"Enter person's salary ";
	cin>> salary;
}
string Person::getName(){
	return name;
}
float Person::getSalary(){
	return salary;
}
void order(Person** p1, Person** p2){
		Person* temp;
		temp = *p1;
		*p1 = *p2;
		*p2 = temp;
}
void bsort(Person** p,int n,bool s)
{
	for(int i = 0; i < n; i++){
		for(int j = i+1; j < n; j++){
			if(((s==false && p[i] -> getSalary() > p[j] -> getSalary()) || (s==true && p[i] -> getName() > p[j] -> getName()))){
				order(&p[i],&p[j]);
			}
		}
	}
}

int main(){
	
	int n;
	cout << "Enter number of person: ";
	cin >> n;
	Person* p[n];
	for(int i = 0;i < n;i++){
		p[i] = new Person();
		p[i] -> setPerson();
	}
	cout << "\nUnsorted order" << endl;
	for(int i = 0;i < n;i++){
		cout << (p[i]->getName()) << " " << (p[i] -> getSalary()) << endl;
	}
	cout << "\nSorted base of name alphabetically" << endl;
	bsort(p,n,true);
	for(int i = 0;i < n;i++){
		cout << (p[i]->getName()) << " " << (p[i] -> getSalary()) << endl;
	}
	cout << "\nSorted based on salary from least to greatest" << endl;
	bsort(p,n,false);
	for(int i = 0;i < n;i++){
		cout << (p[i]->getName()) << " " << (p[i] -> getSalary()) << endl;
	}
	cout << endl;
	return 0;
}

