// Constructors

// Note :  Name of Constructor must match with Class Name 

// Also Constructors Dont have any Return type , not even void

#include <iostream>

using namespace std;

class Car {
public:
	string model;
	int year;
	string color;

	Car(string M, int yr, string clr) { // Car is Constructor which accepts Attributes as Parameters 
		model = M;
		year = yr;
		color = clr;
	}

    // or you can also initialize Car Constructor in given both ways & both of them are Valid

    // Car(string M,int yr,string clr){
    //     this->model = M;
    //     this->year = yr;
    //     this->color = clr;
    // }

    // Car(string model,int year,string color){
    //     this->model = model;
    //     this->year = year;
    //     this->color = color;
    // }
};

int main() {
	Car car("AudiR8", 2021, "Blue");

	cout << car.model << '\n';
	cout << car.year << '\n';
	cout << car.color << '\n';
	return 0;
}