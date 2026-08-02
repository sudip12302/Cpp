#include <iostream>
using namespace std;
 int main() {
    int m = 0;
    while (true) {
        cout << "Enter a number (0 to exit): ";
        cin >> m;
        if (m == 0) {
            break; // Exit the loop if the user enters 0
        }
        cout << "You entered: " << m << endl;
    }
    cout << "Exiting the program." << endl;
    return 0;
}