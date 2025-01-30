// Functions 

#include <iostream>

using namespace std;


// Function Prototype
void showBalance(int balance);
int withdrawMoney(int balance);
int depositMoney(int balance);


// Function Definition
void showBalance(int balance)
{
	cout << "Your Balance : " << balance << '\n';
}
int depositMoney()
{
	int deposit;
	cout << "Enter Amount to deposit : ";
	cin >> deposit;

	return deposit;
}
int withdrawMoney(int balance)
{
	int withdraw;
	cout << "Enter Amount to withdraw : ";
	cin >> withdraw;


	if (withdraw > 0)
	{
		if (withdraw > balance)
		{
			cout << "Insufficient Funds\n";
			return 0;
		}
		else
		{

			return withdraw;
		}
	}
}


int main() {
	int choice,balance = 0;

	cout << "******* BANKING PROGRAM ********\n";

	do
	{
		cout << "1.Show Balance\n";
		cout << "2.Deposit Money\n";
		cout << "3.Withdraw Money\n";
		cout << "4.Exit\n";
		cout << "Enter your Choice : ";
		cin >> choice;

		switch (choice)
		{
		case 1: showBalance(balance);
			break;
		case 2: balance += depositMoney();
			showBalance(balance);
			break;
		case 3: balance -= withdrawMoney(balance);
			showBalance(balance);
			break;
		case 4: cout << "Thanks for Visiting!\n";
			break;

		default: cout << "Enter # blw 1 to 4 only\n";

		}
	} while (choice != 4);
	return 0;
}