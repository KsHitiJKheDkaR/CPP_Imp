/*struct : are nothing but a group of related variables in which different data types identifiers ( int , double , char , bool etc.) can be stored & used as & when required*/

// Note : '.' is an Operator called "Class Member Access Operator"

#include <iostream>

using namespace std;

struct Student
{
    string name;
    double gpa;
    bool enrolled = true;
};

int main()
{
    Student student1;
    student1.name = "KSHITIJ";
    student1.gpa = 9.95;
    student1.enrolled = true;

    cout << student1.name << endl;
    cout << student1.gpa << endl;
    cout << student1.enrolled << endl; // as you know 1 corresponds with true & 0 with false
    cout << endl;

    Student student2;
    student2.name = "KK";
    student2.gpa = 9.9;
    student2.enrolled = true;

    // we can by default set a member of struct value before defining Student struct accessors monikers like we declared above bool enrolled = true;

    cout << student2.name << endl;
    cout << student2.gpa << endl;
    cout << student2.enrolled << endl;
    return 0;
}