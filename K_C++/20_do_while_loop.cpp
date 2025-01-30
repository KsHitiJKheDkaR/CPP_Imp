#include <iostream>

using namespace std;

int main()
{
    /* do while loop : is generally used when we want to run a store of code once & run it again based on some condition */

    int number;
    do
    {
        cout << "Enter a # : ";
        cin >> number;
    } while (number < 0);

    cout << "The # is :  " << number << '\n';

    return 0;
}