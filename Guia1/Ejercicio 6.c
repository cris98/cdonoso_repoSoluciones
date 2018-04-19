 /*
	 * Definir las variables
	 * Ingresar el valor correspondiente a un galon
	 * Ingresar el valor correspondiente al precio por litro
	 * Solicitar la cantidad de galones que se quieren adquirir.
	 * Guardar la cantidad de galones que quieren adquirir.
	 * Realizar la formula para obtener la cantidad de litros recibidos.
	 * Realizar la formula para obtener el valor total de los galones adquiridos.
	 * Presentar el resultado obtenido.
	 * Retornar a 0.
	 */
 
 #include <stdio.h>
 
 int main()
 {
	 float galon = 3.785, precio_por_litro = 820;
	 float litros_galones_recibidos, valor_total, galones_recibidos;
	 
	 
	 printf ("Ingrese la cantidad de galones: ");
	 scanf ("%f", &galones_recibidos);
	 
	 litros_galones_recibidos = (galones_recibidos * galon);
	 
	 valor_total = (litros_galones_recibidos * precio_por_litro);
	 
	 printf ("El monto a pagar es un total de: %.3f", valor_total);
	 printf (" pesos.");
	 return 0;
 }

	
