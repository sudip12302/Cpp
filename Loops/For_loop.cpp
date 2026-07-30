#include <iostream>
using namespace std;

int main() {
    // For loop to print numbers from 1 to nth number
    cout << "Enter the value of n: ";
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cout << "Number: " << i << endl;
    }

    return 0;
}
