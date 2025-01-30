// Run Time Polymorphism:
/*
Use of Virtual ensures that the Class to which is assigned to is, it members cannot be called instead the Classes that inherites the Virtualised Class are available to be called .


Why to use override ?

clarity and Intent: It makes it clear that a function is meant to override a base class function. This improves code readability and helps other developers understand your intentions.

Error Checking: If you mistakenly change the function signature or misname the function in the derived class, the compiler will generate an error if override is specified. This helps catch bugs that might otherwise be difficult to diagnose.
*/

#include <iostream>

using namespace std;

class A
{
public:
	 virtual void info()
	{
		cout << "This is Class A\n";
	}
};
class B : public A
{
public:
	void info() override
	{
		A::info(); // Used to include Method of base class if it is set to Virtual
		cout << "This is Class B\n";
	}
};
int main()
{
	A *ptr;
	B obj;

	ptr = &obj;

	ptr->info();
	return 0;
}