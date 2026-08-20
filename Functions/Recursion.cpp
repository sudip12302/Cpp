#include <iostream>
using namespace std;

bool isEven(int n) {
    if (n == 0) {
        return true;
    }
    return !isEven(n - 1);
}

int main() {
    int num = 0;
    cout << "Enter a number: ";
    cin >> num;
    cout << num << " is " << (isEven(num) ? "even" : "odd") << endl;
    return 0;
}
