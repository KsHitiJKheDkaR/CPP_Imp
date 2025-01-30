#include <iostream>

using namespace std;

void showInfo(int age)
{
	cout << "You are " << age << " years old\n";
}
void showInfo(string name)
{
	cout << "Your Name : " << name << '\n';
}

void showInfo(double salary)
{
	cout << "Your Salary : $" << salary << '\n';
}

class Math
{
public:
	int Add(int a, int b)
	{
		return a + b;
	}
	int Add(int a, int b, int c)
	{
		return a + b + c;
	}
};
int main()
{

	// Using Class
	Math add;
	cout << "Addition of a & b : " << add.Add(4, 5) << '\n';
	cout << "Addition of a,b & c : " << add.Add(4, 5, 6) << '\n';
	cout << '\n';

	// Using Functions
	showInfo(21);
	showInfo("KSHITIJ");
	showInfo(55.55);

	return 0;
}