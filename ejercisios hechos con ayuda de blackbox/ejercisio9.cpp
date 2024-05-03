#include <iostream>

using namespace std;

int main() {
    int mat1[2][2], mat2[2][2], result[2][2];

    // Get matrix 1 elements
    cout << "Escribe los numeros de la matriz 1: ";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> mat1[i][j];
        }
    }

    // Get matrix 2 elements
    cout << "escribe los numeros de la Matriz 2: ";
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            cin >> mat2[i][j];
        }
    }

    // Check if dimensions are compatible for multiplication
    if (2 != 2 || 2 != 2) {
        cout << "Error! los numeros ingresados con las matrices no pueden ser multiplicados." << endl;
    } else {
        // Multiply matrices
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                result[i][j] = 0;
                for (int k = 0; k < 2; ++k) {
                    result[i][j] += mat1[i][k] * mat2[k][j];
                }
            }
        }

        // Display resulting matrix
        cout << "El resultado de la matriz: " << endl;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                cout << result[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}