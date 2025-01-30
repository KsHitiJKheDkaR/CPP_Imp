#include <iostream>

using namespace std;

int main()
{
    short students = 20;

    students += 5; // adds 5 to original students & re-Assigns it to students

    students++; // Increment Operator used for incrementing by 1

    students -= 2;

    students--; // Decrement Operator used for decrementing by 1

    students *= 3;

    students /= 4;

    students %= 3; // returns remainder of division

    short a = 2 % 5; // guess answer

    cout << "Students : " << students << '\n'; // 2

    cout << "a : " << a << '\n'; // 2

    // Note when we divide a num by greater than that num then we get that num back as remainder in moudulus Operator

    // eg.

    short b;

    b = 2 % 3;

    short c;

    c = 3 % 2;

    cout << b << '\n'; // 2 bcz 2 < 3 ( 2/3 ) & hence 2 is returned back as remainder
    cout << c << '\n'; // 1 bcz 3 > 2 ( 3/2 ) & hence 1 is returned as division remainder

    return 0;
}