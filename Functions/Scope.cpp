#include <iostream>
using namespace std;


int globalVar = 100; // Global variable

void displayGlobalVar() {
    cout << "Inside function: globalVar = " << globalVar << endl;
}
int main() {
    displayGlobalVar();
    return 0;
}
