// this programs shows the dynamic memory allocation using pointers
#include <iostream>
using namespace std;

class Person {
public:
    Person(string name, int age) : name_(name), age_(age) {}

    void DisplayInfo() {
        cout << "Name: " << name_ << ", Age: " << age_ << endl;
    }

private:
    string name_;
    int age_;
};

int main() {
    // Dynamically allocate memory for a Person object
    Person* personPtr = new Person("Alice", 25);
    personPtr->DisplayInfo();

    // Deallocate the memory to prevent memory leaks
    delete personPtr;

    return 0;
}
