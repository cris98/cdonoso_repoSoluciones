/*
	 * Definir las variables.
	 * Solicitar la calificación n° 1 del estudiante.
	 * Guardar la calificación 1
	 * Solicitar la calificación n° 2 del estudiante.
	 * Guardar la calificación 2
	 * Solicitar la calificación n° 3 del estudiante.
	 * Guardar la calificación 3
	 * Realizar la formula para obtener el promedio
	 * Realizar el calculo del promedio con las calificaciones ingresadas a traves de la formula realizada.
	 * Presentar el resultado obtenido.
	 * Retornar a 0.
	*/

#include <stdio.h>

	int main ()
{
		
		int matricula= 2018430032;
		float calificacion1, calificacion2, calificacion3, promedio;
		
		printf ("calculo del promedio de las 3 calificaciones\n");
		printf ("El numero de matricula del alumno es: %d\n", matricula);
		
		printf ("Ingrese su calificacion 1: ");
		scanf ("%f", &calificacion1);
		
		printf ("Ingrese su calificacion 2: ");
		scanf ("%f", &calificacion2);
		
		printf ("Ingrese su calificacion 3: ");
		scanf ("%f", &calificacion3);
		
		promedio= ((calificacion1+calificacion2+calificacion3) / 3);
		
		printf ("El promedio de las calificaciones del alumno es: %f\n", promedio);
		
	return 0;
}


	
