#include <iostream>
#include <vector>


using namespace std;

int main() {
	int n;

	cout << "Enter size of Vector : ";
	cin >> n;

	vector<int> v(n);

	cout << "Enter all " << n << " elements : ";

	for (int i = 0; i < n; ++i)
	{
		cin >> v[i]; // 1 2 3 4 5 6 7 8 9 10
	}

	int temp;
	for (int i = 0; i < n / 2; ++i)
	{
		temp = v[n - i - 1];
		v[n - i - 1] = v[i];
		v[i] = temp;
	}

	cout << "Reverse Elements : ";
	for (const int& ele : v)
	{
		cout << ele << " ";
	}

	return 0;
}