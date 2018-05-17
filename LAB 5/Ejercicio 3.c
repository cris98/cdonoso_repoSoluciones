/*
 */


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int 
numero_mayor(int numero, int mayor){
	
	if (numero>mayor){
		
		mayor = numero;
		
	}
	return mayor;
}

int
numero_menor(int numero, int menor){
	
	if (numero>menor){
		
		menor = numero;
	}
	return menor;
}

void 
ingreso_numero(){
	
	int numero;
	int mayor;
	int menor;
	
	mayor=0;
	menor=0;
	
	printf ("Ingrese un número de 4 digitos: ");
	scanf ("%d", &numero);
	
	mayor = numero_mayor (numero, mayor);
	menor = numero_menor (numero, menor);
	
	printf ("El numero mayor es: %d\n", mayor);
	printf ("El numero menor es: %d\n", menor);
	
}

int
main(){
	
	ingreso_numero();
	
	return 0;
}

