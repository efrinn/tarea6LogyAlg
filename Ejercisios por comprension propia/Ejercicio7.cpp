#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> num;

    int vect1[num];
    int vect2[num];
    int vect3[num];

    cout << "Ingrese los valores de los vectores: " << endl;
    for(int i=0; i<num; i++){
        cin >> vect1[i];
    }

    for(int i=0; i<num; i++){
        cin >> vect2[i];
    }

    for(int i=0; i<num; i++){
        vect3[i] = vect1[i] + vect2[i];
    }

    cout << "El resultado de la suma de vectores es: " << endl;
    for(int i=0; i<num; i++){
        cout << vect3[i] << " ";
    }
    cout << endl;

    return 0;
}