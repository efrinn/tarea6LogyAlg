Algoritmo ejer10
    Definir matriz como entero;
    Definir fila, columna, i, j como entero;
	
    Escribir "Ingrese la cantidad de filas de la matriz:";
    Leer fila;
    Escribir "Ingrese el numero de columnas de la matriz:";
    Leer columna;
	
    Para i <- 1 Hasta filas Hacer
        Para j <- 1 Hasta columnas Hacer
            Escribir "Ingresar el elemento (", i, ",", j, "):";
            Leer matriz;
        FinPara
    FinPara
	
    Escribir "Matriz original:";
    Para i <- 1 Hasta fila Hacer
        Para j <- 1 Hasta columna Hacer
            Escribir matriz;
            Si j < columna Entonces
                Escribir " ";
            FinSi
        FinPara
        Escribir "";
    FinPara
	
    Escribir "Matriz transpuesta:";
    Para i <- 1 Hasta columna Hacer
        Para j <- 1 Hasta fila Hacer
            Escribir matriz;
            Si j < filas Entonces
                Escribir " ";
            FinSi
        FinPara
        Escribir "";
    FinPara
FinAlgoritmo
