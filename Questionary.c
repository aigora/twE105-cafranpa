#include <stdio.h>
#include <time.h> //Libreria que sera util para contabilizar el tiempo que el jugador tarde en contestar a las preguntas// 

//Funciones empleadas(descritas al final del programa)//
void puntuacion(char actualAns, char correctAns);
void leefichero_p1_h();
void leefichero_p2_h();
void leefichero_p3_h();
void leefichero_p4_h();
void leefichero_p5_h();
void leefichero_p6_h();

int main() 
{
	char elecCateg; //Variable empleada para almacenar la eleccion de categoria de pregunta//
	char start;//variable empleada para almacenar la letra con la que el jugador decide empezar o no a jugar//
	char ansUsuario; //Variable empleada para almacenar la eleccion de la opcion correcta//
	int segundos=0; //Variable que ayudara a contabilizar el tiempo empleado en la partida//
	printf("Bienvenido a 'Questionary', el programa en el que demostararas tus habilidades con preguntas sobre cultura general y ... algunos otras un poco mas especificos.\nEsperamos que te diviertas.");
	printf("Para comenzar elige una de las 4 categorias siguientes, introduciendo la letra entre parentesis. Pulsa otra letra diferente a las 4 para salir:\n");
	printf("\nHistoria(H)\nGeografia(G)\nCiencia(C)\nArte(A)");
	scanf("%c", &elecCateg);
	switch(elecCateg) //El programa funcionara mostrando las opciones especificas de cada categoria, dependiendo de lo que introduzca el usuario//
	{
		case'H': //Se reproduce en caso de que el usuario escriba la letra 'H'//
			printf("BIENVENIDO!!\nHas elegido la categoria Historia\n");
			printf("Pulsa (s) para comenzar a jugar, o pulsa cualquier tecla distinta para salir.\n");
			printf("Ten cuidado, y piensa bien antes de contestar, tu puntuacion depende de las preguntas que aciertes y no hay segundas oportunidades...\nBUENA SUERTE!");
			scanf("%c", &start); //Aqui la persona introduce una letra para empezar a jugar u 'o' para salir//
			if(start=='s')
			{
				printf("Escribe 'a', 'b', 'c' o 'd' dependiendo de la opcion que consideres verdadera\n"); //Se indica al usuario que para responder//
				//debe escribir la letra que represente a la respuesta correcta//
				//(esta indicacion sirve para todas las preguntas siguientes del juego y por ello, no se volvera a repetir)//
				leefichero_p1_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 1 de historia(descrita al final del programa)//
				printf("Tu respuesta:\t");
				scanf("%c", &ansUsuario);
				puntuacion (ansUsuario, b);
				leefichero_p2_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 2 de historia(descrita al final del programa)//
				printf("Tu respuesta:\t");
				scanf("%c", &ansUsuario);
				puntuacion (ansUsuario, c);
				leefichero_p3_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 3 de historia(descrita al final del programa)//
				printf("Tu respuesta:\t");
				scanf("%c", &ansUsuario);
				puntuacion (ansUsuario, c);
				leefichero_p4_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 4 de historia(descrita al final del programa)//
				printf("Tu respuesta:\t");
				scanf("%c", &ansUsuario);
				puntuacion (ansUsuario, c);
			}
			else printf("Hasta pronto, ha sido un placer jugar contigo\n");
			break;
		case'G': //Se reproduce en caso de que el usuario escriba la letra 'G'//
			printf("BIENVENIDO!!\nHas elegido la categoria Geografia\n");
			printf("Pulsa (s) para comenzar a jugar, o pulsa cualquier tecla distinta para salir. En cuanto lo pulses, el contador de tiempo empezara a correr\n");
			printf("Ten cuidado, y pinsa bien antes de contestar, tu puntuacion depende de las preguntas que aciertes y no hay segundas oportunidades...\nBUENA SUERTE!");
			break;
		case'C': //Se reproduce en caso de que el usuario escriba la letra 'C'//
			printf("BIENVENIDO!!\nHas elegido la categoria Ciencia\n");
			printf("Pulsa (s) para comenzar a jugar, o pulsa cualquier tecla distinta para salir. En cuanto lo pulses, el contador de tiempo empezara a correr\n");
			printf("Ten cuidado,  y pinsa bien antes de contestar, tu puntuacion depende de las preguntas que aciertes y no hay segundas oportunidades...\nBUENA SUERTE!");
			break;
		case'A': //Se reproduce en caso de que el usuario escriba la letra 'A'//
			printf("BIENVENIDO!!\nHas elegido la categoria Arte\n");
			printf("Pulsa (s) para comenzar a jugar, o pulsa cualquier tecla distinta para salir. En cuanto lo pulses, el contador de tiempo empezara a correr\n");
			printf("Ten cuidado,  y pinsa bien antes de contestar, tu puntuacion depende de las preguntas que aciertes y no hay segundas oportunidades...\nBUENA SUERTE!");
			break;
		default:
			printf("Has escogido salir del juego.\nUn placer, nos vemos pronto!!\n");
	return 0;	
	}
	
//DEFINICION DE FUNCIONES EMPLEADAS//
void puntuacion(char actualAns, char correctAns) //Funcion para sumar la puntuacion del jugador y mostrarle la opcion correcta//
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
void leefichero_p1_h()
{
	FILE *p;
	char aux;
	p=fopen("questionary/historia/p1.txt","r"); //Fichero que abre la pregunta 1 de HISTORIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);
}

//Funcion para imprimir en pantalla la pregunta 2 de HISTORIA//
void leefichero_p2_h()
{
	FILE *p;
	char aux;
	p=fopen("questionary/historia/p2.txt","r"); //Fichero que abre la pregunta 2 de HISTORIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);
}

//Funcion para imprimir en pantalla la pregunta 3 de HISTORIA//
void leefichero_p3_h()
{
	FILE *p;
	char aux;
	p=fopen("questionary/historia/p3.txt","r"); //Fichero que abre la pregunta 3 de HISTORIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);
}

//Funcion para imprimir en pantalla la pregunta 4 de HISTORIA//
void leefichero_p4_h()
{
	FILE *p;
	char aux;
	p=fopen("questionary/historia/p4.txt","r"); //Fichero que abre la pregunta 4 de HISTORIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);
}

//Funcion donde tiene lugar la parte de las preguntas y respuestas de HISTORIA //
void leefichero_p1_h()
{
	
}
}
