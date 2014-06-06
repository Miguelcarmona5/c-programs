#include <stdio.h>
#include <stdlib.h>


#define MARCA 5
#define DELTA_T 0.1

struct TPunto {
    double x;
    double y;
};

void muestra(struct TPunto datos){
    printf("(%.2lf, %.2lf)\n", datos.x, datos.y);
}

int main (int argc, char *argv[]){

    struct TPunto punto = {10, 10}, 
		  velocidad, 
		  aceleracion = {0, -10};

    printf("Velocidad (vx, vy): ");
    scanf(" (%lf, %lf)", &velocidad.x, &velocidad.y);

    while(punto.y >= 0 ){
	velocidad.x += aceleracion.x * DELTA_T;
	velocidad.y += aceleracion.y * DELTA_T;
	punto.x += velocidad.x * DELTA_T;
	punto.y += velocidad.y * DELTA_T;

	muestra(punto);
    }

    return EXIT_SUCCESS;
}
