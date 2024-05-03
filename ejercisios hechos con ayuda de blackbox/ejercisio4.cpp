#include <iostream>

using namespace std;

int main() {
    int calificaciones[10];
    int suma = 0;
    for(int i = 0; i < 10; i++) {
        cout << "Ingrese la calificacion del estudiante " << i + 1 << ": ";
        cin >> calificaciones[i];
        suma += calificaciones[i];
    }
    double promedio = static_cast<double>(suma) / 10;
   cout << "El promedio de los estudiantes es: " << promedio << endl;
    return 0;
}