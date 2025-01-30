#include <iostream>

using namespace std;

int main()
{
    /*for loop : a for loop is generally used when we know how many times we want a specified code */

    cout << '\n';
    for (int i = 0; i < 5; i++)
    {
        cout << "KK you're the GREATEST" << '\n';
    }

    cout << "\n";

    for (int j = 10; j < 21; j += 2)
    {
        cout << j << '\n';
    }

    cout << '\n';

    for (int i = 10; i; i -= 2) // Note that we didnt specified conditn but still it executes code bcz decrementation will continue only until last Non Zero number
    {
        cout << i << '\n';
    }

    return 0;
}