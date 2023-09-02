#include <iostream>
using namespace std;

int calculate(int n1, int n2, char op)
{
	int result = 0;
	if (op == '+')
	{
		result = n1 + n2;
	} else if (op == '-')
	{
		result = n1 - n2;
	} else if (op == '*')
	{
		result = n1 * n2;
	} else if (op == '/')
	{
		result = n1 / n2;
	} 
	return result;
}

int main()
{
	int num1, num2, result;
	bool continue_;
	char op, choice;
	cout << "*************************\n";
	cout << "***** Calculator V1 *****\n";
	cout << "*************************\n";
	while (true) {
		cout << "Enter First Number : ";
		cin >> num1;

		do {
			cout << "Enter Operation : ";
			cin >> op;

			cout << "Enter Second Number : ";
			cin >> num2;

			result = calculate(num1, num2, op);
			cout << "Result = " << result;
			cout << "\nDo you want to Continue with calculation? (y/n) ";
			cin >> choice;
			if (choice == 'n') {
				continue_ = false;
			}
			else {
				continue_ = true;
				num1 = result;
			}
		} while (continue_);
	}
}