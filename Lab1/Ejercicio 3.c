/*
 * Definir las variables
 * Solicitar el valor del traje comprado
 * realizar la formula para obtener el descuento 1
 * realizar la formula para obtener el descuento 2
 * realizar formula para ver que descuento aplica segun el valor del traje
 * Obtener el valor
 * Fin

#include <stdio.h>

	int main()
{	
	int preciodeltraje;
	float descuento1, descuento2;
	float dcto1=0.15;
	float dcto2=0.08;
	
	printf ("Ingrese el valor del traje comprado: ");
	scanf ("%d", &preciodeltraje);
	
	descuento1 = (preciodeltraje - (preciodeltraje * dcto1));
	descuento2 = (preciodeltraje - (preciodeltraje * dcto2));
	
		if (preciodeltraje > 2500){
			
			printf ("El precio del traje sera de: %f", descuento1);
			
		}
		if (preciodeltraje <=2500){
			printf ("El precio del traje sera de: %f", descuento2);
			
		}
		
		return 0;
}
	
			
			
	
	

