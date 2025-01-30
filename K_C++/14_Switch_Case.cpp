#include <iostream>
using namespace std;
int main()
{
    int month;
    cout << "Enter Number to See Month ( 1 to 12 ): ";
    cin >> month;

    switch (month)
    {
    case 1:
        cout << "Its January";
        break;
    case 2:
        cout << "Its February";
        break;
    case 3:
        cout << "Its March";
        break;
    case 4:
        cout << "Its April";
        break;
    case 5:
        cout << "Its May";
        break;
    case 6:
        cout << "Its June";
        break;
    case 7:
        cout << "Its July";
        break;
    case 8:
        cout << "Its August";
        break;
    case 9:
        cout << "Its September";
        break;
    case 10:
        cout << "Its October";
        break;
    case 11:
        cout << "Its November";
        break;
    case 12:
        cout << "Its December";
        break;

    default:
        cout << "Please Enter Number blw 1 to 12";
        break;
    }
    return 0;
}