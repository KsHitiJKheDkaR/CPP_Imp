// toupper & tolower

#include <iostream>
#include <cctype> // include this header file to use toupper & tolower


using namespace std;

int main() {
	string name1 = "Bro";
	string name2 = "Hello World";

	for (char& c : name1)
	{
		c = toupper(c);
	}

	for (char& c : name2)
	{
		c = tolower(c);
	}

	cout << "Upper Case string1 : " << name1 << '\n';
	cout << "Lower Case string2 : " << name2 << '\n';

	return 0;
}