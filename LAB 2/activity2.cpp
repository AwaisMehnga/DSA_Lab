#include<iostream>

using namespace std;
//creating the node
struct Node {
  int data;
  Node * next; //it is Node type pointer as it points the next node.
};
class Singly {
  private: Node * start;
  public: Singly() {
    start = NULL;
  }
  //insert at the end
  void insertAtEnd(int val) {
    Node * newNode = new Node;
    newNode -> data = val;
    newNode -> next = NULL;
    // check if the node linked list is empty or not
    if (start == NULL) {
      start = newNode;
    } else {
      Node * currentNode = start;
      while (currentNode -> next != NULL) {
        currentNode = currentNode -> next;
      }
      currentNode -> next = newNode;
    }
  }
  //delete at the end
  void deleteAtEnd() {
    Node * temp1 = start, * temp2;
    while (temp1 -> next != NULL) {
      temp2 = temp1;
      temp1 = temp1 -> next;
    }
    temp2 -> next = NULL;
    delete temp1;
  }
  // function to insert at start
  void insertAtStart(int val) {
    // creating the node
    Node * newNode = new Node;
    newNode -> data = val;
    newNode -> next = NULL;
    newNode -> next = start;
    start = newNode;
  }
  // function to delete at start
  void deleteAtStart() {
    Node * temp = new Node;
    temp = start;
    start = temp -> next;
    delete temp;
  }
  // insert at given index
  void insertAtDataNode(int val, int data) {
    Node * newNode = new Node;
    newNode -> data = val;
    newNode -> next = NULL;
    
    Node *current =start;
    if(current == NULL){
        cout<<"List is empty\n";
        return;
    }
    else if(current->data == data){
        start = newNode;
        newNode->next= current;
    }
    else{
        current = start;
        while(data !=current->next->data){
            if(current->next->next==NULL){
                cout<<"No data found\n";
                return;
            }
            current = current->next;
        }
        newNode->next=current->next;
        current->next=newNode;
    
    }
    
    

  }
  // delete at specific index
  void deleteDataIndex(int data) {
        Node *currentNode = start,*temp;
        if(currentNode==NULL){
            cout<<"Empty list";
            return;
        }
        else if(currentNode->data == data){
            start = currentNode->next;
            delete currentNode;
            currentNode =NULL;
        }
        else{

            while(currentNode->next->data != data){
                if(currentNode->next->next==NULL){
                    cout<<"No data found";
                    return;
                }
                currentNode = currentNode->next;
            }
            temp = currentNode->next;
            currentNode->next=currentNode->next->next;
            delete temp;
            temp = NULL;

            

        }
  }
  // Function to display the contents of the list
  void display() {
    Node * current = start;
    while (current != NULL) {
      cout << current -> data << " ";
      current = current -> next;
    }
    cout << endl;
  }
};

struct  NPNode{
  int data;
  NPNode * next; //it is NPNode type pointer as it points the next node.
  NPNode * prev;
};
class Doubly {
    
  private: NPNode * start;
  public: Doubly() {
    start = NULL;
  }
  //insert at the end
  void insertAtEnd(int val) {
    NPNode * newNode = new NPNode;
    newNode -> data = val;
    newNode -> next = NULL;
    newNode -> prev =NULL;
    // check if the node linked list is empty or not
    if (start == NULL) {
      start = newNode;
    
    } else {
      NPNode * currentNode = start;
      while (currentNode -> next != NULL) {
        currentNode = currentNode -> next;
      }
      currentNode -> next = newNode;
      newNode->prev = currentNode;
    }
  }
  //delete at the end
  void deleteAtEnd() {
    NPNode * currentNode = start;
    if(currentNode==NULL){
        cout<<"List is empty";
        return;
    }
    else if(currentNode->next==NULL){
        delete currentNode;
        currentNode=NULL;
    }
    else{
        while (currentNode->next->next !=NULL){
            currentNode = currentNode->next;
        }
        delete currentNode->next;
        currentNode->next =NULL;
    }
  }
  // function to insert at start
  void insertAtStart(int val) {
    // creating the node
    NPNode * newNode = new NPNode;
    newNode -> data = val;
    newNode -> next = NULL;
    newNode ->prev = NULL;
    newNode -> next = start;
    start->prev=newNode;
    start = newNode;

  }
  // function to delete at start
  void deleteAtStart() {
    NPNode * temp = new NPNode;
    temp = start;
    start = temp -> next;
    delete temp;
  }
  // insert at given index
  void insertAtDataNode(int val, int data) {
    NPNode * newNode = new NPNode;
    newNode -> data = val;
    newNode -> next = NULL;
    newNode ->prev = NULL;
    
    NPNode *current =start;
    if(current == NULL){
        cout<<"List is empty\n";
        return;
    }
    else if(current->data == data){
        start = newNode;
        newNode->next= current;
        current->prev = newNode;
    }
    else{
        current = start;
        while(data !=current->next->data){
            if(current->next->next==NULL){
                cout<<"No data found\n";
                return;
            }
            current = current->next;
        }
        newNode->next=current->next;
        current->next->prev =newNode;
        current->next=newNode;
        newNode->prev = current;
    
    }
    
    

  }
  // delete at specific index
  void deleteDataIndex(int data) {
        NPNode *currentNode = start,*temp;
        if(currentNode==NULL){
            cout<<"Empty list";
            return;
        }
        else if(currentNode->data == data){
            start = currentNode->next;
            currentNode->next->prev = NULL;
            delete currentNode;
            currentNode =NULL;
        }
        else{

            while(currentNode->next->data != data){
                
                if(currentNode->next->next==NULL){
                    cout<<"No data found";
                    return;
                }
                currentNode = currentNode->next;
            }
             
            temp = currentNode->next;
            // checking if the current node's next is the last element or  not
            if(currentNode->next->next!=NULL){
                delete temp;
                temp = NULL;
            }
            else{
                currentNode->next->prev = currentNode;
                currentNode->next=currentNode->next->next;
                delete temp;
                temp = NULL;
            }

            

        }
  }
  // Function to display the contents of the list
  void display() {
    NPNode * current = start;
    while (current != NULL) {
      cout << current -> data << " ";
      current = current -> next;
    }
    cout << endl;
  }
};

