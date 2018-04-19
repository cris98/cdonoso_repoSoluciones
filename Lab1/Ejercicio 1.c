
#include <stdio.h>

	int main()
{
		int candidato1=0, candidato2=0, candidato3=0, nulo=0;
		char x;
	
		
		printf ("Ingrese el número de su candidato: \n" );
		
		
		while (x !='s'){
			
		scanf ("%c", &x);
		
			
			
			if (x=='1'){
				candidato1++;
		}
		
			if (x=='2'){
				candidato2++;
		}
		
			if (x=='3'){
				candidato3++;
		}
			if (x!=1 && x!=2 && x!=3){
				nulo++;
		}
	}
	
		printf ("Los votos obtenidos por el candidato 1 son %d\n", candidato1);
		printf ("Los votos obtenidos por el candidato 2 son %d\n", candidato2);
		printf ("Los votos obtenidos por el candidato 3 son %d\n", candidato3);
		printf ("La cantidad de votos nulos es %d\n", nulo);
		
		if (candidato1 > candidato2 && candidato2 > candidato3){
			printf ("El nuevo presidente sera el candidato 1");
			
		else if (candidato2 > candidato1 && candidato1 > candidato3){
			printf ("El nuevo presidente sera el candidato 2");
			
		else if (candidato3 > candidato2 && candidato2 > candidato1){
			printf ("El nuevo presidente sera el candidato 3");
	


	
	return 0;
}

