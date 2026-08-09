#include <iostream>
using namespace std;

int square(int a) {
    return a * a;
}

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    int result = square(a);
    cout << "The square of " << a << " is " << result << endl;
    return 0;
}
