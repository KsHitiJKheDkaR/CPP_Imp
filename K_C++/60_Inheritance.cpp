// Inheritance 

#include <iostream>

using namespace std;

class Animal {
public :
	bool alive = true;

	void eat() {
		cout << "This Animal is Eating!\n";
	}
};

class Dog : public Animal
{
public:
	void bark() {
		cout << "This Animal Barks!\n";
	}
};

class Cat : public Dog
{
public:
	void meow() {
		cout << "This Animal says Meow!\n";
	}
};

class Shape
{
public:
	double volume;
	double area;
};

class Cube : public Shape
{
    public :
    double side;

    Cube(double a){
        side = a;
        area = a*a;
        volume = a*a*a;
    }
};

class Sphere : public Shape
{
    public : 
    double radius;

    Sphere(double r)
    {
        radius = r;
        area = 4*3.14*r*r;
        volume = (4*3.14*r*r*r)/3;
    }
};

int main() {
	Cat cat;
	Dog dog;
	cout << cat.alive << '\n';
	dog.bark();
	cat.meow();
	
	cout << '\n';

	Cube cube(5);
	Sphere sphere(4);

	cout << "Cube Area : " << cube.area << '\n';
	cout << "Cube Volume : " << cube.volume << '\n';
	cout << "Sphere Area : " << sphere.area << '\n';
	cout << "Sphere Volume : " << sphere.volume << '\n';

	return 0;
}