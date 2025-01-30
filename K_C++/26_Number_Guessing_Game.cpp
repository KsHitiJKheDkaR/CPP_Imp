#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));

    int num = (rand() % 100) + 1;
    int guess;
    int tries = 0;
    cout << "***** NUMBER GUESSING GAME ******\n";
    do
    {
        cout << "Enter # blw 1 - 100 : ";
        cin >> guess;
        tries++;

        if (guess > num)
        {
            cout << "Too High\n";
        }
        else if (guess < num)
        {
            cout << "Too Low\n";
        }
        else
        {
            cout << "CORRECT!\n";
        }

    } while (guess != num);
    
    cout << "Your # tries : " << tries << endl;

    return 0;
}