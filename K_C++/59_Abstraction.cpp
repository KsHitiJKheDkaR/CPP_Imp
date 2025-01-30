// Abstraction : it is method of hidding Contents of Class that are not supposed to be Accessed by User
// we use
// Getters : it is method of Accessing Value of private Attributes
// Setters : it is method of Assigning Value to private Attributes

// Abstraction

#include <iostream>

using namespace std;

class Stove
{
private:
	double temp = 0;

public:
	double getTemp()
	{
		return temp;
	}

	double setTemp(double T)
	{
		if (temp < 0)
		{
			this->temp = 0;
			return temp;
		}
		else
		{
			this->temp = T;
			return temp;
		}
	}
};

int main()
{
	Stove stove;

	cout << "Original Temperature: " << stove.getTemp() << '\n';
	cout << "New Temperature : " << stove.setTemp(1000) << '\n';

	return 0;
}