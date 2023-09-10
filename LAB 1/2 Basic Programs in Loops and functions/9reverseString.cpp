#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char* str) {
    if (str == nullptr) {
        return; // Handle null pointer here
    }

    char* start = str;
    char* end = str + strlen(str) - 1;

/****Note*****/
/*the pointer to character array don't give addresses as the string in c/c++ are null terminating strings
when the pointer moves to next memory location it by default cout the characters from that location to the 
null character location. that's why in this program the start and end are giving the characters not the addresses.
However in previous binary search program the left and right pointers were giving the addresses.
 */
    while (start < end) {

        // Swap the characters pointed to by start and end
        char temp = *start;
        *start = *end;
        *end = temp;
        // here moving the adress of the vars of string
        start++;
        end--;

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
