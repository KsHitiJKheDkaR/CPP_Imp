/*function template : it is used to generate as many overloaded functions as possible, using different data types.*/
// eg.


// we created another typename U to accept argument of one data type incase if it does not matches with other argument

 // auto is a keyword which logically returns correct the return type depending on arguments passed

 // dont use 'max' as a Name for User Defined function as it is a function name of cmath header file called 'max' which is used for finding max of two arguments

#include <iostream>
#include <cmath>

using namespace std;

// Template definition
template <typename T, typename U>

auto MAX(T a, U b)
{
	if (a > b) 
	{
		return a;
	}
	else
	{
		return b;
	}
}

int main() {
	float x, y;

	cout << "Enter Two # : ";
	cin >> x >> y;

	cout << "Greater # : " << MAX(x, y);
	return 0;
}
// Note : benefits of using Function Templates is that we can accept different data types as Arguments & we dont need to make changes in function hence each function once declaraed can be used with all the data types

// we might have used below given function declarations but now we are using templates instead

// int max(int x, int y)
// {
//     return (x > y) ? x : y;
// }
// double max(double x, double y)
// {
//     return (x > y) ? x : y;
// }
// char max(char x, char y)
// {
//     return (x > y) ? x : y;
// }