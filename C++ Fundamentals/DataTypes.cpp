#include <iostream>
#include <string>
using namespace std;

int main() {
    int age = 20;
    float height = 5.9f;
    double salary = 55000.75;
    char grade = 'A';
    bool isStudent = true;
    string name = "Sudip";

    cout << "Data Type Demonstration\n\n";

    cout << "String : " << name << endl;
    cout << "Integer: " << age << endl;
    cout << "Float  : " << height << endl;
    cout << "Double : " << salary << endl;
    cout << "Char   : " << grade << endl;
    cout << "Bool   : " << isStudent << endl;

    cout << "\nMemory Size\n";
    cout << "int    : " << sizeof(int) << " bytes" << endl;
    cout << "float  : " << sizeof(float) << " bytes" << endl;
    cout << "double : " << sizeof(double) << " bytes" << endl;
    cout << "char   : " << sizeof(char) << " byte" << endl;
    cout << "bool   : " << sizeof(bool) << " byte" << endl;

    return 0;
}