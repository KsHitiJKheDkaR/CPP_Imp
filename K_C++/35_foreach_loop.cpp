// for each loop is only used to output elements of Array, Stack ,Queue etc from first to last element 

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a[5];

    cout << "Enter Five # : ";

    for (int &arr : a)
    {
        cin >> arr;
    }

    for(int arr : a)
    {
        cout << arr << " ";
        cout <<'\n';
    }

    cin.ignore();

    string name[5];

    cout <<"Enter Five Names : ";
    
    for(int i = 0 ; i < 5 ;++i)
    {
        getline(cin,name[i]);
    }

   for(const string& names : name) // dont use const keyword to receive input from user as it will not accept input at all
   {
    cout << names << " ";
   }

    return 0;
}