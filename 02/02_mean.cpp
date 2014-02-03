#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int main(){

	int numeros[MAX], media=0, suma=0;

	printf("Inserte 10 numeros enteros positivos: \n");

	for(int i=0; i<MAX; i++){
		printf("Numero %i: ", i+1);
		scanf(" %i", &numeros[i]);

		suma += numeros[i];
	}

	media = (suma/MAX);

	printf("Suma: %i \n", suma);
	printf("Media: %i \n", media);


	return EXIT_SUCCESS;
}
