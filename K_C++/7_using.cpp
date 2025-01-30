#include <iostream>

using namespace std;

// _t is used to indicate that its a typedef alias
using str_t = string;
using dbl_t = double;

int main() {
	dbl_t r = 4.57;

	str_t name = "KSHITIJ";

	cout << "Name : " << name << "\nCharacter : " << r << '\n';

	return 0;
}