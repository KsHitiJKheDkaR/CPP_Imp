// The arrow operator (->) in C++ is used to access members of a class or structure through a pointer. It combines dereferencing a pointer and accessing a member into one operation.

/* Note : 
1)Dot Operator (.):

Use with direct objects.

Syntax: object.member

2)Arrow Operator (->):

Use with pointers to objects.

Syntax: pointer->member
*/

#include <iostream>

using namespace std;

class Student
{
public:
	string name;
	int age;

	void info() {
		cout << "You Name : " << name << "\nYour Age : " << age << '\n';
	}
};

class Car
{
public:
	string model;
	int year;

	void carInfo() {
		cout << "Your Car : " << model << "\nYear of Purchase : " << year << '\n';
	}
};

int main() {

	// Using Arrow Operator(->) to Access Members of Class Student
	Student* stuPtr = new Student;
	stuPtr->name = "KSHITIJ";
	stuPtr->age = 19;
	stuPtr->info();

	delete stuPtr;

	cout << '\n';


	// Using Dot Operator(.) to access Members of Class Car
	Car car;
	car.model = "Safari";
	car.year = 2017;
	car.carInfo();

	return 0;
}

