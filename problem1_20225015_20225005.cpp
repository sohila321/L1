/*1- Develop a calculator program which runs continually and first will ask the user " Would you
like to close the calculator? " if the user type "yes" the program will end, else it will take the
operator then two numbers , and print the result depending on the type of the operator.*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
	string yesNo; // to ask user if he want to close the calaulator 

	cout << "Would you like to close the calculator? ";
	cin >> yesNo;
	
    
	while ( yesNo == "n" || yesNo == "N" || yesNo == "NO"||yesNo == "no"|| yesNo == "No")
	{
		char operate;

		cout << "Enter operator either + or - or * or /: ";
		cin >> operate;

		switch (operate)
		{
		case ('+'):
		{
			float num1, num2;
			cout << "Enter the first number: ";
			cin >> num1;
			cout << "Enter the second number: ";
			cin >> num2;

			cout << "Addition Result = " << num1 + num2 << endl;
			break;
		}

		case('-'):
		{
			float num1, num2;
			cout << "Enter the first number: ";
			cin >> num1;
			cout << "Enter the second number: ";
			cin >> num2;

			cout << "Subtraction Result = " << num1 - num2 << endl;
			break;
		}

		case('*'):
		{
			float num1, num2;
			cout << "Enter the first number: ";
			cin >> num1;
			cout << "Enter the second number: ";
			cin >> num2;

			cout << "Multiplication Result = " << num1 * num2 << endl;
			break;
		}

		case('/'):
		{
			float num1, num2;
			cout << "Enter the first number: ";
			cin >> num1;
			cout << "Enter the second number: ";
			cin >> num2;

			while (num2 == 0)
			{
				cout << "Invalid, we can't divide by ZERO." << endl;
				cout << "Please enter another value for the second number: ";
				cin >> num2;

			}

			cout << "Division Result = " << num1 / num2 << endl;
			break;
		}

		default:
		{
			cout << "Invalid, Please Enter one of the previous operators." << endl;
		    cout << "Would you like to close the calculator? ";
		    cin >> yesNo; 
			continue;
		}
		}

		cout << "Would you like to close the calculator? ";
		cin >> yesNo;
	}
	
	return 0;
}