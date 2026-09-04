#include <iostream>
using namespace std;

int main() {    
    int numbers[2][3];
  
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    cout << "2D array:\n";
    for (int row = 0; row < 2; row++) {
        for (int column = 0; column < 3; column++) {
            cout << matrix[row][column] << " ";
        }
        cout << endl;
    }

    return 0;
}
