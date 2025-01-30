// Standard Bubble Sort Algorithm

// Note : Bubble Sort is not an Efficient Searching Algo as it is feasible to use for large array Elements bcz of its Time Complexity [ O(n^2) ] increases
// Bubble Sort

#include <iostream>

using namespace std;

void findPosition(int a[], int n)
{
	bool swapped;

	for (int i = 0; i < n - 1; ++i)
	{
		int temp;
		swapped = false;
		for (int j = 0; j < n - i - 1; ++j)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				swapped = true;
			}
		}
		if (!swapped)
		{
			break;
		}
	}

	cout << "Sorted Array : ";

	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
}

int main()
{
	int a[10] = {10, 7, 5, 2, 3, 8, 9, 4, 1, 6};
	int size = sizeof(a) / sizeof(a[0]);
	int ele;

	findPosition(a, size);

	return 0;
}