// this program calculate the grades
#include <iostream>

using namespace std;

void assignGrade(int* score, char* grade) {
    switch (*score) {
        case 90 ... 100:
            *grade = 'A';
            break;
        case 80 ... 89:
            *grade = 'B';
            break;
        case 70 ... 79:
            *grade = 'C';
            break;
        case 60 ... 69:
            *grade = 'D';
            break;
        default:
            *grade = 'F';
            break;
    }
}

int main() {
    int studentScore;
    char studentGrade;

    cout << "Enter the student's score: ";
    cin >> studentScore;

    assignGrade(&studentScore, &studentGrade);

    cout << "The student's grade is: " << studentGrade << endl;

    return 0;
}
