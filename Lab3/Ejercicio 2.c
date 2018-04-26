/*
 *Definir las variables
 *Solicitar la cantidad de grados celsius y guardar el valor
 *Realizar una definición de la funcion termometro
 *Solicitar la temperatura 
 *Imprimir el resultado
 *FIN
 */

#include <stdio.h>

int termometro (int grados_celsius){
		
	int i=1;
	grados_celsius = grados_celsius-1;
		
	for (i=0; i<grados_celsius; i++){
			printf ("-");
		}
		
		printf ("*");
		return grados_celsius;
	}
	
	void estado_del_termometro (int grados_celsius){
		printf ("\n Estado del termometro: %d °C", grados_celsius);
	}
	
	
	
int main ()
{
	
	int grados_celsius;
	printf ("Ingrese la temperatura en grados celcius: ");
	scanf ("%d", &grados_celsius);
	printf ("0        10        20        30        40        50 \n"); 
	printf ("|        |         |         |         |         | \n");
	
	termometro (grados_celsius);
	estado_del_termometro (grados_celsius);

	
	
	return 0;
}
	
	

