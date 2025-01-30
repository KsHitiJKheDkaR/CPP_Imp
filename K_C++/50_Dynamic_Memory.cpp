#include <iostream>

using namespace std;

int main()
{
    /*Dynamic Memory : it is memory allocated after a Program is compiled & running.
    We use 'new' Operator which is used to allocate memory in the Heap rather than Stack when we dont know how much memory we will require.
    it is generally used while we are accepting User Input.*/

    int *pNum = NULL;

    pNum = new int; // indicates that pNum contains new address in heap which is used to store an Integer value only

    *pNum = 21;

    cout << "Address :  " << pNum << endl;
    cout << "Value :  " << *pNum << endl;

    delete pNum; // best to use delete operator to free up space occupied by the pointer pNum as & when we No longer want to use this ptr
    // if we dont delete the pointer we allocated Heap Memory it may cause memory leaks & its best to avoid that

    // lets create an Array & allocate its Memory in the Heap

    char *pGrades = NULL;
    int size;

    cout << "Enter # Grades : ";
    cin >> size; // say 5

    pGrades = new char[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter #" << i + 1 << " : ";
        cin >> pGrades[i];
    } //say : 10 20 30 40 50

    for (int i = 0; i < size; i++)
    {
        cout << pGrades[i] << " ";
    }

    delete[] pGrades;

    return 0;
}