// Overloaded Functions : they are functions with same name but different No of Arguments passed
// Note : A Function with its Arguments is called Function Signature

// N no of Arguments can be Passed to a Function

#include <iostream>
#include <string>

using namespace std;


void Car() 
{
	cout << "This is your Car!\n";
}

void Car(string car, int yr)
{
	cout << "Car Model : " << car << "\nYour Year of Purchase : " << yr << '\n';
}

int main() {
	string model;
	int year;

	cout << "Enter Car Name & year : ";
	getline(cin, model);
	cin >> year;

	Car();
	Car(model, year);
	
	return 0;
}