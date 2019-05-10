#include <stdio.h>
#include <time.h> //Libreria que sera util para contabilizar el tiempo que el jugador tarde en contestar a las preguntas// 

//Funciones empleadas(descritas al final del programa)//
void puntuacion(char actualAns, char correctAns);
void leefichero();

int main() 
{
	char elecCateg; //Variable empleada para almacenar la eleccion de categoria de pregunta//
	char start;//variable empleada para almacenar la letra con la que el jugador decide empezar o no a jugar//
	int segundos=0; //Variable que ayudara a contabilizar el tiempo empleado en la partida//
	printf("Bienvenido a 'Questionary', el programa en el que demostararas tus habilidades sobre cultura general y ... datos un poco mas especificos.\nEsperamos que te diviertas.");
	printf("Para comenzar elige una de las 4 categorias siguientes, introduciendo la letra entre parentesis. Pulsa otra letra diferente a las 4 para salir:\n");
	printf("\nHistoria(H)\nGeografia(G)\nCiencia(C)\nArte(A)");
	scanf("%c", &elecCateg);
	switch(elecCateg) //El programa funcionara mostrando las opciones especificas de cada categoria, dependiendo de lo que introduzca el usuario//
	{
		case'H': //Se reproduce en caso de que el usuario escriba la letra 'H'//
			printf("BIENVENIDO!!\nHas elegido la categoria Historia\n");
			printf("Pulsa (s) para comenzar a jugar, o pulsa 'o' para salir. En cuanto lo pulses, el contador de tiempo empezara a correr\n");
			printf("Ten cuidado, tu puntuacion depende de las preguntas que aciertes y del tiempo que tardes.\nBUENA SUERTE!");
			scanf("%c", &start); //Aqui la persona introduce una letra para empezar a jugar u 'o' para salir//
			if(start=='s')
			{
				
				puntuacion (actualAns, correctAns);
			}
			else printf("Hasta pronto, ha sido un placer jugar contigo\n");
			break;
		case'G': //Se reproduce en caso de que el usuario escriba la letra 'G'//
			printf("BIENVENIDO!!\nHas elegido la categoria Geografia\n");
			printf("Pulsa (s) para comenzar a jugar, o pulsa 'o' para salir. En cuanto lo pulses, el contador de tiempo empezara a correr\n");
			printf("Ten cuidado, tu puntuacion depende de las preguntas que aciertes y del tiempo que tardes.\nBUENA SUERTE!");
			break;
		case'C': //Se reproduce en caso de que el usuario escriba la letra 'C'//
			printf("BIENVENIDO!!\nHas elegido la categoria Ciencia\n");
			printf("Pulsa (s) para comenzar a jugar, o pulsa 'o' para salir. En cuanto lo pulses, el contador de tiempo empezara a correr\n");
			printf("Ten cuidado, tu puntuacion depende de las preguntas que aciertes y del tiempo que tardes.\nBUENA SUERTE!");
			break;
		case'A': //Se reproduce en caso de que el usuario escriba la letra 'A'//
			printf("BIENVENIDO!!\nHas elegido la categoria Arte\n");
			printf("Pulsa (s) para comenzar a jugar, o pulsa 'o' para salir. En cuanto lo pulses, el contador de tiempo empezara a correr\n");
			printf("Ten cuidado, tu puntuacion depende de las preguntas que aciertes y del tiempo que tardes.\nBUENA SUERTE!");
			break;
		default:
			printf("Has escogido salir del juego.\nUn placer, nos vemos pronto!!\n");
	return 0;	
	}
	
//DEFINICION DE FUNCIONES EMPLEADAS//
void puntuacion(char actualAns, char correctAns) //Funcion para sumar la puntuacion del jugador//
{
	int contador=0;
	if(actualAns==correctAns)
	{
		contador++;
		printf("Respuesta correcta\n");
	}
	else
		printf("Respuesta incorrecta, la correcta era la %c\n", correctAns);
}

//Funcion para imprimir en pantalla la pregunta 1 de HISTORIA//
void leefichero()
{
	FILE *p;
	char aux;
	p=fopen("questionary/historia/p1.txt","r"); //Fichero que abre la pregunta 1 de HISTORIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(pf);
}
}
