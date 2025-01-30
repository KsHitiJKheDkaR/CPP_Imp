// Recursion

#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

void walk(int steps)
{
    if (steps > 0)
    {
        cout << "You walked " << steps << " step" << '\n';
        walk(steps -1);
    }
}

int main()
{
    int num, steps;

    cout << "Enter # to find its Factorial : ";
    cin >> num;

    cout << "Factorial : " << factorial(num);

    cout << '\n';

    cout << "Enter # Steps you want to walk : ";
    cin >> steps;

    walk(steps);

    return 0;
}