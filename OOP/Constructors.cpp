#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;

    // Constructor
    Student() {
        name = "Sudip";
    }

    void display() {
        cout << "Student name: " << name << endl;
    }
};

int main() {
    Student student;
    student.display();

    return 0;
}
