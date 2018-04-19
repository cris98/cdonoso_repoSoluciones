	/*
	 * Definir las variables.
	 * Solicitar el valor de X.
	 * Guardar el valor de X.
	 * Realizar la formula para obtener el valor de x al cubo.
	 * Realizar la formula para obtener el valor de x al cuadrado.
	 * Realizar la formula para obtener el resto.
	 * Realizar la formula para obtener el valor del polinomio.
	 * Presentar el resultado obtenido.
	 * Retornar a 0
	 */

#include <stdio.h>

int main ()
{
	int x, Cubo, Cuadrado, Falta, Resultado_Final;
	
	printf ("Ingrese el valor de 'X': ");
	scanf ("%d", &x);
	
	Cubo = (x * x * x);
	Cuadrado = 2 * (x * x);
	Falta = ((3 * x) + 5);
	
	Resultado_Final = Cubo + Cuadrado + Falta;
	
	printf ("El resultado del valor asignado para 'X' es: %d", Resultado_Final);
	
	return 0;
}


