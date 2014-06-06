#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
      	int dimension;
       	const char *mes[] = {
		"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio","Agosto","Septiembre","Octubre","Noviembre","Diciembre" };
		    
    dimension = sizeof(mes);//es una funcion para saber la cantidad de datos que estan metidos en la lista.
    dimension /= 10;
		
			   
    printf("Palabras :  %i\n", dimension);
			       
    for(int mostrar=0; mostrar<dimension; mostrar++)
				
	    printf("%s\n", mes[mostrar]);

    return EXIT_SUCCESS;
}


