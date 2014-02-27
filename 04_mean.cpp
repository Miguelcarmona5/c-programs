#include<stdio.h>
#include<stdlib.h>


int main(){


printf("introduce el tamaño del triángulo: ");
scanf("%i",&tamaño);


for(int fila=0; fila<tamaño; fila++){

for(int col=0, col<tamaño; col++){

if(col<=fila)

	printf(" 0 ");}
}else

 printf("  ");

return EXIT_SUCCESS;

}
