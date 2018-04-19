/* 
 * Definir las variables.
 * Obtener el valor del iva
 * Solicitar el total de personas
 * Ingresar el monto a pagar
 * realizar formula para obtener el valor de la cuenta con iva.
 * realizar formula para obtener el valor de la propina
 * realizar formula para obtener el total de la cuenta
 * realizar formula para obtener el total a pagar por persona
 * Comprobar los resultados
 * FIN
 */

#include <stdio.h>

	int main()
{
	int total_de_personas, amigos, cuenta;
	int pedro=1;
	float Propina, cuenta_con_iva,cuenta_final, total_de_la_cuenta;
	float iva=0.19;
	float propina=0.1;
	
		printf ("Cuantos amigos comieron:");
		scanf ("%d", &amigos);
		
		printf ("Ingrese el total a pagar:");
		scanf ("%d", &cuenta); 
		
		total_de_personas = (amigos + pedro);
		cuenta_con_iva = (cuenta + (cuenta * iva));
		Propina = (cuenta_con_iva * propina);
		cuenta_final = (cuenta_con_iva + Propina);
		total_de_la_cuenta = (cuenta_final / total_de_personas);
		
		printf ("El monto que debera pagar cada persona es de: %3f", total_de_la_cuenta);
		printf ("pesos");
	
	return 0;
}

