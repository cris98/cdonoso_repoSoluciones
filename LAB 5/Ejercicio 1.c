/*Identificar las variables
 * Generar numeros al azar para A y B
 * Indicar condicion para ganar y perder
 * Generar ciclo para seguir apostando o terminar
 * Obtener los resultados
 * FIN
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int numero_azar_A(){
	int na;
	na = (rand () %50)+1;
	return na;
}

int numero_azar_B(){
	int nb;
	nb = (rand () %50)+1;
	return nb;
}

void 
apuesta (){
	
	int a, b;
	int ganador=0, perdedor=0;
	char tecla = 'S';
	char letra;
	
	
	while (tecla=='S'){
		printf ("Apuestas por A o por B: ");
		scanf (" %c", &letra);
		
		a=numero_azar_A();
		b=numero_azar_B();
		
		printf ("El valor de A es: %d\n", a);
		printf ("El valor de B es: %d\n", b);

		if (letra== 'A' && 	a>b){
			printf ("HAS GANADO!!!\n");
			ganador++;
		}
		
		if (letra== 'B' && 	b>a){
			printf ("HAS GANADO!!!\n");
			ganador++;
		}
		
		if(letra == 'B' && b<a){
			printf ("HAS PERDIDO!!!\n");
			perdedor++;
		}
		
		if(letra == 'A' && a<b){
			printf ("HAS PERDIDO!!!\n");
			perdedor++;
		}
		
		printf ("Total de apuestas ganadas: %d\n",ganador);
		printf ("Total de apuestas perdidas: %d\n", perdedor);
		
		printf ("Quieres apostar otra vez (S/N)\n");
		scanf (" %c", &tecla);
		if (tecla == 'N'){
			break;
		}
	}
}

int main(){
	srand(time(NULL));
	apuesta();
	
	return 0;
}

