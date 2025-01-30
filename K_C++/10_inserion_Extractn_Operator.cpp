#include <iostream>
#include <string>

using namespace std;

/* 

cout << Extraction operator
cin >> Inserion Operator

*/

int main()
{

    string name;
    short age;

    cout << "Enter your Name & Age : \n";
    getline(cin, name);
    cin >> age;

    cin.ignore();

    string address;

    cout << "Enter Address :  \n";
    getline(cin, address);

    cout << "Your Name : " << name << "\nAge : " << age << "\nAddress : " << address;

    return 0;
}