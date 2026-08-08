#include <iostream>
using namespace std;

int main() {
    
    int grade;
    char letterGrade;
   
    cout << "Enter a grade (0-100): ";
    cin >> grade;
    // Determine the letter grade
    if (grade >= 70) {
        letterGrade = 'A';
    } else if (grade >= 60) {
        letterGrade = 'B';
    } else if (grade >= 50) {
        letterGrade = 'C';
    } else if (grade >= 40) {
        letterGrade = 'D';
    } else {
        letterGrade = 'F';
    }
    
    cout << "Your letter grade is: " << letterGrade << endl;
    return 0;
}
