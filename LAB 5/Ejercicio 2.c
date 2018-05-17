/*Identificar las variables
 * Realizar un while 
 * Poner una condicion si el valor de la suma es mayor que 9
 * Imprimir el resultado
 * Obtener el resultado
 * Fin
 */


#include <stdio.h>
#include <stdlib.h>

int
raiz_digital(int numero){
	
	int suma=0, resto=0, suma2=0;

	while (numero !=0){
		
		resto = numero%10;
		numero = numero-resto;
		numero = numero/10;
		
		suma = suma + resto;
	}

	
	if (suma>9){
		while (suma !=0){
			
			resto = suma%10;
			suma = suma-resto;
			suma = suma/10;
			
			suma2 = suma2 + resto;
		}
		
		printf ("raizvirtual: %d", suma2);
	}
	
	else{
		printf ("raizvirtual: %d", suma);
	}
	
	return suma;
}

int main(){
	
	int numero;
	
	
	printf ("Ingrese numero: ");
	scanf ("%d", &numero);
	
	raiz_digital(numero);
	return 0;
}
