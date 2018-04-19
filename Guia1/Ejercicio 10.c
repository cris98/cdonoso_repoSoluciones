/*
	 * Definir las variables.
	 * Ingresar la cantidad de kilomeros que recorrera.
	 * Guardar el dato.
	 * Ingresar el valor por cada kilometro recorrido.
	 * Realizar la formula para obtener el costo del boleto.
	 * Presentar el resultado obtenido.
	 * Retornar a 0.
	 */

#include <stdio.h>

int main()
{
	int valor_boleto,valor_por_km;
	float kmxrecorrer;
	
	printf ("Ingrese la cantidad de Km que recorrerá: ");
	scanf ("%f", &kmxrecorrer);
	
	printf ("El precio por Km es: ");
	scanf ("%d", &valor_por_km);
	
	valor_boleto = (valor_por_km * kmxrecorrer);
	
	printf ("El precio final del Boleto es: %d\n", valor_boleto);
	
	return 0;
}
	
	
