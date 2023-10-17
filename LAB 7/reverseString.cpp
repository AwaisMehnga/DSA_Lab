#include <iostream>
using namespace std;

class Stack {
private:
    static const int MAX_SIZE = 100;
    char stc[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int val) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack is full\n";
        } else {
            top++;
            stc[top] = val;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty\n";
        } else {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--) {
                cout << stc[i];
            }
            cout << endl;
        }
    }
};

int main() {
    Stack myStack;
    char s;
    cout<<"Enter a string: ";
    while(s!='\n'){
        cin.get(s);
        myStack.push(s);
    }
    myStack.display();  // Display the stack elements
    return 0;
}
