Proceso ejer5
		Dimension cal[8];
		Definir suma, aprobad, reprobad, i, cal Como Entero;
		Definir prom Como Real;
		
		sum <- 0;
		aprob <- 0;
		reprob <- 0;
		
		Para i <- 0 Hasta 7 Con Paso 1 Hacer
			Escribir "Ingresar la calificacion del estudiante ", i+1, ": ";
			Leer cal[i];
			suma <- suma + cal[i];
			
			Si cal[i] >= 70 Entonces
				aprobad <- aprobad + 1;
			Sino
				reprobad <- reprobad + 1;
			FinSi
		FinPara
		
		prom <- sum / 8;
		
		Escribir "El promedio general del grupo es: ", prom;
		Escribir "La cantidad de estudiantes aprobados es: ", aprobad;
		Escribir "La cantidad de estudiantes reprobados es: ", reprobad;
FinProceso