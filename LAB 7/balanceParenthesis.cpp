#include <iostream>
#include <string>
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
        cout<<"\npush\n";
        if (top == MAX_SIZE - 1) {
            cout << "Stack is full\n";
        } else {
            top++;
            stc[top] = val;
        }
        display();
    }
    void pop(){
         cout<<"\npop\n";
        if(top==-1){
            cout<<"Stack is empty!!!\n";
        }
        else{
            top--;
        }
        display();
    }

    bool isBalanced(string s){
        for(int i=0;i<s.length();i++){
            if(s[i]=='('||s[i]=='{'||s[i]=='['){
                char inp = s[i];
                push(inp);
            }
            else{
                char check= s[i];
                if(check==')'&&stc[top]=='('){
                    pop();
                }
                else if((check=='}'&&stc[top]=='{')){
                    pop();
                }
                else if(check==']'&&stc[top]=='['){
                    pop();
                }
                else{
                    cout<<"Not valid!!!\n";
                }
            }
            
        }
        if(top==-1){
            return true;
        }
        return false;
        
    }
    void display() {
        if (top == -1) {
            cout << "Stack is empty\n";
        } else {
            cout << "Stack elements: ";
            for (int i =0; i <= top; i++) {
                cout << stc[i];
            }
            cout << endl;
        }
    }
};

int main() {
    Stack myStack;
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    if(myStack.isBalanced(s)){
        cout<<"Parenthesis are balanced.\n";

    }
    else{
        cout<<"Parenthesis are not balanced.";
    }

    return 0;
}
