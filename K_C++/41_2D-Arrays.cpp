// 2D Array

#include <iostream>

using namespace std;

int main()
{
    int a[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int rows = sizeof(a) / sizeof(a[0]);
    int columns = sizeof(a[0]) / sizeof(a[0][0]);

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < columns; ++j)
        {
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}