#include<iostream>
using namespace std;
class Stack{
    private:
        int max = 5;
        int Array[5];
        int top;
    public:
        Stack(){
            top=-1;
        }
        bool isEmpty(int top){
            if(top==-1){
                return true;
            }
            return false;
        }
        bool isFull(int top){
            if(top==max-1){
                return true;
            }
            return false;
        }
        void push(int val){
            if(isFull(top)){
                cout<<"Stack is full!!!\n";

            }
            else{
                top++;
                Array[top]=val;
            }
        }
        void pop(){
            if(isEmpty(top)){
                cout<<"Stack is Empty!!!\n";
            }
            else{
                top--;
            }
        }
        void display(){
            cout<<"Your stack:  ";
            for(int i=top;i>-1;i--){            
                cout<<Array[i]<<" ";
            }
            cout<<"\n";
        }

};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.display();
    s.pop();
    s.display();
}