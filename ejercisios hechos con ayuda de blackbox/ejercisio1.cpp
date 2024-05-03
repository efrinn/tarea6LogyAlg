#include<iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Ingresa un numero natural: ";
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "La suma de los naturales desde 1 hasta " << n << " es" << sum;
    return 0;
}