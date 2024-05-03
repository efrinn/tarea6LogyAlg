/*Ejercisio 1 pd: perdon si aveces quito la o o vocales enmedio de una silaba 
lo hago porq me gusta asi nose xd*/

#include <iostream>

using namespace std;

int main()
{
    int numbr;
    cout << "ingresa un numero entero: ";
    cin >> numbr;

    int suma = 0;
    for (int i = 1; i <= numbr; i++)
    {
        suma += i;
    }

    cout << " la suma desde 1 a el numero  " << numbr << " es : " << suma << endl;

    return 0;
}
