// ROCK PAPER SCISSORS GAME

#include <iostream>
#include <ctime>

using namespace std;

char getUserChoice();
char getComputerChoice();
char showChoice(char choice);
void showWinner(char player, char computer);

int main()
{
    char player, computer;
    cout << "ROCK PAPER SCISSORS GAME\n";
    cout << "**************************\n";
    cout << "Choose one of the Following\n";
    cout << "1.Rock\n";
    cout << "2.Paper\n";
    cout << "3.Scissors\n";

    player = getUserChoice();
    cout << "Your Choice : ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "Computer's Choice : ";
    showChoice(computer);

    showWinner(player, computer);

    return 0;
}
char getUserChoice()
{
    char player;
    cin >> player;
    switch (player)
    {
    case 'r':
        return 'r';
    case 'p':
        return 'p';
    case 's':
        return 's';
    }
}
char getComputerChoice()
{
    srand(time(0));

    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }
}
char showChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        cout << "Rock\n";
        break;
    case 'p':
        cout << "Paper\n";
        break;
    case 's':
        cout << "Scissors\n";
        break;
    }
    return choice;
}
void showWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            cout << "Its a Tie\n";
        }
        else if (computer == 'p')
        {
            cout << "You Lose\n";
        }
        else
        {
            cout << "You Win\n";
        }
        break;

    case 'p':
        if (computer == 'r')
        {
            cout << "You Win\n";
        }
        else if (computer == 'p')
        {
            cout << "Its a Tie\n";
        }
        else
        {
            cout << "You Lose\n";
        }
        break;
    case 's':
        if (computer == 'r')
        {
            cout << "You Lose\n";
        }
        else if (computer == 'p')
        {
            cout << "You Win\n";
        }
        else
        {
            cout << "Its a Tie\n";
        }

        break;
    }
}