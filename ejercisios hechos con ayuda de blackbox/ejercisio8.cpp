#include <iostream>

using namespace std;

int dotProduct(int v1[], int v2[], int size) {
    int product = 0;
    for (int i = 0; i < size; i++)
        product += v1[i] * v2[i];
    return product;
}

int main() {
    int vector_a[3];
    int vector_b[3];
    int temp[3];

    cout << "Escribe los numeros del primer vector: ";
    for (int i = 0; i < 3; i++)
        cin >> vector_a[i];

    cout << "Registra los numeros del segundo vector: ";
    for (int i = 0; i < 3; i++)
        cin >> vector_b[i];

    cout << "producto: " << dotProduct(vector_a, vector_b, 3) << endl;

    return 0;
}