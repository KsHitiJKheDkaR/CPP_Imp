#include <iostream>
using namespace std;

// Note that all the programs of all Languages Start Execution of program from Top & End At Bottom hence ensure that all the Desired Code is Written in this Manner only.

// << (Insertion Operator)
//
int main()
{

    printf("Hello World\n");                        // C
    cout << "Its really Interesting" << std::endl;  // C++
    cout << "I Love Java" << '\n';                  // C++
    cerr << "Error Occured\n";                      // used to o/p error alert & this statement is not stord inside buffer & is immediately displayed if there's any error
    clog << "Log : Program started Successfully\n"; // used to confirm Commence of program Execution Success & it stored in buffer until buffer is full or is flushed

    /*Note : you can also write 'using namespace std;' outside main functn to avoid writting std:: again & again  */

    return 0;
}

// Always use '\n' over endl to output Faster as endl flushes all the buffer while '\n' doesnt