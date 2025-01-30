#include <iostream>

using namespace std;

int main()
{
    /*Memory Address : it is a Location in Memory where Data can be Stored & accessed using &  ( Adress of Operator )*/

    string name = "Kshitij";
    int age = 19;
    bool student = true;

    cout << &name << '\n';
    cout << &age << '\n';
    cout << &student << '\n'; // All Memory addresses in Hexa Decimal

    return 0;
}