#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name = "kshitijkhedkar88";

	while (name.empty())
	{
		cout << "You havent entered your name!\n";
	}
	while (name.length() > 25)
	{
		cout << "Name shouldnt exceed 25 Characters!\n";
	}

	name.append("@gmail.com");

	cout << name << '\n';

	cout << name.at(1) << '\n';

	cout << name.insert(1, "$") << '\n';

	cout << "Index 1 before i : " <<  name.find('i') << '\n'; // returns index 1 before than 'i'

	cout << name.erase(0, 3) << '\n'; // erases from index 0 to 2 only & not 3

	

	cout << name << '\n';

	name.clear(); // erases all contents of string name

	cout << "Hello " << name << '\n';

	return 0;
}