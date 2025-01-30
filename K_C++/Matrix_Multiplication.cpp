#include <iostream>

#define n 3

using namespace std;

void printM(int M1[n][n], int M2[n][n])
{
    int m[n][n];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            int temp = 0;
            for (int k = 0; k < n; ++k)
            {
                temp += M1[i][k] * M2[k][j];
            }
            m[i][j] = temp;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout << m[i][j] << " ";
        }
        cout << '\n';
    }
}

int main()
{
    int M1[n][n] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int M2[n][n] = {
        {3, 2, 1},
        {6, 5, 4},
        {9, 8, 7}};

    printM(M1, M2);
    /*
    42 36 30
    96 81 66
    150 126 102
    */

    return 0;
}
