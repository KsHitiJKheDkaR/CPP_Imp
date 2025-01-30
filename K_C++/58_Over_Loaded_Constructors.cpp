// Overloaded Constructors

#include <iostream>

using namespace std;

class Car 
{
public:
	string model;
	string color;
	int year;

	Car(string name, string clr, int yr)
	{
		this->model = name;
		this->color = clr;
		this->year = yr;
	}

	Car(string M, string c)
	{
		this->model = M;
		this->color = c;
	}
};
int main() {
	Car car1("Mustang", "Silver", 2021);
	Car car2("BMW", "Blue");

	cout << car1.model << '\n';
	cout << car1.color << '\n';
	cout << car1.year << '\n';
	cout << '\n';
	cout << car2.model << '\n';
	cout << car2.color << '\n';

	return 0;
}