/*
	 * Definir las variables
	 * Ingresar el porcentaje extra mensual.
	 * Solicitar el sueldo mensual del trabajador.
	 * Guardar el sueldo mensual.
	 * Realizar la formula para obtener el sueldo total recibido.
	 * Realizar la formula para obtener la comisión obtenida.
	 * Presentar los valores obtenidos.
	 * Retornar a 0.
	 */


#include <stdio.h>

int main()
{
	float porcentaje_extra = 0.28;
	int sueldo_base;
	float sueldo_total, Comision_recibida;
	
	
	printf ("Ingrese el sueldo base: ");
	scanf ("%d", &sueldo_base);
	
	sueldo_total =  (sueldo_base + (sueldo_base * porcentaje_extra));
	Comision_recibida = (porcentaje_extra*sueldo_base);
	
	
	printf ("El sueldo total que recibira es: $%.2f CLP\n", sueldo_total);
	printf ("y su comision equivale a: %f", Comision_recibida);

	return 0;
}

	
