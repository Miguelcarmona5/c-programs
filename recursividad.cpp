#include<stdio.h>
#include<stdlib.h>

#define N  10 

int suma(int numero){
	return numero > 0 ? numero + suma(numero - 1) : 0;
}

/*
double inversa(int N){



}
*/
int main ( int argc , char* argv[]){

	printf("Resultado: %i",suma(N));
	//Coges un numero haces la inversa y se lo sumas, asi hasta 10.

	return EXIT_SUCCESS;
}
