#include <iostream>
using namespace std;

int main() {
    //create a simple calculator that performs addition, subtraction, multiplication, and division based on user input
    char operation;
    double num1, num2, result;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    switch (operation) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result << endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result << endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result << endl;
            break;
        case '/':
            result = num1 / num2;
            cout << "Result: " << result << endl;
            break;
        default:
            cout << "Invalid operation." << endl;
            break;
    }
    return 0;
}
