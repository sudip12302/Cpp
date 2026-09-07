#include <iostream>
using namespace std;

class topic {
public:
    string name;

    void display() {
        cout << "I am learning " << name << endl;
    }
};

int main() {
    topic student;
    student.name = "C++";

    student.display();

    return 0;
}
