#include <iostream>

using namespace std;

int main()
{
    // 1)integer ( int ) : 4 byte
    int days = 7;
    int age = 19;
    int year = 2024;

    // 2) Double ( double) : 8 byte
    double gpa = 9.95;
    double price = 19.15;
    double temperature = 25.1;

    cout << price << '\n';
    // std::cout << temperature<< '\n';

    // 3) Character ( char ) :
    char grade = 'A'; // 2 byte
    char initial = 'C';
    char currency = '$';

    cout << initial << '\n';
    cout << currency << '\n';

    // 4)Boolean ( bool ) :
    bool student = true; // 1 bit
    bool power = false;
    bool ForSale = true;

    cout << power << '\n';
    cout << ForSale << '\n';

    // 5)Strings ( string ) = Objects that Represents a Sequence of Text :
    string name = "KSHITIJ"; // varies consumption
    cout << "Hello " << name << '\n';
    cout << "You are " << age << "years Old." << '\n';

    return 0;
}