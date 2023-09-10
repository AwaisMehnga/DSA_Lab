// This program do the binary search

#include <iostream>
using namespace std;
bool binarySearchFunction(int* arr, int size, int val) {
    int* left = arr;
    int* right = arr + size - 1;

    while (left <= right) {
        // cout<<"Addresses Before changing: "<<left<<"\t"<<right<<endl;
        int* middle = left + (right - left) / 2;

        if (*middle == val) {
            return true;
        } else if (*middle < val) {
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }

    return false;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int val = 5;

    if (binarySearchFunction(arr, size, val)) {
        cout << "Your Element " << val << " found in the array." << endl;
    } else {
        cout << "your Element " << val << " not found in the array." <<endl;
    }

    return 0;
}
