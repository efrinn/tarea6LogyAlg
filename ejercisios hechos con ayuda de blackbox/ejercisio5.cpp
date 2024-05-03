#include <iostream>

using namespace std;

int main() {
    int calificaciones[8];
    int suma = 0;
    int aprobados = 0;
    int reprobados = 0;
    for(int i = 0; i < 8; i++) {
        cout << "Ingrese la calificacion del estudiante " << i + 1 << ": ";
        cin >> calificaciones[i];
        suma += calificaciones[i];
        if(calificaciones[i] >= 70) {
            aprobados++;
        } else {
            reprobados++;
        }
    }
    double promedio = static_cast<double>(suma) / 8;
    cout << "Cantidad de alumnos aprobados: " << aprobados << endl;
    cout << "Cantidad de alumnos reprobados: " << reprobados << endl;
    cout << "Promedio general del grupo: " << promedio << endl;
    return 0;
}