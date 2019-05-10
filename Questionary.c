#include <stdio.h>
#include <time.h> //libreria necesaria para conseguir margen de tiempo entre preguntas//

//Funciones empleadas(descritas al final del programa)//
void puntuacion(char actualAns, char correctAns);

//Funciones empleadas en la seccion HISTORIA//
void questHistoria(); //Funcion donde tiene lugar la parte de las preguntas y respuestas de Historia // 
void leefichero_p1_h();
void leefichero_p2_h();
void leefichero_p3_h();
void leefichero_p4_h();
void leefichero_p5_h();
void leefichero_p6_h();
void leefichero_p7_h();
void leefichero_p8_h();
void leefichero_p9_h();
void leefichero_p10_h();

//Funciones empleadas en la seccion GEOGRAFIA//
void questGeografia(); //Funcion donde tiene lugar la parte de las preguntas y respuestas de Geografia // 
void leefichero_p1_g();
void leefichero_p2_g();
void leefichero_p3_g();
void leefichero_p4_g();
void leefichero_p5_g();
void leefichero_p6_g();
void leefichero_p7_g();
void leefichero_p8_g();
void leefichero_p9_g();
void leefichero_p10_g();

int main() 
{
	char elecCateg; //Variable empleada para almacenar la eleccion de categoria de pregunta//
	char start;//variable empleada para almacenar la letra con la que el jugador decide empezar o no a jugar//
	int contador; //Variable que cuenta la puntuacion del usuario//
	printf("Bienvenido a 'Questionary', el programa en el que demostararas tus habilidades con preguntas sobre cultura general y ... algunos otras un poco mas especificos.\nEsperamos que te diviertas.");
	printf("Para comenzar elige una de las 4 categorias siguientes, introduciendo la letra entre parentesis. Pulsa otra letra diferente a las 4 para salir:\n");
	printf("\nHistoria(H)\nGeografia(G)\nCiencia(C)\nArte(A)\n");
	scanf("%c", &elecCateg);
	switch(elecCateg) //El programa funcionara mostrando las opciones especificas de cada categoria, dependiendo de lo que introduzca el usuario//
	{
		case'H': //Se reproduce en caso de que el usuario escriba la letra 'H' o 'h'//
		case'h':
			system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//  
			printf("BIENVENIDO!!\nHas elegido la categoria Historia\n");
			printf("Pulsa (s) para comenzar a jugar, o pulsa cualquier tecla distinta para salir.\n");
			printf("Ten cuidado, y piensa bien antes de contestar, tu puntuacion depende de las preguntas que aciertes y no hay segundas oportunidades...\nBUENA SUERTE!\n");
			scanf(" %c", &start); //Aqui la persona introduce una letra para empezar a jugar o pulsa una letra diferente a 's' para salir//
			if(start == 's')
			{
				system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//
				printf("Escribe 'a', 'b', 'c' o 'd' dependiendo de la opcion que consideres verdadera\n"); //Se indica al usuario que para responder//
				//debe escribir la letra que represente a la respuesta correcta//
				//(esta indicacion sirve para todas las preguntas siguientes del juego y por ello, no se volvera a repetir)//
				questHistoria(); //Funcion donde tiene lugar la parte de las preguntas y respuestas de HISTORIA // 
				printf("\nEnhorabuena!! Has llegado al final\t Tu puntuacion es: %i", contador);
			}
			else printf("Hasta pronto, ha sido un placer jugar contigo\n");
			break;
		case'G': //Se reproduce en caso de que el usuario escriba la letra 'G' o 'g'//
		case'g':
			system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//  
			printf("BIENVENIDO!!\nHas elegido la categoria Geografia\n");
			printf("Pulsa (s) para comenzar a jugar, o pulsa cualquier tecla distinta para salir.\n");
			printf("Ten cuidado, y piensa bien antes de contestar, tu puntuacion depende de las preguntas que aciertes y no hay segundas oportunidades...\nBUENA SUERTE!\n");
			scanf(" %c", &start); //Aqui la persona introduce una letra para empezar a jugar o pulsa una letra diferente a 's' para salir//
			if(start == 's')
			{
				system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//  
				printf("Escribe 'a', 'b', 'c' o 'd' dependiendo de la opcion que consideres verdadera\n"); //Se indica al usuario que para responder//
				//debe escribir la letra que represente a la respuesta correcta//
				//(esta indicacion sirve para todas las preguntas siguientes del juego y por ello, no se volvera a repetir)//
				questGeografia(); //Funcion donde tiene lugar la parte de las preguntas y respuestas de GEOGRAFIA//
				printf("\nEnhorabuena!! Has llegado al final\t Tu puntuacion es: %i", contador);
 
			}
			else printf("Hasta pronto, ha sido un placer jugar contigo\n");
			break;
		case'C': //Se reproduce en caso de que el usuario escriba la letra 'C' o 'c'//
		case'c':	
			printf("BIENVENIDO!!\nHas elegido la categoria Ciencia\n");
			printf("Pulsa (s) para comenzar a jugar, o pulsa cualquier tecla distinta para salir. En cuanto lo pulses, el contador de tiempo empezara a correr\n");
			printf("Ten cuidado,  y pinsa bien antes de contestar, tu puntuacion depende de las preguntas que aciertes y no hay segundas oportunidades...\nBUENA SUERTE!");
			break;
		case'A': //Se reproduce en caso de que el usuario escriba la letra 'A' o 'a'//
		case'a':
			printf("BIENVENIDO!!\nHas elegido la categoria Arte\n");
			printf("Pulsa (s) para comenzar a jugar, o pulsa cualquier tecla distinta para salir. En cuanto lo pulses, el contador de tiempo empezara a correr\n");
			printf("Ten cuidado,  y pinsa bien antes de contestar, tu puntuacion depende de las preguntas que aciertes y no hay segundas oportunidades...\nBUENA SUERTE!");
			break;
		default:
			printf("Has escogido salir del juego.\nUn placer, nos vemos pronto!!\n");
	return 0;	
	}
}
	
