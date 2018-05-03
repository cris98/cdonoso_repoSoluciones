/*
 * Definir las variables
 * Formula para obtener el resto
 * Formula para obtener el número
 * Solicitar el numero
 * Obtener el resultado
 * FIN
 */


#include <stdio.h>

int ciclo (int numero){

	int resto_del_numero;
	
	while(numero!=0){                               

         resto_del_numero=numero%10;
         numero=numero/10;             
		printf("%d",resto_del_numero);
	}
		return resto_del_numero;
	}

int main(){

    int numero;
                                             
    printf ("Ingrese un número entero:");        
    scanf("%d",&numero);
    
    ciclo(numero);

return 0;
}
