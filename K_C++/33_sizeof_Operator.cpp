// sizeof

#include <iostream>

using namespace std;

int main() {
	string name = "Bro";
	int age = 19;
	char grade = 'A';
	bool alive = true;
	float gpa = 9.55;
	double rent = 5.55;

	cout << sizeof(name) << " bytes" << '\n';
	cout << sizeof(string) << " bytes" << '\n';

	cout << '\n';

	cout << sizeof(age) << " bytes" << '\n';
	cout << sizeof(int) << " bytes" << '\n';

	cout <<'\n';

	cout << sizeof(grade) << " bytes" << '\n';
	cout << sizeof(char) << " bytes" << '\n';

	cout << '\n';

	cout << sizeof(alive)<<" bytes" << '\n';
	cout << sizeof(bool) <<" bytes"<< '\n';

	cout << '\n';
	
	cout << sizeof(gpa) <<" bytes" << '\n';
	cout << sizeof(float) << " bytes" << '\n';

	cout << '\n';

	cout << sizeof(rent) << " bytes" << '\n';
	cout << sizeof(double) << " bytes" << '\n';

	return 0;
}