#include <iostream>

using namespace std;

int main() {
	int a = 100;

	char b = 'Z';

	cout <<"a : "<< (char)a << '\n'; // 'd'
	cout << "b : " << (int)b << '\n'; // 90

	int questions = 10, answers = 8;

	float result = answers / (float ) questions;

	cout << "Result : "<<result << '\n';
	// while doing int division 
	//we must to add float or double to add original precision of division
	 //num to result & also ensure that result is of DT float or double.

	int PI = (int) 3.14;

	cout <<"Pi : "<< PI << '\n'; // returns int part of the num & not the fractional part bcz PI variable can only store integer value 
	// output : 3

	// similarly if we divide Numrtr < Demrtr result well 
	// get depends on DT of result variable & whether either one of Nr or Dr are of DT float or double
	// eg.

	int r = 1;
	float s = 4;
	float d = r/s;
	int e = r/s;

	cout << "d : " << d << '\n';
	cout << "e : " << e << '\n'; // 0 bcz e is an int var

	return 0;
}