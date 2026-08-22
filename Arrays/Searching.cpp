#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    cout << "Enter the number to search: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Number " << target << " is found in the array." << endl;
    } else {
        cout << "Number " << target << " is not found in the array." << endl;
    }

    return 0;
}