// Creating Car Class & car Object

#include <iostream>

using namespace std;

class Car {
public:
	string company;
	string model;
	string color;
	int year;

	void accelerate() {
		cout << "You Accelerated Car\n";
	}
	
	void brake() {
		cout << "You Applied Brakes\n";
	}
};

int main() {
	 
	Car car; // car Object & Car class

	car.company = "Ford"; // Car class Attributes
	car.model = "Shaverley";
	car.color = "Blue";
	car.year = 2021;

	cout << "Company : " << car.company << '\n';
	cout << "Model : " << car.model << '\n';
	cout << "Color : " << car.color << '\n';
	cout << "Year : " << car.year << '\n';
	car.accelerate();
	car.brake();

	return 0;
}