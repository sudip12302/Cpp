#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number from 0 to 2: ";
    cin >> num;

    switch (num) {
        case 0:
            cout << "The number is zero." << endl;
            break;
        case 1:
            cout << "The number is one." << endl;
            break;
        case 2:
            cout << "The number is two." << endl;
            break;
        default:
            cout << "The number is neither zero, one, nor two." << endl;
            break;
    }

    return 0;
}