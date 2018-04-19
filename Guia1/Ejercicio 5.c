/*
	 * Definir las variables.
	 * Ingresar el valor equivalente a una libra.
	 * Ingresar el valor equivalene a un pie.
	 * Solicitar el nombre del dinosaurio.
	 * Guardar el nombre.
	 * Solicitar el peso del dinosaurio.
	 * Guardar el peso.
	 * Solicitar la longitud del dinosaurio.
	 * Guardar la longitud.
	 * Realizar la formula para transformar el peso de libras a kilogramos.
	 * Realizar la formula para transformar la longitud de pies a metros.
	 * Representar los resultados obtenidos.
	 * Retornar a 0.
	 */

#include <stdio.h>

int main()
{
	char nombre[100];
	float libras, pies, kilogramos, metros;
	float libra = 0.45, pie = 0.3048;
	
	
	printf ("Ingrese el nombre de su dinosaurio: ");
	scanf ("%s", nombre);
	
	printf ("Ingrese el peso del dinosaurio en libras: ");
	scanf ("%f", &libras);
	
	printf ("Ingrese la longitud del dinosaurio en pies: ");
	scanf ("%f", &pies);
	
	kilogramos = ((libras * libra) / 1);
	metros = ((pies * pie) / 1);
	
	printf ("El peso de: %s ", nombre);
	printf ("es de %f Kilogramos", kilogramos);
	printf (" y la longitud es de %.3f Metros\n", metros);
	
	return 0;
}

	
