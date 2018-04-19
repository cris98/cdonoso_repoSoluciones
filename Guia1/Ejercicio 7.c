/*
	 * Definir las variables.
	 * Solicitar el valor de cuantar horas equivalen a un día.
	 * Solicitar el numero de días que se quieren pasar a segundos.
	 * *Guardar el dato.
	 * Realizar la formula para transformar los dias a segundos.
	 * Presentar los resultados obtenidos.
	 * Retornar a 0.
	 */


 #include <stdio.h>
 
 int main()
 {
	 int numero_de_dias, hora = 24, minuto, segundo;
	 
	 printf ("Ingrese el numero de días: ");
	 scanf ("%d", &numero_de_dias);
	 
	 minuto = ((numero_de_dias * hora) * 60);	 
	 segundo = (minuto * 60);
	 
	 printf ("El número de días dio como resultado: %d segundos.", segundo);
	 
	 return 0;
}

	
