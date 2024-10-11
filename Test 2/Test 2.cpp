// Test 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int choice;
    double number1;
    double number2;

	cout << "Welcome to the calcualor. What would you like to do?" << endl;
	cout << "1. Addition" << endl;
	cout << "2. Subtraction" << endl;
	cout << "3. Multiplication" << endl;
	cout << "4. Division" << endl;
    cout << "5. Power" << endl;
    cout << "6. Exit Program" << endl;
	cin >> choice;
	
    

        switch (choice)
        {
        case 1:
            cout << "What is your first number? ";
            cin >> number1;
            cout << "What is your second number? ";
            cin >> number2;
            cout << number1 << " plus " << number2 << " is " << number1 + number2;
            break;
        case 2:
            cout << "What is your first number? ";
            cin >> number1;
            cout << "What is your second number? ";
            cin >> number2;
            cout << number1 << " minus " << number2 << " is " << number1 - number2;
            break;
        case 3:
            cout << "What is your first number? ";
            cin >> number1;
            cout << "What is your second number? ";
            cin >> number2;
            cout << number1 << " times " << number2 << " is " << number1 * number2;
            break;
        case 4:
            cout << "What is your first number? ";
            cin >> number1;
            cout << "What is your second number? ";
            cin >> number2;
            cout << number1 << " divided by " << number2 << " is " << number1 / number2;
            break;

        case 5:
            cout << "What is your first number? ";
            cin >> number1;
            cout << "What is your second number? ";
            cin >> number2;
            cout << number1 << " to the power of " << number2 << " is " << pow(number1, number2);
            break;
        case 6:break;
        default:
            cout << "Please make a valid choice.";
        }
    

}

