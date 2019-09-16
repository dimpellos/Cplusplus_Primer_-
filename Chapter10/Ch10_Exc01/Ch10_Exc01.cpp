#include <iostream>
#include <string>

using namespace std;

class Bankaccount
{
private:
	string name;
	string account;
	double balance;

public:
	Bankaccount()
	{
		name = "";
		account = "";
		balance = 0.0;
	}

	Bankaccount(string nam, string acc, double b)
	{
		name = nam;
		account = acc;
		balance = b;
	}

	void display() const
	{
		cout << "Name: " << name << endl;
		cout << "Account: " << account << endl;
		cout << "Balance: " << balance << endl;
	}

	void deposit(double b)
	{
		balance += b;
	}

	void withdraw(double b)
	{
		if (b <= balance)
			balance -= b;
		else
			std::cout << "There is not enough money in the account.\n";
	}
};


int main()
{
	Bankaccount A;
	A.display();
	Bankaccount B("Lonzo", "Baller", 51.2);
	B.display();
	B.deposit(8.6);
	B.display();
	B.withdraw(40.1);
	B.display();
	B.withdraw(25.0);
	B.withdraw(9.9);
	B.display();
	std::cout << "Chapter 10 Excercise 1.\n";
	return 0;
}

/*
Define a class to represent a bank account. Data members should include the
depositor’s name, the account number (use a string), and the balance. Member functions
should allow the following:
n Creating an object and initializing it.
n Displaying the depositor’s name, account number, and balance
n Depositing an amount of money given by an argument
n Withdrawing an amount of money given by an argument
Just show the class declaration, not the method implementations. (Programming
Exercise 1 provides you with an opportunity to write the implementation.)

*/
