#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char* str) {
    if (str == nullptr) {
        return; // Handle null pointer here
    }
    cout<<&str<<endl;

    char* start = str;
    char* end = str + strlen(str) - 1;

    while (start < end) {
        // Swap the characters pointed to by start and end
        char temp = *start;
        *start = *end;
        *end = temp;

        cout<<"Addresses Before changing: "<<start<<"\t"<<end<<endl;

        // here moving the adress of the vars of string
        start++;
        end--;
        cout<<"Addresses After changing: "<<start<<"\t"<<end<<endl;

    }
}

int main() {
    const int maxLength = 100;
    char inputString[maxLength];

    cout << "Enter a string: ";
    cin.getline(inputString, maxLength);

    // Reverse the input string
    reverseString(inputString);

    cout << "Reversed string: " << inputString << endl;

    return 0;
}
