#include <iostream>

using namespace std;

enum Day
{

    monday = 1,
    tuesday = 2,
    wednesday = 3,
    thursday = 4,
    friday = 5,
    saturday = 6,
    sunday = 7
};
// Note that if we dont assign integer to any of elements of enums it will by default consider values starting from 0 to end

enum Flavor
{
    vanilla,      // = 0
    Butterscouch, // =1
    PineApple,    // ..
    Rusberry      // = 3
};

int main()
{
    /*enums : it is a user defined Data Type consists of paired Integer constants & can be great for use for potential Options*/

    /*(string)*/ Day today = sunday;

    cout << endl;

    switch (today)
    { // you can also write mon, tues ,.. etc instead of 1 ,2,.. etc
    case 1:
        cout << "It is Monday\n ";
        break;
    case 2:
        cout << "It is Tuesday\n ";
        break;
    case 3:
        cout << "It is Wednesday\n ";
        break;
    case 4:
        cout << "It is Thursday\n ";
        break;
    case 5:
        cout << "It is Friday\n ";
        break;
    case 6:
        cout << "It is Saturday\n ";
        break;
    case 7:
        cout << "It is Sunday\n ";
        break;
    }
    cout << endl;

    Flavor flavor = vanilla;

    switch (flavor)
    {
    case vanilla:
        cout << "#" << 1;
        break;
    case Butterscouch:
        cout << "#" << 2;
        break;
    case PineApple:
        cout << "#" << 3;
        break;
    case Rusberry:
        cout << "#" << 4;
        break;
    }
    cout << endl;

    return 0;
}