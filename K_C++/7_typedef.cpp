#include <iostream>

using namespace std;

typedef string str_t;
typedef double d;

typedef struct Car
{
	string model;
	int year;
	string color;
} Vehicle; //  Other name for Car via typdef is Vehicle

int main()
{
	d radius = 3.14159;
	str_t name = "Bro";

	Vehicle car;

	car.model = "Audi";
	car.color = "Blue";
	car.year = 2021;

	cout << "Hello " << name << "\nRadius : " << radius << '\n';

	cout <<'\n';

	cout << car.model << '\n';
	cout << car.year << '\n';
	cout << car.color << '\n';
	return 0;
}