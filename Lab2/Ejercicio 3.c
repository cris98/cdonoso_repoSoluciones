/*
 * Definir las variables
 * Solicitar el peso del niño
 * Guardar el peso
 * Solicitar la edad del niño
 * Guardad la edad
 * Realizar formula para obtener la dosis que se administra en niños menores de un año
 * Realizar formula para obtener la dosis que se administra en niños mayores de 1 año
 * Comprobar la dosis a administrar
 * FIN
 */

#include <stdio.h>

	int main()
{
	float dosis, peso, gotas, edad;
	
		printf ("Ingrese el peso de juanito:");
		scanf ("%f", &peso);
		
		printf ("Ingrese la edad de juanito en meses:");
		scanf ("%f", &edad);
		
		if (edad<12){
		
		dosis= (0.2 * peso);
		dosis = dosis /3;
		gotas = dosis*25;
	}
		
		else if (edad>=12){
			
		dosis=0.2 * peso;
		gotas = dosis *25;
	}
	
	printf ("La dosis que se debe admistrar es: %f", gotas);
	
	return 0;
}
		
