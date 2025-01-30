#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    /*fill() :  it is a function used to fill a single element repeated times in an Array
    eg. if we want to fill word "Kshitij" as 100 elements inside Array so we cannot type this string 100 times to fill it inside Array
    */
    const int SIZE = 99;

    string foods[SIZE];

    fill(foods, foods + (SIZE / 3), "samosa");

    fill(foods + (SIZE / 3), foods + (SIZE / 3) * 2, "kachori");

    fill(foods + (SIZE / 3) * 2, foods + SIZE, "vada-pav");

    for (string food : foods)
    {
        cout << food << " \n";
    }

    return 0;
}