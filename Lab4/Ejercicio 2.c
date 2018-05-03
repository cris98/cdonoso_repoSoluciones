/*
 * Definir las variables
 * Realizar el calculo de huevos por persona
 * Realizar formula para obtener el dinero de juan
 * Realizar formula para obtener el dinero de manuel
 * Realizar formula para obtener el dinero de antonio
 * Obtener el resultado
 * FIN
 */


#include <stdio.h>

float division_dinero (float amigosantonio, float total_huevos){
	
	float huevos_por_persona, pesos;
	
	huevos_por_persona = (total_huevos/3);
	amigosantonio = (amigosantonio - huevos_por_persona);
	pesos = (amigosantonio * 10);
	
	return pesos;
}

int main()
{
	int juan=5, manuel=3, antonio=8, total_huevos=8;
	float dinerojuan, dineromanuel, dineroantonio;
	
	dinerojuan = division_dinero(juan, total_huevos);
	dineromanuel = division_dinero(manuel, total_huevos);
	dineroantonio = division_dinero(antonio, total_huevos);
	
	printf ("Juan debe recibir %.2f pesos", dinerojuan);
	printf ("\n Manuel debe recibir: %.2f pesos", dineromanuel);
	printf ("\n Antonio debe quedarse con: %.2f pesos", dineroantonio);

	return 0;
}

