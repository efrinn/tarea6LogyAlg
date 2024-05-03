#include <iostream>

using namespace std;

int main()
{
    int nEstudiantes = 10;
    float nota, sumNotas = 0, promed;

    for (int i = 1; i <= nEstudiantes; i++)
    {
        cout << "Ingrese la nota del estudiante " << i << ": ";
        cin >> nota;
        sumNotas += nota;
    }

    promed = sumNotas / nEstudiantes;
    cout << "El promedio general de la sección es: " << promed << endl;

    return 0;
}