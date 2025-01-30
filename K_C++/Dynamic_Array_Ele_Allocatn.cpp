// Write a C++ program that dynamically allocates memory for an array of integers, fills the array with values entered by the user, and prints the array.

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	
	cout << "Enter # Elements :\n";
	cin >> n;
	cin.ignore();
	vector<int> a(n);

	cout << "Enter all the Elements : ";
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	cout << "Your Entered Elements : ";
	for (int arr : a)
	{
		cout  << arr << " ";
	}
	return 0;
}