#include<iostream>
using namespace std;
//creating the node
struct Node {
  int data;
  Node * next; //it is Node type pointer as it points the next node.
};
class Stack {
  private: Node * top;
  public: 
  Stack() {
    top = NULL;
  }
  // function to insert at top
  void push(int val) {
    
    // creating the node
    Node * newNode = new Node;
    newNode -> data = val;
    newNode -> next = NULL;
    newNode -> next = top;
    top = newNode;
  }
  // function to delete at top
  void pop() {
    if(top==NULL){
        cout<<"Stack is empty";
    
    }
    else{
        Node * temp = new Node;
        temp = top;
        top = temp -> next;
        delete temp;
    }
  }
  void display() {
     if(top==NULL){
        cout<<"Stack is empty";
    }
    else{
        Node * current = top;
        while (current != NULL) {
        cout << current -> data << " ";
        current = current -> next;
        }
        cout << endl;
        }
  }
};

int main(){
    Stack s;
    s.push(1);
    s.pop();
    s.pop();
    s.display();
    return 0;
}