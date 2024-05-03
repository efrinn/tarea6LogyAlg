#include <iostream>

using namespace std;

int main()
{
    int tam;
    int producto = 0;
    int vect1[tam];
    int vect2[tam];
    cout << "Has ingresado al programa de suma de vectores" << endl;
    cout << "Registre el tamaño para el arreglo:  ";
    cin >> tam;

    for (int i = 0; i < tam; i++)
    {
        cout << "En la posicion [" << i << "] ingrese un numero: ";
        cin >> vect1[i];
    }
    cout << endl;
    cout << "Arreglo #2" << endl
         << endl;
    for (int i = 0; i < tam; i++)
    {
        cout << "En la posicion [" << i << "] ingrese un numero: ";
        cin >> vect2[i];
    }
    for (int i = 0; i < tam; i++)
    {
        producto += vect1[i] * vect2[i];
    }
    cout << "el producto de los dos vectores es: " << producto;

    return 0;
}