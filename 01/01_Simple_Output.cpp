#include <stdio.h>
#include <stdlib.h>

#define MAX 4

int main(int argc, char *argv[]){


	char frase[20];

	printf("Frase: ");
	
        //Para coger la función la frase.
        gets(frase);
        
	for(int i=0; i<MAX; i++)
	printf("\t%s\n", frase);



	return EXIT_SUCCESS;
}




