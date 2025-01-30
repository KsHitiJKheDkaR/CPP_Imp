// Nested for loop

#include <iostream>

using namespace std;

int main() {
	int rows,columns;
	char symbol;

	cout << "Enter # rows & columns : ";
	cin >> rows >>columns;

	cout << "Enter Symbol : ";
	cin >> symbol;

	for (int i = 0; i < rows; ++i) // no of rows
	{
		for (int j = 0; j < columns; ++j) // no of columns
		{
			cout << symbol << " ";
		}
		cout << '\n';
	}


	
	return 0;
}