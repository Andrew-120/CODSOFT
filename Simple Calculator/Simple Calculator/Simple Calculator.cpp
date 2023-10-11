#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "Simple Calculator" << endl;
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter the second number: ";
    cin >> num2;

    switch (operation) {
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
        else {
            result = num1 / num2;
        }
        break;
    }

    cout << "Result is " << result << endl;

    return 0;
}
