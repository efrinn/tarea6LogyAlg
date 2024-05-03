Proceso ejer4
		Definir Estudiantes, numbr, nota, suma, prom Como Real;;
		Estudiantes <- 10;
		suma <- 0;
		Para numbr <- 1 Hasta Estudiantes Con Paso 1 Hacer
			Escribir "Ingrese la calificacion del estudiante ", numbr, ": ";
			Leer nota;
			suma <- suma + nota;
		FinPara
		prom <- suma / Estudiantes;
		Escribir "El promedio de la seccion es: ", prom;
FinProceso