//DEFINICION DE FUNCIONES EMPLEADAS//
void puntuacion(char actualAns, char correctAns) //Funcion para sumar la puntuacion del jugador y mostrarle la opcion correcta//
{
	int contador=0;
	if(actualAns == correctAns) //Esto se ejecuta cuando la respuesta otorgada por el usuario sea igul a la respuesta que el programa reconoce como correcta//
	{
		contador++;
		printf("\nRespuesta correcta, ganas 1 punto.\n");
	}
	else
		printf("\nRespuesta incorrecta, la correcta era la %c.\n", correctAns);
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
	p=fopen("questionary/historia/p4.txt","r"); //Fichero que abre la pregunta 4 de HISTORIA//			leefichero_p5_h()
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);
}

//Funcion para imprimir en pantalla la pregunta 5 de HISTORIA//
void leefichero_p5_h()
{
	FILE *p;
	char aux;
	p=fopen("questionary/historia/p5.txt","r"); //Fichero que abre la pregunta 5 de HISTORIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);
}

//Funcion para imprimir en pantalla la pregunta 6 de HISTORIA//
void leefichero_p6_h()
{
	FILE *p;
	char aux;
	p=fopen("questionary/historia/p6.txt","r"); //Fichero que abre la pregunta 6 de HISTORIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);
}

//Funcion para imprimir en pantalla la pregunta 7 de HISTORIA//
void leefichero_p7_h()
{
	FILE *p;
	char aux;
	p=fopen("questionary/historia/p7.txt","r"); //Fichero que abre la pregunta 7 de HISTORIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);
}

//Funcion para imprimir en pantalla la pregunta 8 de HISTORIA//
void leefichero_p8_h()
{
	FILE *p;
	char aux;
	p=fopen("questionary/historia/p8.txt","r"); //Fichero que abre la pregunta 8 de HISTORIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);
}

//Funcion para imprimir en pantalla la pregunta 8 de HISTORIA//
void leefichero_p9_h()
{
	FILE *p;
	char aux;
	p=fopen("questionary/historia/p9.txt","r"); //Fichero que abre la pregunta 9 de HISTORIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);
}

