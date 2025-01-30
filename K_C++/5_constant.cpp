#include <iostream>

using namespace std;
using str = std::string;

int main()
{
    // const : any variable we do not want to be Changed is prefixed with const

    const float PI = 3.14159;
    const float SPEED_LIGHT = 299792458;

    float circum, radius;

    cout << "Enter Radius :  ";
    cin >> radius;

    circum = 2 * PI * radius;

    cout << "Circumference : " << circum << '\n';

    cout << "Enter your Name : ";

    str name;

    cin >> name;

    cout << "Your Name is " << name << '\n';
    cout << "Speed of Light : " << SPEED_LIGHT << '\n';

    return 0;
}