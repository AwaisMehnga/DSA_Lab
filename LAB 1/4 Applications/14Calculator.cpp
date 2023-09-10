// calculator application using pointers
#include <iostream>
using namespace std;

int main() {
    int *num1 = new int;
    int *num2 = new int;
    char *operation = new char;
    int *result = new int;

    cout << "Enter two numbers: ";
    cin >> *num1 >> *num2;

    cout << "Enter an operation (+, -, *, /): ";
    cin >> *operation;

    try {
        if (*operation == '+') {
            *result = *num1 + *num2;
        } else if (*operation == '-') {
            *result = *num1 - *num2;
        } else if (*operation == '*') {
            *result = *num1 * *num2;
        } else if (*operation == '/') {
            if (*num2 == 0) {
                throw "Division by zero is not allowed.";
            }
            *result = *num1 / *num2;
        } else {
            throw "Invalid operation.";
        }

        cout << "Your Result: " << *result << endl;
        // if this catches an error
    } catch (const char* error) {
        cerr << "Error: " << error << endl; //cerr is 
    }

    // deleting variable
    delete num1;
    delete num2;
    delete operation;
    delete result;

    return 0;
}
