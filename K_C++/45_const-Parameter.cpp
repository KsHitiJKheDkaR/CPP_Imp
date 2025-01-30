#include <iostream>

using namespace std;

void PrintInfo(const string moniker, const int age)
{
    cout << "Name: " << moniker << endl;
    cout << "Age : " << age << endl;

    // Hence No changes can be made within name & age variable & if made it will through errors
}

int main()
{
    /*const parameter : it is an read only code & is more secure also acts as an intent for other references & pointers,it prevents from any changes to be made to a variable's value that is being  stored */

    string name = "KSHITIJ";
    int age = 19;

    PrintInfo(name, age);

    return 0;
}
