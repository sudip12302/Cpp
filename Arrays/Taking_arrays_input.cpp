#include<iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* numbers = new int[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    cout << "Array elements: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }

    cout << endl;

    delete[] numbers; // Free the allocated memory
    return 0;
}
