// Linear Search

#include <iostream>

using namespace std;

int findPosition(int a[], int n,int ele) 
{
	for (int i = 0; i < n; ++i)
	{
		if (a[i] == ele)
		{
			return i;
			break;
		}
	}
	return -1;
}

int main() {
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int size = sizeof(a) / sizeof(a[0]);

	int ele;

	cout << "Enter Element to be Search : ";
	cin >> ele;

	int index = findPosition(a, size,ele);

	if (index == -1)
	{
		cout << "Element didnt Found in Array\n";
	}
	else
	{
		cout << "Element Found at Index " << index << '\n';
	}


	return 0;
}