/*
 * Definir las variables
 * Solicitar el valor por hora de trabajo
 * Solicitar el total de horas trabajadas por dia
 * Realizar formula para calcular el sueldo total de la semana
 * Imprimir el resultado
 * FIN
 */

#include <stdio.h>

	int calculo_sueldo (int total_horas_trabajadas, int valor_por_hora){
	int sueldo = (total_horas_trabajadas * valor_por_hora);
	return sueldo;
}

	void imprimir_sueldo (int sueldo){
		printf ("El sueldo de la semana es de: %d", sueldo);
	}
	
int main()
{
	
	int horas_trabajadas_por_dia, valor_por_hora, sueldo;
	int total_horas_trabajadas=0;
	int i=0;
	
	printf ("Ingrese el valor por hora de trabajo: ");
	scanf ("%d", &valor_por_hora);
	
	for (i=1; i<=6; i++){
		
		printf ("Ingrese el total de horas trabajadas en el día %d :", i);
		scanf ("%d", &horas_trabajadas_por_dia);
		
		total_horas_trabajadas= (total_horas_trabajadas + horas_trabajadas_por_dia);
	}
	
	sueldo = calculo_sueldo (valor_por_hora, total_horas_trabajadas);
	imprimir_sueldo (sueldo);
		
		return 0;
	}
	
		
	
	
	
	
