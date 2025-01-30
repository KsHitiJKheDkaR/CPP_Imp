/*Global Variables : it is a Variable declared in the Global Space & is Accessible to all the Functions within this Program
   Local Variable : it is local Variable of a Particular function & cannot be Accessed directly just like global Var
   */

// Variable Scope
// Note : its not safe to declare Global var as it can be easily change & can output wrong result

#include <iostream>

using namespace std;

int MyNum = 3;

int returnNum()
{
    int MyNum = 2;

    return MyNum;
}

int main()
{
    int MyNum = 1;

    cout << MyNum << '\n'; // Prints local var which is 1

    cout << ::MyNum << '\n'; // using scope Resolution Operator accesasing global var

    cout << returnNum(); // var within Function
    return 0;
}