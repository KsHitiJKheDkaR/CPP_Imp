#include <iostream>

using namespace std;

int main()
{

    char symbol;
    int n, sum, subtractn, multiplicatn = 1, x, y, result;
    bool first = true;
    cout << "Enter Operation to be performed ( + - * / % ) : ";
    cin >> symbol;

    switch (symbol)
    {
    case '+':
        cout << "Enter All Numbers & hit '0' to terminate : ";

        while (true)
        {
            cin >> n;

            sum += n;

            if (n == 0)
            {
                cout << "Sum : " << sum << '\n';
                break;
            }
        }
        break;

    case '-':
        cout << "Enter All numbers to be subtracted : ";
        first = true;

        while (true)
        {
            cin >> n;

            if (first)
            {
                subtractn = n;
                first = false;
            }
            else
            {
                subtractn -= n;
            }

            if (n == 0)
            {
                cout << "Subtractn : " << subtractn << '\n';
                break;
            }
        }
        break;

    case '*':
        cout << "Enter All Numbers to be Multiplied : ";

        while (true)
        {
            cin >> n;
            if (first)
            {
                multiplicatn = n;
                first = false;
            }
            else
            {
                if (n == 0)
                {
                    cout << "Multiplicatn : " << multiplicatn << '\n';
                    break;
                }
                multiplicatn *= n;
            }
        }

        break;

    case '/':
        cout << "Enter Two Operands ( Nr & Dr ) : ";

        cin >> x >> y;

        if (y != 0)
        {
            result = x / y;
        }
        else
        {
            cout << "Error : Division by Zero\n";
        }

        cout << "Division : " << result << '\n';

        break;

    case '%':
        cout << "Enter Two Numbers : ";

        cin >> x >> y;

        if (y != 0)
        {
            result = x % y;
        }
        else
        {
            cout << "Error : Division by Zero\n";
        }

        cout << "Modulus : " << result << '\n';

        break;
    }

    return 0;
}