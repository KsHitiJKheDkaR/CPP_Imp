#include <iostream>
#include <string>

using namespace std;

int main()
{
    // while loop is used when we dont know how many times we want a specific code be run Again & Again

    string name;


    while (name.empty())
    {
        cout << "Enter your Name : ";
        getline(cin, name);
    }

    cout << "Hello " << name << '\n';

    int i=1;

    while (i < 11)
    {
        cout << i << '\n';
        i++; // remember adding i++ is important as without it , itll turn into infinite loop
    }

    return 0;
}