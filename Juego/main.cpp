#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <ncurses.h>

#define N 10
#define LINES 40
#define COLS 70
#define COL 7
#define FILA 2

struct TMeteorito{
	double x;
	double y;
	double v;
};

struct TNave{

	double x;
	double y;
	char caracter;
};




int main(int argc, char *argv[]){

	TNave Nave[FILA][COL];
	int hola;

	struct TMeteorito bolita[N];
	const char image[] = {'o'};

	initscr();   //INICA NCURSES
        keypad(stdscr, TRUE); 
	curs_set(0);             //Quitar cursor
	start_color();           //Iniciar colores
	halfdelay(3);
	init_pair(1, COLOR_RED, COLOR_BLACK);  //Color 1

	srand(time(NULL)); //Aleatorio

	/* Initialization */  //Colocar el asteroide de forma aleatoria en x,y y velocidad
	for (int i=0; i<N; i++){
		bolita[i].y = rand() % LINES; 
		bolita[i].x = rand() % COLS;
		bolita[i].v = rand() % 1 + 1;
	}



	//Pasar la nave del txt a array

            for(int fila=0; fila<FILA; fila++)
			for(int col=0; col<COL; col++){

				Nave[fila][col].y = fila;
				Nave[fila][col].x = col;
			}

	FILE *archivo;
	char caracter;

	archivo = fopen("nave.txt","r");

	if (archivo == NULL){

		printf("\n Error de apertura del archivo. \n\n");
	}else{


		printf("\n El contenido del archivo de prueba es \n\n");


		for(int i=0; i<FILA; i++)
			for(int j=0; j<COL; j++){

				caracter = fgetc(archivo);    
				Nave[i][j].caracter = caracter;
			}   


	}   
	fclose(archivo);


	//Pintar asteroides y nave
		
	while(1){
		/* Update physics */  //Va moviendo hacia abajo segun sea su velocidad 
		for (int i=0; i<N; i++){
			bolita[i].y += bolita[i].v;
			//bolita[i].x += rand() % 3 - 1; //para que no haga zig-zag
		}

		/* Display data */
		clear();

		for (int i=0; i<N; i++){
			attron(COLOR_PAIR( (int) bolita[i].v));
			mvaddch( 
					(int) bolita[i].y % LINES, 
					(int) bolita[i].x % COLS, 
					image[ (int) bolita[i].v - 1] );
			attroff(COLOR_PAIR( (int) bolita[i].v));
		}

		for(int fila=0; fila<FILA; fila++)
			for(int col=0; col<COL; col++)
				mvprintw(Nave[fila][col].y+20, Nave[fila][col].x+20, "%c", Nave[fila][col].caracter);

		refresh();

		usleep(130000);


		//Mover nave

		switch(hola = getch()){

                 case KEY_RIGHT:
		       
			 for(int fila=0; fila<FILA; fila++)
				 for(int col=0; col<COL; col++)
				Nave[fila][col].x ++;
			 break;

                 case KEY_LEFT:  
			   
			 for(int fila=0; fila<FILA; fila++)
				 for(int col=0; col<COL; col++)
					 Nave[fila][col].x --;
			 
			 break;


		} 
             		

	}
	getchar();

	curs_set(1);
	endwin();
	return EXIT_SUCCESS;
}
