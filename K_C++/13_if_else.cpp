#include <iostream>
using namespace std;
int main()
{
    short age;
    cout << "Enter your Age : ";
    cin >> age;

    if (age < 18 && age > 0)
    {
        cout << "you are Not Eligible to enter !";
    }
    else if (age >= 18 && age <= 80)
    {
        cout << "Welcome to the Site";
    }
    else if (age > 80)
    {
        cout << "You are Too old to enter this site";
    }
    else if (age < 0)
    {
        cout << "You Havent Been Born Yet";
    }

    return 0;
}