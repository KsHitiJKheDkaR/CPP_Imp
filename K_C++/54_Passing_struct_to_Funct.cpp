#include <iostream>

using namespace std;

struct Car
{
    string model;
    int year;
    string color;
};

void printCar(const Car &car)
{
    cout << "Address: " << &car << endl; // Optional: If you want to keep the address
    cout << "Model: " << car.model << endl;
    cout << "Year: " << car.year << endl;
    cout << "Color: " << car.color << endl;
    cout << '\n';
}

void paintCar(Car &car, const string &color)
{
    car.color = color;
}

int main()
{
    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "Blue";

    car2.model = "Audi";
    car2.year = 2021;
    car2.color = "Red";

    printCar(car1);
    paintCar(car1, "Silver");
    printCar(car1); // Print car1 again to see the updated color

    printCar(car2);
    paintCar(car2, "Gold");
    printCar(car2); // Print car2 again to see the updated color

    return 0;
}
