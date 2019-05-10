#include <stdio.h>
#include <time.h> //Libreria que sera util para contabilizar el tiempo que el jugador tarde en contestar a las preguntas// 

int main() 
{
	char elecCateg; //Variable empleada para almacenar la eleccion de categoria de pregunta//
	printf("Bienvenido a 'Questionary', el programa en el que demostararas tus habilidades sobre cultura general y ... datos un poco mas especificos.\nEsperamos que te diviertas.");
	printf("Para comenzar elige una de las 4 categorias siguientes, introduciendo la letra entre parentesis. Pulsa otra letra diferente a las 4 para salir:\n");
	printf("Historia(H), Geografia(G), Ciencia(C), Arte(A)");
	scanf("%c", &elecCateg);
	switch(elecCateg) //El programa funcionara mostrando las opciones especificas de cada categoria, dependiendo de lo que introduzca el usuario//
	{
		case'H': //Se reproduce en caso de que el usuario escriba la letra 'H'//
			printf("Has elegido la categoria Historia\n");
			printf("Pulsa (s) para comenzar a jugar. En cuanto lo pulses, el contador de tiempo empezara a correr\n");
			printf("Ten cuidado, tu puntuación depende de las preguntas que aciertes y del tiempo que tardes.\nBUENA SUERTE!");
			break;
		case'G': //Se reproduce en caso de que el usuario escriba la letra 'G'//
			printf("Has elegido la categoria Geografia\n");
			printf("Pulsa (s) para comenzar a jugar. En cuanto lo pulses, el contador de tiempo empezara a correr\n");
			printf("Ten cuidado, tu puntuación depende de las preguntas que aciertes y del tiempo que tardes.\nBUENA SUERTE!");
			break;
		case'C': //Se reproduce en caso de que el usuario escriba la letra 'C'//
			printf("Has elegido la categoria Ciencia\n");
			printf("Pulsa (s) para comenzar a jugar. En cuanto lo pulses, el contador de tiempo empezara a correr\n");
			printf("Ten cuidado, tu puntuación depende de las preguntas que aciertes y del tiempo que tardes.\nBUENA SUERTE!");
			break;
		case'A': //Se reproduce en caso de que el usuario escriba la letra 'A'//
			printf("Has elegido la categoria Arte\n");
			printf("Pulsa (s) para comenzar a jugar. En cuanto lo pulses, el contador de tiempo empezara a correr\n");
			printf("Ten cuidado, tu puntuación depende de las preguntas que aciertes y del tiempo que tardes.\nBUENA SUERTE!");
			break;
		default:
			printf("Has escogido salir del juego.\nUn placer, nos vemos pronto!!\n");
			
	}
}
