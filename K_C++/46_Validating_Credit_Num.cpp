#include <iostream>

using namespace std;

int getDigits(const int number)
{

    return number % 10 + number / 10 % 10;
}
int sumOddDigits(const string CardNumber)
{

    int sum = 0;
    for (int i = CardNumber.size() - 2; i >= 0; i -= 2)
    {
        sum += getDigits((CardNumber[i] - '0') * 2);
    }

    return sum;
}
int sumEvenDigits(const string CardNumber)
{
    int sum = 0;
    for (int i = CardNumber.size() - 1; i >= 0; i -= 2)
    {
        sum += CardNumber[i] - '0';
    }

    return sum;
    return 0;
}

int main()
{
    string cardNumber;
    int result = 0;
    cout << "Enter your Credit Card # : ";
    cin >> cardNumber;

    result = sumOddDigits(cardNumber) + sumEvenDigits(cardNumber);

    if (result % 10 == 0)
    {
        cout << "Card # is valid\n";
    }
    else
    {
        cout << "Card # is not valid\n";
    }

    return 0;
}