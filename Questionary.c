#include <stdio.h>
#include <time.h> //libreria necesaria para conseguir margen de tiempo entre preguntas//

//Funciones empleadas(descritas al final del programa)//
int puntuacion(char actualAns, char correctAns);

//Funciones empleadas en la seccion HISTORIA//
int questHistoria(); //Funcion donde tiene lugar la parte de las preguntas y respuestas de Historia // 
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
	int puntos=0;
	int ansUsuario;
	int ansCorrecta;
	char elecCateg; //Variable empleada para almacenar la eleccion de categoria de pregunta//
	char start;//variable empleada para almacenar la letra con la que el jugador decide empezar o no a jugar//
	int contador; //Variable que cuenta la puntuacion del usuario//
	printf("Bienvenido a 'Questionary', el programa en el que demostararas tus habilidades con preguntas sobre cultura general y ... algunas otras un poco mas especificas.\nEsperamos que te diviertas.");
	printf("Para comenzar elige una de las 4 categorias siguientes, introduciendo la letra entre parentesis. Pulsa otra letra diferente a las 4 para salir:\n");
	printf("\nHistoria(h)\nGeografia(g)\nCiencia(c)\nArte(a)\n");
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
				puntos+=questHistoria(); //Funcion donde tiene lugar la parte de las preguntas y respuestas de HISTORIA // 
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

//Definicion de funciones empleadas en el programa// 

//Funcion que suma la puntuacion e indica si la respuesta es correcta o no//
int puntuacion(char actualAns, char correctAns)
{	
	if(actualAns == correctAns) //Esto se ejecutara cuando la respuesta otorgada por el usuario sea igual a la respuesta que el programa reconoce como correcta//
	{
		printf("\nRespuesta correcta, ganas 1 punto.\n");
		return 1;
	}
	else
	{
		printf("\nRespuesta incorrecta, la correcta era la %c.\n", correctAns);
		return 0;
	}		
}

//HISTORIA//
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
int questHistoria()
{
	int contador=0;
	char ansUsuario; //Variable empleada para almacenar la eleccion del jugador//
	leefichero_p1_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 1 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'b');
	leefichero_p2_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 2 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p3_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 3 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p4_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 4 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p5_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 5 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p6_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 6 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p7_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 7 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'b');
	leefichero_p8_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 8 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	leefichero_p9_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 9 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'd');
	leefichero_p10_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 10 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	system("pause");
	system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//
	printf("Tu puntuacion es: %i", contador);
	return contador;
}

//Funcion para imprimir en pantalla la pregunta 1 de GEOGRAFIA//
void leefichero_p1_g()
{
	FILE *p;
	char aux;
	p=fopen("questionary/geografia/p1.txt","r"); //Fichero que abre la pregunta 1 de GEOGRAFIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 2 de GEOGRAFIA//
void leefichero_p2_g()
{
	FILE *p;
	char aux;
	p=fopen("questionary/geografia/p2.txt","r"); //Fichero que abre la pregunta 2 de GEOGRAFIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 3 de GEOGRAFIA//
void leefichero_p3_g()
{
	FILE *p;
	char aux;
	p=fopen("questionary/geografia/p3.txt","r"); //Fichero que abre la pregunta 3 de GEOGRAFIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 4 de GEOGRAFIA//
void leefichero_p4_g()
{
	FILE *p;
	char aux;
	p=fopen("questionary/geografia/p4.txt","r"); //Fichero que abre la pregunta 4 de GEOGRAFIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 5 de GEOGRAFIA//
void leefichero_p5_g()
{
	FILE *p;
	char aux;
	p=fopen("questionary/geografia/p5.txt","r"); //Fichero que abre la pregunta 5 de GEOGRAFIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 6 de GEOGRAFIA//
void leefichero_p6_g()
{
	FILE *p;
	char aux;
	p=fopen("questionary/geografia/p6.txt","r"); //Fichero que abre la pregunta 6 de GEOGRAFIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 7 de GEOGRAFIA//
void leefichero_p7_g()
{
	FILE *p;
	char aux;
	p=fopen("questionary/geografia/p7.txt","r"); //Fichero que abre la pregunta 7 de GEOGRAFIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 8 de GEOGRAFIA//
void leefichero_p8_g()
{
	FILE *p;
	char aux;
	p=fopen("questionary/geografia/p8.txt","r"); //Fichero que abre la pregunta 8 de GEOGRAFIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 9 de GEOGRAFIA//
void leefichero_p9_g()
{
	FILE *p;
	char aux;
	p=fopen("questionary/geografia/p9.txt","r"); //Fichero que abre la pregunta 9 de GEOGRAFIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 10 de GEOGRAFIA//
void leefichero_p10_g()
{
	FILE *p;
	char aux;
	p=fopen("questionary/geografia/p10.txt","r"); //Fichero que abre la pregunta 10 de GEOGRAFIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion donde tiene lugar la parte de las preguntas y respuestas de GEOGRAFIA //
void questGeografia()
{
	char ansUsuario; //Variable empleada para almacenar la eleccion del jugador//
	leefichero_p1_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 1 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	puntuacion(ansUsuario, 'b');
	leefichero_p2_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 2 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	puntuacion(ansUsuario, 'c');
	leefichero_p3_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 3 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	puntuacion(ansUsuario, 'c');
	leefichero_p4_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 4 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	puntuacion(ansUsuario, 'c');
	leefichero_p5_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 5 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	puntuacion(ansUsuario, 'c');
	leefichero_p6_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 6 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	puntuacion(ansUsuario, 'c');
	leefichero_p7_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 7 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	puntuacion(ansUsuario, 'b');
	leefichero_p8_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 8 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	puntuacion(ansUsuario, 'a');
	leefichero_p9_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 9 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	puntuacion(ansUsuario, 'd');
	leefichero_p10_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 10 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	puntuacion(ansUsuario, 'a');
}