//Funcion para imprimir en pantalla la pregunta 8 de HISTORIA//
void leefichero_p10_h()
{
	FILE *p;
	char aux;
	p=fopen("questionary/historia/p10.txt","r"); //Fichero que abre la pregunta 10 de HISTORIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);
}

//Funcion donde tiene lugar la parte de las preguntas y respuestas de HISTORIA //
void questHistoria()
{
	char ansUsuario; //Variable empleada para almacenar la eleccion de la opcion correcta//
	leefichero_p1_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 1 de historia(descrita al final del programa)//
				printf("\nTu respuesta:\t");
				scanf(" %c", &ansUsuario);
				puntuacion(ansUsuario, 'b');
				leefichero_p2_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 2 de historia(descrita al final del programa)//
				printf("\nTu respuesta:\t");
				scanf(" %c", &ansUsuario);
				puntuacion(ansUsuario, 'c');
				leefichero_p3_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 3 de historia(descrita al final del programa)//
				printf("\nTu respuesta:\t");
				scanf(" %c", &ansUsuario);
				puntuacion(ansUsuario, 'c');
				leefichero_p4_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 4 de historia(descrita al final del programa)//
				printf("\nTu respuesta:\t");
				scanf(" %c", &ansUsuario);
				puntuacion(ansUsuario, 'c');
				leefichero_p5_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 5 de historia(descrita al final del programa)//
				printf("\nTu respuesta:\t");
				scanf(" %c", &ansUsuario);
				puntuacion(ansUsuario, 'c');
				leefichero_p6_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 6 de historia(descrita al final del programa)//
				printf("\nTu respuesta:\t");
				scanf(" %c", &ansUsuario);
				puntuacion(ansUsuario, 'c');
				leefichero_p7_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 7 de historia(descrita al final del programa)//
				printf("\nTu respuesta:\t");
				scanf(" %c", &ansUsuario);
				puntuacion(ansUsuario, 'b');
				leefichero_p8_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 8 de historia(descrita al final del programa)//
				printf("\nTu respuesta:\t");
				scanf(" %c", &ansUsuario);
				puntuacion(ansUsuario, 'a');
				leefichero_p9_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 9 de historia(descrita al final del programa)//
				printf("\nTu respuesta:\t");
				scanf(" %c", &ansUsuario);
				puntuacion(ansUsuario, 'd');
				leefichero_p10_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 10 de historia(descrita al final del programa)//
				printf("\nTu respuesta:\t");
				scanf(" %c", &ansUsuario);
				puntuacion(ansUsuario, 'a');
}

//Funcion para imprimir en pantalla la pregunta 1 de GEOGRAFIA//
void leefichero_p1_g();
{
	FILE *p;
	char aux;
	p=fopen("questionary/geografia/p1.txt","r"); //Fichero que abre la pregunta 1 de GEOGRAFIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}








//Funcion donde tiene lugar la parte de las preguntas y respuestas de GEOGRAFIA //
void questGeografia()
{
	char ansUsuario; //Variable empleada para almacenar la eleccion de la opcion correcta//
	leefichero_p1_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 1 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	puntuacion(ansUsuario, 'b');
	leefichero_p2_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 2 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	puntuacion(ansUsuario, 'c');
	leefichero_p3_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 3 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	puntuacion(ansUsuario, 'c');
	leefichero_p4_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 4 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	puntuacion(ansUsuario, 'c');
	leefichero_p5_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 5 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	puntuacion(ansUsuario, 'c');
	leefichero_p6_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 6 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	puntuacion(ansUsuario, 'c');
	leefichero_p7_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 7 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	puntuacion(ansUsuario, 'b');
	leefichero_p8_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 8 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	puntuacion(ansUsuario, 'a');
	leefichero_p9_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 9 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	puntuacion(ansUsuario, 'd');
	leefichero_p10_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 10 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	puntuacion(ansUsuario, 'a');
}