class Circular {
  private: Node * start;
  public: Circular() {
    start = NULL;
  }
  //insert at the end
 void insertAtEnd(int val) {
    Node * newNode = new Node;
    newNode -> data = val;
    newNode -> next = start;
    
    // check if the node linked list is empty or not
    if (start == NULL) {
        start = newNode;
        newNode->next=start; // For a circular list, the only node should point to itself.
    } else {
        Node * currentNode = start;
        while (currentNode -> next != start) {
            currentNode = currentNode -> next;
        }
        currentNode -> next = newNode;
    }
}

  //delete at the end
  void deleteAtEnd() {
    Node * temp1 = start, * temp2;
    while (temp1 -> next != start) {
      temp2 = temp1;
      temp1 = temp1 -> next;
    }
    temp2 -> next = start;
    delete temp1;
  }
  // function to insert at start
  void insertAtStart(int val) {
    // creating the node
    Node * newNode = new Node;
    newNode -> data = val;
    newNode -> next = start;
    start = newNode;
  }
  // function to delete at start
  void deleteAtStart() {
    Node * temp = new Node;
    temp = start;
    start = temp -> next;
    Node *currentNode = temp;
    while(currentNode->next != temp){
        currentNode=currentNode->next;
    }
    currentNode->next=start;
    delete temp;
  }
  // insert at given index
  void insertAtDataNode(int val, int data) {
    Node * newNode = new Node;
    newNode -> data = val;

    
    Node *current =start, *temp = start;
    if(current == NULL){
        cout<<"List is empty\n";
        return;
    }
    else if(current->data == data){
        start = newNode;
        newNode->next= current;
    }
    else{
        current = start;
        while(data !=current->next->data){
            if(current->next->next==start){
                cout<<"No data found\n";
                return;
            }
            current = current->next;
        }
        newNode->next=current->next;
        current->next=newNode;
    
    }
    current = temp;
    while(current->next != temp){
        current=current->next;
    }
    current->next=start;
    
    

  }
  // delete at specific index
  void deleteDataIndex(int data) {
        Node *currentNode = start,*temp,*p=start;
        if(currentNode==NULL){
            cout<<"Empty list";
            return;
        }
        else if(currentNode->data == data){
            start = currentNode->next;

            // change the last node start to new start value
            Node * currentNode = p;
            while (currentNode -> next != p) {
                currentNode = currentNode -> next;
            }
            currentNode->next=start;
            delete currentNode;
            currentNode =NULL;
        }
        else{

            while(currentNode->next->data != data){
                if(currentNode->next->next==start){
                    cout<<"No data found";
                    return;
                }
                currentNode = currentNode->next;
            }
            temp = currentNode->next;
            currentNode->next=currentNode->next->next;
            delete temp;
            temp = NULL;

            

        }
  }
  // Function to display the contents of the list
  void display() {
    Node * current = start;
    while (current->next != start) {
      cout << current -> data << " ";
      current = current -> next;
    }
    cout<<current->data<<endl;
    cout << endl;
  }
};


int main() {
    
    Doubly dlist;
    Circular clist;
    static int num;

    cout<<"Which linked list you want:\n1: Single\n2: Double\n3: Circular\n";
    cin>>num;
    switch (num)
    {
    case 1:
            Singly slist;
        break;
    case 2:
            Doubly slist;
        break;
    case 3:
            Circular slist;
        break;
    
    default:
        break;
    }
        
    
    
  
}