#include <iostream>

using namespace std;

int main() {
    int sum = 0;
    for(int i = 1; i <= 100; i++) {
        sum += i * i;
    }
    cout << "la suma de los cuadrados de los  números entre 1 y 100 es : " << sum << endl;
    return 0;
}