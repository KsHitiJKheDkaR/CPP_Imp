#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;

    cout << "Enter # rows : ";
    cin >> n;

    cout << "Enter # columns : ";
    cin >> m;

    vector<vector<int>> v(n, vector<int>(m));

    cout <<"Enter all elements : ";

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> v[i][j];
        }
    }

    cout << "2D Array : \n";

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << v[i][j] << " ";
        }
        cout <<'\n';
    }

    return 0;
}