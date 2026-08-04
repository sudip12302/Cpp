#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num > 0) {
        if (num % 2 == 0) {
            cout << num << " is a positive even number." << endl;
        } else {
            cout << num << " is a positive odd number." << endl;
        }
    
} else if (num < 0) {
    if (num % 2 == 0) {
        cout << num << " is a negative even number." << endl;
    } else {
        cout << num << " is a negative odd number." << endl;
    }


} else {
    cout << "The number is zero." << endl;
}
return 0;
}