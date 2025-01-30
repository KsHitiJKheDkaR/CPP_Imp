#include <iostream>

using namespace std;

struct Darr
{
    int *a;
};

int main()
{
    int n;
    cout << "Enter the Size of Array: ";
    cin >> n;

    Darr *Sptr = new Darr;
    Sptr->a = new int[n];

    cout << "Enter all the Elements: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> Sptr->a[i];
    }

    cout << "Elements you entered are: " << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << Sptr->a[i] << '\n';
    }

    delete[] Sptr->a;
    delete Sptr;

    return 0;
}
