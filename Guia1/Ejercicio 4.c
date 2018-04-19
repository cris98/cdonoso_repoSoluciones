/*
	 * Definir los variables.
	 * Solicitar el valor de la base del rectangulo.
	 * Guardar el valor de la base.
	 * Solicitar el valor de la altura del rectangulo.
	 * Guardar el valor de la altura.
	 * Realizar la formula para calcular la superficie.
	 * Realizar la formula para calcular el perimetro.
	 * Presentar los resultados obtenidos.
	 * Retornar a 0.
	 */

#include <stdio.h>

int main()
{
	float Base, Altura, Superficie, Perimetro;
	
	printf ("Ingrese el valor de la base: ");
	scanf ("%f", &Base);
	
	printf ("Ingrese el valor de la altura: ");
	scanf ("%f", &Altura);
	
	Superficie = (Base * Altura);
	Perimetro = 2 * (Base + Altura);
	
	printf ("El valor del perimetro es: %f\n", Perimetro);
	printf ("El valor de la superficie: %f\n", Superficie);
	
	return 0;
}

	
