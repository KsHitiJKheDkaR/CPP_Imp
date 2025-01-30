#include <iostream>

using namespace std;

float getArea(float l, float b) 
{
	return 2 * (l + b);
}

int main() {
	float l, b;

	cout << "Enter length & breadth of Rectangle : ";
	cin >> l >> b;

	float area = getArea(l, b);

	cout << "Area : " << area <<"cm2";
	return 0;
}