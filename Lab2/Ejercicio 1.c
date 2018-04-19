
#include <stdio.h>

	int main()
{
	int numero;
	
	printf ("Ingrese un numero que este entre el 1 y el 9 incluyendolos:");  
	scanf ("%d", &numero);
	
	for (int i=1; 1<=numero; i++){
		
		for (int j=1; j<=1; j++){
			
			printf ("%d", j);
		}
		
		for (int k=i; k>1; k--){
			
			printf ("%d", k-1);
		}
		
		printf ("\n");
	}
	return 0;
}
	

