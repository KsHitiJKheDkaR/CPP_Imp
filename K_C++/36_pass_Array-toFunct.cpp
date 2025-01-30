#include <iostream>

using namespace std;

double getTotal(double prices[], int size)
{
    double total = 0; // always remember to initialize the local variable of function to be Zero as if it to be calculated & returned

    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }
    return total;
}

int main()
{
    double prices[] = {53.34, 24.5, 455.52, 23.0, 34.53, 89.45};
    int size = sizeof(prices) / sizeof(double);
    double total = getTotal(prices, size);

    cout << "$" << total;
    return 0;
}

// Note: Function when receieve Arrays only that array decays into a pointer hence function no longer knows whats actual size of Array is so always pass size of that array as addictional argument to the function for proper execution of Program