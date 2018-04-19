/* 
 * Definir las variables
 * Ingresar el valor del puntaje obteniendo una victoria
 * Ingresar el valor puntaje obteniendo una derrota
 * Ingresar puntaje obteniendo un empate
 * Realizar un ciclo para obtener el resultado de solo 5 partidos
 * Solicitar los goles anotados por cada equipo
 * Comprobar los resultados
 * FIN
 */
 
#include <stdio.h>

	int main()
{
	int i=0, puntaje=0, goles_de_los_gloriosos, goles_del_adversario;
		
	while (i<5){
	
	printf ("Ingrese los goles anotados por el equipo Los gloriosos:");
		scanf ("%d", &goles_de_los_gloriosos);
		
		printf ("Ingrese los goles anotados por el equipo rival:");
		scanf ("%d", &goles_del_adversario);
		if (goles_de_los_gloriosos > goles_del_adversario){
			puntaje = puntaje+3;
		}
		
		else if (goles_de_los_gloriosos < goles_del_adversario){
			puntaje = puntaje+0;
		}
		
		else if (goles_de_los_gloriosos == goles_del_adversario){
			puntaje = puntaje+1;
		}
		
		i++;
		
		printf ("Los puntos obtenidos por los gloriosos son %d\n", puntaje);
		
	}
	return 0;
}
