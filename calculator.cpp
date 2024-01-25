#include <iostream>

using namespace std;

// Function to perform addition
double sum(double a, double b)
{
    return a + b;
}

// Function to perform subtraction
double difference(double a, double b)
{
    return a - b;
}

// Function to perform multiplication
double product(double a, double b)
{
    return a * b;
}

// Function to perform division
double division(double a, double b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        cerr << "Invalid: division by zero is not allowed." << endl;
        return 0; // Returning 0 as an indication of error
    }
}

int main()
{
    char operation;
    double operand1, operand2;

    cout << "Simple Calculator Application by Rahul Sangam" << endl;
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two operands: ";
    cin >> operand1 >> operand2;

    switch (operation)
    {
    case '+':
        cout << operand1 << " + " << operand2 << " = " << sum(operand1, operand2) << endl;
        break;
    case '-':
        cout << operand1 << " - " << operand2 << " = " << difference(operand1, operand2) << endl;
        break;
    case '*':
        cout << operand1 << " * " << operand2 << " = " << product(operand1, operand2) << endl;
        break;
    case '/':
        cout << operand1 << " / " << operand2 << " = " << division(operand1, operand2) << endl;
        break;
    default:
        cerr << "Error: Invalid operation." << endl;
        break;
    }

    return 0;
}
