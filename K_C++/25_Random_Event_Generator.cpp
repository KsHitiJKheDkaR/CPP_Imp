#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int RandNum = (rand() % 5) + 1; // returns num from 1 to 5

    switch (RandNum)
    {
    case 1:
        cout << "You Win a KeyChain";
        break;
    case 2:
        cout << "You Win a Burger";
        break;
    case 3:
        cout << "You Win a tshirt";
        break;
    case 4:
        cout << "You Win a Free Launch";
        break;
    case 5:
        cout << "You Win a Movie Ticket";
        break;

    default:
        cout << "You Didnt Win Anything!";
        break;
    }

    return 0;
}