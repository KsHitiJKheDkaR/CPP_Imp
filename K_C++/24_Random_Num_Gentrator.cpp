#include <iostream>

using namespace std;

// Generating Random Numbers can be Usefull in Number Guessing Games

int main()
{

    srand(time(NULL));

    // BY using only rand() returns num from 0 to 32767  but we dont need num that long hence

    int num = (rand() % 6) + 1; // returns Random num blw 1 to 6
    cout << "Ex. Random # : " << num << '\n';

    cout << '\n';

    // to Roll THree dices at a time we use

    int num1 = (rand() % 6) + 1;
    int num2 = (rand() % 6) + 1;
    int num3 = (rand() % 6) + 1;

    cout << "Dice 1 : " << num1 << '\n';
    cout << "Dice 2 : " << num2 << '\n';
    cout << "Dice 3 : " << num3 << '\n';

    return 0;
}