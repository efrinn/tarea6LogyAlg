#include <iostream>
using namespace std;

int main()
{
    int num = 0;

    for (int i = 1; i <= 100; i++)
    {
        int cuadrado = i * i;
        num += cuadrado;
    }

    cout << "El resulado de la suma de los numeros cuadrados entre 1 y 100 es: " << num << endl;

    return 0;
}