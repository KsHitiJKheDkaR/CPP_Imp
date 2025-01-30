/*Pointer : it is an Variable that stores the address of another variable as sometimes using Address in place of value will be easier & beneficial & reduces time complexity of program,pointers can operate on DS like Arrays,stack Queue much more efficiently in runtime etc.*/

// & : Addess of Operator
// * : Indirection/De-reference Operator

// eg. If i want to give free pizza to my Neighbors around ill tell them all address of Place where they will come & get pizza instead of me carrying all stack of pizza with me.

#include <iostream>

using namespace std;

int main()
{

    string name = "Bro";
    int age = 19;
    int a[5] = {10, 20, 30, 40, 50};
    int *Pa = a;

    for (int i = 0; i < 5; ++i)
    {
        cout << "Value at index " << i + 1 << " : " << Pa[i] << '\n';
    }

    cout << '\n';
    // it does not limits to assigning address to a single ptr only ,we can assign address of a pointer to new pointer

    // eg.

    // Display the value using different levels of pointers
    int Value = 20;
    int *ptr = &Value;
    int **PtrToPtr = &ptr;
    cout << "Value: " << Value << endl;                       // Directly
    cout << "Value through ptr: " << *ptr << endl;            // Through single pointer
    cout << "Value through ptrToPtr: " << **PtrToPtr << endl; // Through double pointer // Display the addresses
    cout << endl;
    cout << "Address of value: " << &Value << endl;
    cout << "Address stored in ptr (Address of value): " << ptr << endl;
    cout << "Address stored in ptrToPtr (Address of ptr): " << PtrToPtr << endl;
    cout << endl;

    // Note that More of such pointers pointing to other pointers can be created

    return 0;
}