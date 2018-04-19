/*
	 * Definir las variables.
	 * Ingresar el número al cual se desea realizar el calculo.
	 * Guardar el número.
	 * Realizar la formula para obtener el cuadrado del número.
	 * Realizar la formula para obtener el cubo del número.
	 * Representar los valores obtenidos.
	 * Retornar a 0.
	 */

#include <stdio.h>

	int main()
{
	int numero;
	float cuadrado, cubo;
	
	printf ("Ingrese el numero: ");
	scanf ("%d", &numero);
	
	cuadrado= (numero*numero);
	cubo= (numero*numero*numero);
	
	printf ("El numero elevado al cuadrado es:%f\n", cuadrado);
	printf ("El numero elevado al cubo es: %f\n", cubo);
	
	return 0;
}
		
	
		
