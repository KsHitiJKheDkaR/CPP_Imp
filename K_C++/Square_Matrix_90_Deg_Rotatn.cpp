#include <iostream>

using namespace std;

void printM(int a[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }
}

void RotateM(int a[3][3])
{
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            swap(a[i][j], a[j][i]);
        }
    }

    printM(a);
}

int main()
{
    // int n;

    // cout << "Enter N : ";
    // cin >> n;

    int a[][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    RotateM(a);

    return 0;
}