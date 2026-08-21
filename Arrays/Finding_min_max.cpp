#include <iostream>
using namespace std;

int min(int a, int b) {
    return a < b ? a : b;
}
int max(int a, int b) {
    return a > b ? a : b;
}

int main() {
    int size;
    cout << "Enter the number of elements you want to:  ";
    cin >> size;

    int* arr = new int[size];
    cout << "Enter " << size << " numbers: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int minValue = arr[0];
    int maxValue = arr[0];

    for (int i = 1; i < size; i++) {
        minValue = min(minValue, arr[i]);
        maxValue = max(maxValue, arr[i]);
    }

    cout << "Minimum value: " << minValue << endl;
    cout << "Maximum value: " << maxValue << endl;

    return 0;
}
