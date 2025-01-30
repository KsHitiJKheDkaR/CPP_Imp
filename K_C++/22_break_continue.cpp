#include <iostream>

using namespace std;

int main()
{
    /* break : breaks out of loop
       continue : skips current iteration
       */

    cout << "After using break " << '\n';
    for (int i = 10; i <= 20; i++)
    {
        if (i == 13)
        {
            break;
        }
        cout << i << '\n'; // break statement will break loop from current instance from where ever it is specified & get out of loop
    }

    cout << '\n';

    cout << "After using continue" << '\n';

    for (int j = 10; j <= 20; j++)
    {
        if (j == 13)
        {
            continue;
        }
        cout << j << '\n'; // note that on executing 13 is absent from printing as continue statement has skipped executing 13
    }

    return 0;
}