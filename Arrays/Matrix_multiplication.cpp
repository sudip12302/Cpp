#include <iostream>
using namespace std;

int main() {
    int rowsA, colsA, rowsB, colsB;

    cout << "Enter number of rows of matrix A: ";
    cin >> rowsA;

    cout << "Enter number of columns of matrix A: ";
    cin >> colsA;

    cout << "Enter number of rows of matrix B: ";
    cin >> rowsB;

    cout << "Enter number of columns of matrix B: ";
    cin >> colsB;

    
    if (colsA != rowsB) {
        cout << "Matrix multiplication is not possible." << endl;
        cout << "Number of columns of A must equal number of rows of B." << endl;
        return 0;
    }

    int A[10][10], B[10][10], result[10][10];

    cout << "Enter elements of matrix A:\n";
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            cin >> A[i][j];
        }
    }

    cout << "Enter elements of matrix B:\n";
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            cin >> B[i][j];
        }
    }

    // Matrix multiplication
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {

            result[i][j] = 0;

            for (int k = 0; k < colsA; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    cout << "Resultant matrix after multiplication:\n";

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}