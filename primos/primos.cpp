#include<stdio.h>
#include<stdlib.h>

#define n = 70
bool es_divisible(int dividendo , int divisor){
	return! ( dividendo % divisor);

}


int main (int argc , char *argv[]){
	int num;
	int primo[n];
	 
primo[0] = 2



	for(int i=1 ; i<70; i++){
		if(num%i == 0)
			printf(" %i",num);

		else
			printf(" ");

	}













	return EXIT_SUCCESS;

}
