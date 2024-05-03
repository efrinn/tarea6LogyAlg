Proceso ejercicio7
		Definir numbr, e Como entero;
		Dimension vector1[10];
		Dimension vector2[10];
		Dimension vector3[10];
		Escribir "Ingrese la longitud de los vectores: ";
		Leer numbr;
		
		Escribir "Ingrese los valores de los vectores: ";
		Para i <- 0 Hasta numbr-1 Con Paso 1 Hacer
			Leer vector1[e];
		FinPara
		
		Para i <- 0 Hasta numbr-1 Con Paso 1 Hacer
			Leer vector2[e];
		FinPara
		
		Para i <- 0 Hasta numbr-1 Con Paso 1 Hacer
			vector3[e] <- vector1[e] + vector2[e];
		FinPara
		
		Escribir "El resultado de la suma de vectores es: ";
		Para i <- 0 Hasta numbr-1 Con Paso 1 Hacer
			Escribir vector3[e], " ";
		FinPara
		Escribir "";
FinProceso