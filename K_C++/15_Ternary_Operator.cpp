#include <iostream>
using namespace std;
int main()
{

    // (condition) ? true : false; or 1 : 0
    int age;
    cout << "Enter your Age : ";
    cin >> age;

    age > 18 ? cout << "You Can Drive\n " : cout << "You Cant Drive\n";

    int x = 2 % 9;

    cout << x << '\n';

    int y;

    cout << "Enter Number to be checked Even or Odd : ";
    cin >> y;

    y % 2 == 0 ? cout << "Number is Even\n" : cout << "Number is Odd\n";


    bool hungry = true;

    cout << (hungry ? "You are Hungry " : "you are Full");

    return 0;
}