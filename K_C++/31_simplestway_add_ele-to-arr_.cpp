#include <iostream>
#include <string>

using namespace std;

int main() {
	string foods[5]; // Arrays Are Static DS , once they are assigned they cannot be changed & cannot be assigned as size of var n 
	int size = sizeof(foods) / sizeof(foods[0]);

	cout << "Enter Food you like or 'q' to quit : \n";

	for (int i = 0; i <size; ++i)
	{
		string temp;

		cout << "Enter Food #" << i + 1 <<" : "<< '\n';
		getline(cin, temp);

		if (temp == "q")
		{
			break;
		}
		else 
		{
			foods[i] = temp;
		}
	}

	cout << "Food You Like : \n";

	for (int i = 0; i < size && !foods[i].empty(); ++i)
	{
		cout << foods[i] << '\n';
	}

	return 0;
}