#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c;
    cout << "Enter Base : ";
    cin >> a;
    cout << "Enter height : ";
    cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "Side C : " << c;
    return 0;
}