#include <iostream>

#define n 4

using namespace std;

int sumDiagonal(int M[n][n])
{
	int sum = 0;
	

	for (int i = 0; i < n; ++i)
	{
		sum += M[i][i];
	}

	return sum;
}

int main() {

	int M[n][n] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};


	int SUM = sumDiagonal(M);

	cout << "Sum of Diagonal Elements : " << SUM;

	return 0;
}
