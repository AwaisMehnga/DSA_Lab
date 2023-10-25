#include<iostream>
using namespace std;

struct Node {
  int data;
  Node* next;
};

class Singly {
  private:
    Node* start;
    
  public:
    Singly() {
      start = NULL;
    }

    void SLL(int val) {
      Node* newNode = new Node;
      newNode->data = val;
      newNode->next = NULL;

      if (start == NULL) {
        start = newNode;
      } else {
        Node* currentNode = start;
        while (currentNode->next != NULL) {
          currentNode = currentNode->next;
        }
        currentNode->next = newNode;
      }
    }

    void reverse() {
      Node* current = start;
      Node* prev = NULL;
      Node* next = NULL;

      while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
      }
      start = prev;
    }

    bool isPalindrome() {
      if (start == NULL || start->next == NULL) {
        return true; // Empty list or list with only one element is a palindrome
      }

      Node* slow = start;
      Node* fast = start;
      Node* prevSlow = start;
      Node* midNode = NULL;
      bool isPalindrome = true;

      while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        prevSlow = slow;
        slow = slow->next;
      }

      if (fast != NULL) { // Odd number of elements, move slow to the middle
        midNode = slow;
        slow = slow->next;
      }

      Node* secondHalf = slow;
      prevSlow->next = NULL; // Break the list into two halves
      reverse(); // Reverse the first half

      isPalindrome = compareLists(start, secondHalf);

      // Restore the original list by reversing the first half again
      reverse();

      // If there was a midNode, link it back to the middle of the first half
      if (midNode != NULL) {
        prevSlow->next = midNode;
        midNode->next = secondHalf;
      } else {
        prevSlow->next = secondHalf;
      }

      return isPalindrome;
    }

    bool compareLists(Node* head1, Node* head2) {
      Node* temp1 = head1;
      Node* temp2 = head2;
      while (temp1 != NULL && temp2 != NULL) {
        if (temp1->data != temp2->data) {
          return false;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
      }
      return (temp1 == NULL && temp2 == NULL);
    }

    void display() {
      Node* current = start;
      while (current != NULL) {
        cout << current->data << " ";
        current = current->next;
      }
      cout << endl;
    }
};

int main() {
  Singly s1;
  s1.SLL(1);
  s1.SLL(2);
  s1.SLL(2);
  s1.SLL(1);
  s1.display();
  if (s1.isPalindrome()) {
    cout << "The linked list is a palindrome." << endl;
  } else {
    cout << "The linked list is not a palindrome." << endl;
  }
  // s1.display();
}
