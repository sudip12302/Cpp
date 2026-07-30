#include <iostream>
using namespace std;

int main() {
    // While loop to print numbers from 1 to nth number
    cout << "Enter the value of n: ";
    int n;
    cin >> n;
    int i = 1;
    while (i <= n) {
        cout << "Number: " << i << endl;
        ++i;
    }

    return 0;
}
