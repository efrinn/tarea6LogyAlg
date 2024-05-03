Proceso ejercicio8
		Definir longitd, i, producto_punto Como Entero;
		Definir vectr1, vectr2 Como Entero;
		
		Escribir "Ingrese la longitud de los vectores: ";
		Leer longitd;
		
		Para i <- 1 Hasta longitd Con Paso 1 Hacer
			Escribir "Ingrese el elemento ", i, " del primer vector: ";
			Leer vectr1;
		Fin Para
		
		Para i <- 1 Hasta longitd Con Paso 1 Hacer
			Escribir "Ingrese el elemento ", i, " del segundo vector: ";
			Leer vectr2;
		Fin Para
		
		producto_punto <- 0;
		Para i <- 1 Hasta long Con Paso 1 Hacer
			producto_punto <- producto_punto + (vector1 * vector2);
		Fin Para
		
		Escribir "El producto punto de los dos vectores es: ", producto_punto;
FinAlgoritmo