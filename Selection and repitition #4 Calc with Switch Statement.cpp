// Selection and repitition #4 Calc with Switch Statement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter the second number: ";
    cin >> num2;

    result = 0;
    switch (op) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0) {
            cout << "Error: Division by zero is not allowed." << endl;
            return 1;
        }
        result = num1 / num2;
        break;
    default:
        cout << "Error: Unsupported operator. Please use +, -, *, or /." << endl;
        return 1;
    }

    cout << num1 << " " << op << " " << num2 << " = " << result << endl;
    return 0;
}