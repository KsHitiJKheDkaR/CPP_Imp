#include <iostream>

using namespace std;

int main()
{
    double temp;

    char scale;

    cout << "****** TEMPERATURE CONVERSION ******\n";
    cout << "F : Fahrenheit\n";
    cout << "C : Celcius\n";

    cout << "Enter temperature in which you want to be Converted : ";

    cin >> scale;

    cout << "Enter Temperature : ";
    cin >> temp;

    

    if (scale == 'F' || scale == 'f')
    {
        double fahren = 9 * temp / 5 + 32;
        cout << "Temperature in Fahrenheit : " << fahren << "F\n";
    }
    else if (temp == 'C' || temp == 'c')
    {
        double cel = (temp - 32) * 9 / 5;
        cout << "Temperature in Celcius : " << cel << "C\n";
    }
    else
    {
        cout << "Please Enter only F or C";
    }

    return 0;
}