#include <iostream>
using namespace std;

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b) {
    if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
    return a / b;
}

int main() {
    double num1, num2, result;
    int choice;
    char again;

    do {
        // Menu
        cout << "\n=== Simple Calculator ===" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            switch (choice) {
            case 1:
                result = add(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 2:
                result = subtract(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 3:
                result = multiply(num1, num2);
                cout << "Result: " << result << endl;
                break;
            case 4:
                result = divide(num1, num2);
                if (num2 != 0)
                    cout << "Result: " << result << endl;
                break;
            }
        }
        else {
            cout << "Invalid choice. Please select between 1 and 4." << endl;
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "Calculator exited. Goodbye!!" << endl;
    return 0;
}
