#include <iostream>

using namespace std;

int main(){
    int x = 10;
    int &ref = x; // reference variable to x


    cout <<"Value of x before Modification: " << x << '\n';
    cout <<"Value of ref before Modification : " << ref << '\n';

    ref = 20;

    cout <<"Value of x after Modification : " << x << '\n';
    cout <<"Value of ref after Modification : " << ref << '\n';

    return 0;
}

// Summary : ref is a Reference Variable that has same memory location & is another name for x , any changes made to ref will affect x & vice-versa 

//  &ref  = x : refers to copying address & value of x 