#include <iostream>

using namespace std;

int main() {
    int mat[3][3];
    int transpose[3][3];

    cout << "Ingrese los elementos de la matriz (3x3): " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mat[i][j];
        }
    }

    // Calculando la transpuesta de la matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = mat[i][j];
        }
    }

    cout << "Matriz transpuesta:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}