    /*Null Pointer : a null pointer is a pointer that contains no Address or points to No Value
    When a pointer is holding  null value it means pointer is not pointing at anything ( null-pointer)

    nullptr : it is a special Keyword that represents null-pointer literal

    // nullpointer is generally used when confirming when an Address was Successfully assigned to a Pointer
    */

   // Make sure that your code is isnt deReferencing the null Pointer
   
#include <iostream>

using namespace std;

int main()
{
    int a = 123;
    int *pointer = nullptr;

    pointer = &a;

    if (pointer == nullptr)
    {
        cout << "Address is not assigned to pointer\n";
    }
    else
    {
        cout << "Address is assigned to pointer\n";
    }

    return 0;
}