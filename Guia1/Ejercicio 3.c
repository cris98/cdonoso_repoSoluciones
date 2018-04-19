/*
	 *Definir las variables.
	 * Ingresar el valor del cateto 1.
	 * Guardar el valor del cateto 1.
	 * Ingresar el valor del cateto 2.
	 * Guardar el valor del cateto 2.
	 * Realizar la formula para obtener la hipotenusa al cuadrado.
	 * Presentar el resultado obtenido.
	 * Retornar a 0.
	 */

#include <stdio.h>

int main()
{
	float catetoA, catetoB, Hipotenusa;
	
	printf ("Ingrese el valor del cateto A: ");
	scanf ("%f", &catetoA);
	
	printf ("Ingrese el valor del cateto B: ");
	scanf ("%f", &catetoB);
	
	Hipotenusa= (catetoA*catetoA) + (catetoB*catetoB);
	
	printf ("El valor de la hipotenusa al cuadrado es: %f\n", Hipotenusa);
	
	return 0;
}

	
