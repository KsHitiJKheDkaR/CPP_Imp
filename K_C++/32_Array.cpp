#include <iostream>

using namespace std;

int main()
{
    /*Arrays : arrays are A container that Hold multiple values at a time of Same Data Type
    Each element inside array can me accessed using Index num of that Position
    Index of First Element is 0 , second is 1 & So on
    */

    string car[] = {"Mustang", "Audi", "BMW", "Ferrari"};

    cout << car << '\n';    // Output is the Memory address of Array named 'car' & is not the Values stored inside
    cout << car[0] << '\n'; // First element within Car Array
    cout << car[1] << '\n'; // First Second within Car Array
    cout << car[2] << '\n'; // First Third within Car Array

    // we can replace the Elements in any spot within Array with another Element. eg

    car[1] = "Range Rover";
    cout << car[1] << '\n';

    // if we dont want to Assign Elements inside as soon as Declaring Array , we can Declare Array & initialize Size of THis Array

    // eg.

    string Car[5]; // Remember Initializing Size of Array 'Car' is very imp
    cout << "Enter Five Car Names : ";

    for (int i = 0; i < 5; i++)
    {
        cin >> Car[i];
    }
    cout << endl;

    cout << Car[0] << '\n';
    cout << Car[1] << '\n';
    cout << Car[2] << '\n';
    cout << Car[3] << '\n';
    cout << Car[4] << '\n';
    cout << '\n';

    // Lets create an Array at the end

    double prices[] = {12.23, 55.89, 45.34, 70.5};

    for (int i = 0; i < 4; i++)
    {
        cout << prices[i] << "$" << '\n';
    }

    return 0;
}