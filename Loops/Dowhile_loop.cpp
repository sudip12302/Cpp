#include <iostream>
using namespace std;

int main() {
    // Do-while loop to print numbers from 1 to nth number
    cout << "Enter the value of n: ";
    int n;
    cin >> n;
    int i = 1;
    do {
        cout << "Number: " << i << endl;
        i++;
    } while (i <= n);

    return 0;
}

