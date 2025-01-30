#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;

    cout << "Enter # Elements : \n";
    cin >> n;
    vector<int> v(n);

    cout << "Enter all elements : \n";
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    short c;

    do
    {
        cout << "\nDo you want to Add more Elements ( 1 = yes, 0 = no(EXIT))  ?:  \n";
        cin >> c;
        if (c == 1)
        {
            int extra;
            cout << "Enter # elements to add extra : \n";
            cin >> extra;

            v.resize(n + extra);

            cout << "Enter All extra Elements : \n";

            for (int i = n; i < n + extra; ++i)
            {
                cin >> v[i];
            }

            n += extra;
        }
    } while (c != 0);

    cout << "All of Your Entered Elements : \n";
    for (int arr : v)
    {
        cout << arr << " ";
    }
    cout << '\n';

    cout << "Thanks for Visiting!\n";
    return 0;
}