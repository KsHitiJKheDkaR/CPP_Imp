#include <iostream>

using namespace std;

void passByValue(int x)
{
	x += 5;
	cout << "Inside Function : " << x << '\n';
}
void passByReference(int &y)
{
	y += 5;
	cout << "Inside Function : " << y << '\n';
}

int main()
{
	int a = 10;
	cout << "PASS BY VALUE\n";
	cout << "Before Function Call : " << a << '\n';
	cout << "After Function Call : " << a << '\n';

	cout << '\n';
	int b = 15;

	cout << "PASS BY REFERENCE\n";
	cout << "Before Function Call : " << b << '\n';
	passByReference(b);
	cout << "After Function Call : " << b << '\n';

	return 0;
}
