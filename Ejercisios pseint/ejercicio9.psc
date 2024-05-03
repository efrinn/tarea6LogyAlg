Proceso ejer9
		Definir fila1, columna1, fila2, columna2, i, j, k Como Entero;
		Definir matriz1, matriz2, matriz_result Como Entero;
		
		Escribir "Ingrese el número de filas de la primera matriz: ";
		Leer fila1;
		Escribir "Ingrese el número de columnas de la primera matriz: ";
		Leer columna1;
		
				Escribir "Ingrese el número de filas de la segunda matriz: ";
		Leer fila2;
		Escribir "Ingrese el número de columnas de la segunda matriz: ";
		Leer columna2;
		
		Si columna1 <> fila2 Entonces
			Escribir "Las dimensiones de las matrices no son funcionales para la multiplicación.";
		Sino
			Para i <- 1 Hasta fila1 Con Paso 1 Hacer
				Para j <- 1 Hasta columna2 Con Paso 1 Hacer
					matriz_resultante <- 0;
				Fin Para
			Fin Para
			
			Para i <- 1 Hasta fila1 Con Paso 1 Hacer
				Para j <- 1 Hasta columna1 Con Paso 1 Hacer
					Escribir "Ingrese el elemento (", i, ",", j, ") de la primera matriz: ";
					Leer matriz1;
				Fin Para
			Fin Para
			
			Para i <- 1 Hasta fila2 Con Paso 1 Hacer
				Para j <- 1 Hasta columna2 Con Paso 1 Hacer
					Escribir "Ingrese el elemento (", i, ",", j, ") de la segunda matriz: ";
					Leer matriz2;
				Fin Para
			Fin Para
	
			Para i <- 1 Hasta fila1 Con Paso 1 Hacer
				Para j <- 1 Hasta columna2 Con Paso 1 Hacer
					Para k <- 1 Hasta columna1 Con Paso 1 Hacer
						matriz_resultante <- matriz_resultante + matriz1 * matriz2;
					Fin Para
				Fin Para
			Fin Para
			
			Escribir "La matriz producto de la multiplicación es:";
			Para i <- 1 Hasta fila1 Con Paso 1 Hacer
				Para j <- 1 Hasta columna2 Con Paso 1 Hacer
					Escribir matriz_resultante;
				Fin Para
				Escribir "";
			Fin Para
		Fin Si
FinAlgoritmo