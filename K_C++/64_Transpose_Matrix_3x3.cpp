#include <iostream>

#define n 3

using namespace std;

void printM(int M[n][n]) {

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cout << M[i][j] << " ";
		}
		cout << '\n';
	}
}
void transposeM(int M[n][n])
{
	for (int i = 0; i < n; ++i)
	{
		for (int j = i+1; j < n; ++j)
		{
			swap(M[i][j], M[j][i]);
		}
	}

	
}

int main() {

	int M[n][n] = {
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};


	cout << "Original Matrix : \n";
	printM(M);

	transposeM(M);
	cout << "Transposed Matrix : \n";
	printM(M);

	return 0;
}