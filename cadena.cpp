#include<stdio.h>
#include<stdlib.h>



int main ( int argc , char *argv[]){

	const char *frase  = "The world is a vampire.";
	const char *principio = frase;
	const char *final       = frase;

	while(*final != '\0')
		final ++;

	while(final != principio){
		final --;

		printf("%c", *final);

	}
	printf("\n");
	return EXIT_SUCCESS;
}
