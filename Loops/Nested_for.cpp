#include <iostream>
using namespace std;

int main() {
    // Nested for loop to print numbers from 1 to nth number
    cout << "Enter the value of n: ";
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            cout << "Number: " << i << " " << j << endl;
        }
    }
    return 0;
}
