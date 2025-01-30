#include <iostream>

using namespace std;

int main()
{
	int age =-1;

	/*cout << "Enter your Age : ";
	cin >> age;*/

	if (age >= 0 && age < 18)
	{
		cout << "You Cannot Drive!\n";
	}
	else if (age < 0 )
	{
		cout << "You havent born yet!\n";
	}
	else if(age >=18 || age <= 80)
	{
		cout << "You can Drive!\n";
	}

	bool alive = false;

	if (!alive) 
	{
		cout << "Youre Not Alive!\n";
	}
	// as alive is false hence ! alive will be true and if statement accpts only non zero value ie 1 hence if statement gets executed
	return 0;
}