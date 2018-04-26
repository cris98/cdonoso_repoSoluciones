/*
 * Definir las variables
 * Ingresar el valor de la primera cuota
 * Iniciar un ciclo que vaya multiplicando el valor de la cuota anterior por 2 para obtener las cuotas siguientes
 * Imprimir el resultado
 * FIN
 */
 
#include <stdio.h>

	int cuotas (){
		
		int i=0;
		float cuota = 10;
		float cuotas_siguientes = 10;
		
		printf ("La primera cuota a pagar es: $%.0f", cuota);
		
	for (i=2; i<=20; i++){
		
		cuotas_siguientes = (cuotas_siguientes * 2);
		
		printf ("\n La siguiente cuota tendra un costo de: $%.0f", cuotas_siguientes);
	}
	
	return cuotas_siguientes;
}
	int main ()
{
	cuotas ();
	
	return 0;
}
