#include <iostream>
using namespace std;

void checkTriangleValidity(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        cout << "The triangle is valid." << endl;
    } else {
        cout << "The triangle is not valid." << endl;
    }
}

int main() {
    int a, b, c;
    cout << "Enter the lengths of the three sides of the triangle: ";
    cin >> a >> b >> c;

    checkTriangleValidity(a, b, c);

    return 0;
}