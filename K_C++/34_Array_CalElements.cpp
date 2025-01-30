
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a[5];

    cout << "Enter Five Names : ";

    for (int i = 0; i < 5; ++i)
    {
        getline(cin, a[i]);
    }

    for (const string &name : a)
    {
        cout << name << " ";
    }

    cout << '\n';

    cout << "Size of a : " << sizeof(a) / sizeof(a[0]) << '\n';

        return 0;
}