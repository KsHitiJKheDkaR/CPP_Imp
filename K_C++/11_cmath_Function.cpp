#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x = 3.55;
    double y = 4.14;

    double z;

    z = max(x,y);// returns max of x & y
    z = min(x,y); // returns min of x & y

    z = abs(-3); // returns +ve /absolute value of num

    z = ceil(x); // always rounds up to number greater than num 
    // eg. if ceil(3.14) = 4 & ceil(3.5) = 4 & ceil(3.99) = 4 

    z = round(y); // round() will round off value to the nearest int . 
    // eg  round(3.5) = 4 &  round(3.14) = 3 &  round(3.99) = 4

    z = floor(x); // always rounds down to num 1 less than given num 
    // eg, floor(3.14) = 3 , floor(3.5) = 3 & floor(3.99) = 3 
    

    cout << z;

    return 0;
}