// Program to calculate the calculate the square root of a number.
#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate square root using the Newton-Raphson method with pointers
double calculateSquareRoot(double *number, double epsilon = 0.00001) {
    double approximation = (*number) / 2.0;
    double* ptrApproximation = &approximation;

    while (true) {
        double newApproximation = 0.5 * (*ptrApproximation + (*number) / (*ptrApproximation));
        // cout<<"approx: "<<newApproximation<<" differnce: "<<fabs(newApproximation - *ptrApproximation)<<endl;
        if (fabs(newApproximation - *ptrApproximation) < epsilon) {
            return newApproximation;
        }

        *ptrApproximation = newApproximation;
    }
}

int main() {
    double number;
    cout << "Enter a number: ";
    cin >> number;

    if (number < 0) {
        cout << "Square root is not defined for negative numbers." << endl;
    } else {
        double result = calculateSquareRoot(&number);
        cout << "Approximate square root of " << number << " is " << result << endl;
    }

    return 0;
}
