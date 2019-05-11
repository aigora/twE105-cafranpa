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
int questGeografia(); //Funcion donde tiene lugar la parte de las preguntas y respuestas de Geografia // 
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

//Funciones empleadas en la seccion CIENCIA//
int questCiencia(); //Funcion donde tiene lugar la parte de las preguntas y respuestas de ciencia //
void leefichero_p1_c();
void leefichero_p2_c();
void leefichero_p3_c();
void leefichero_p4_c();
void leefichero_p5_c();
void leefichero_p6_c();
void leefichero_p7_c();
void leefichero_p8_c();
void leefichero_p9_c();
void leefichero_p10_c();

//Funciones empleadas en la seccion ARTE//
int questArte(); //Funcion donde tiene lugar la parte de las preguntas y respuestas de arte //
void leefichero_p1_a();
void leefichero_p2_a();
void leefichero_p3_a();
void leefichero_p4_a();
void leefichero_p5_a();
void leefichero_p6_a();
void leefichero_p7_a();
void leefichero_p8_a();
void leefichero_p9_a();
void leefichero_p10_a();

int main() 
{
	int puntos=0; //La variable que contabiliza los puntos empieza contando desde cero// 
	int ansUsuario; //Variable que almacena la respuesta del usuario//
	int ansCorrecta; //Variable que almacena la respuesta correcta//
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
				if(puntos<=3) //Esto se ejecutara cuando la respuesta otorgada por el usuario sea igual a la respuesta que el programa reconoce como correcta//
				{
					printf("\nParece que necesitas ponerte a repasar un pelin, pero tranquilo, todo es mejorable.\n");
				}
				else if((puntos>3)&&(puntos<5))
				{
					printf("\nCasi casi apruebas, no te rindas... mas suerte la proxima\n");
				}
				else if((puntos>=5)&&(puntos<7))
				{
					printf("\nBastante bien, has conseguido superar la prueba que pocos han resistido, enhorabuena!!\n");
				}
				else if((puntos>=7)&&(puntos<10))
				{
					printf("\nFenomenal, no solo has aprobado, si no que ademas casi aciertas todo, enhorabuena!!\n");
				}
				else if(puntos=10)
				{
					printf("\nFANTASTICO, has acertado todas las preguntas, eres un increible!!!\n");
				}
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
				puntos+=questGeografia(); //Funcion donde tiene lugar la parte de las preguntas y respuestas de GEOGRAFIA//
				if(puntos<=3) //Esto se ejecutara cuando la respuesta otorgada por el usuario sea igual a la respuesta que el programa reconoce como correcta//
				{
					printf("\nParece que necesitas ponerte a repasar un pelin, pero tranquilo, todo es mejorable\n");
				}
				else if((puntos>3)&&(puntos<5))
				{
					printf("\nCasi casi apruebas, no te rindas... mas suerte la proxima\n");
				}
				else if((puntos>=5)&&(puntos<7))
				{
					printf("\nBastante bien, has conseguido superar la prueba que pocos han resistido, enhorabuena!!\n");
				}
				else if((puntos>=7)&&(puntos<10))
				{
					printf("\nFenomenal, no solo has aprobado, si no que ademas casi aciertas todo, enhorabuena!!\n");
				}
				else if(puntos=10)
				{
					printf("\nFANTASTICO, has acertado todas las preguntas, eres un increible!!!\n");
				}
			}
			else printf("Hasta pronto, ha sido un placer jugar contigo\n");
			break;
		case'C': //Se reproduce en caso de que el usuario escriba la letra 'C' o 'c'//
		case'c':	
			system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//  
			printf("BIENVENIDO!!\nHas elegido la categoria Ciencia\n");
			printf("Pulsa (s) para comenzar a jugar, o pulsa cualquier tecla distinta para salir.\n");
			printf("Ten cuidado, y piensa bien antes de contestar, tu puntuacion depende de las preguntas que aciertes y no hay segundas oportunidades...\nBUENA SUERTE!\n");
			scanf(" %c", &start); //Aqui la persona introduce una letra para empezar a jugar o pulsa una letra diferente a 's' para salir//
			if(start == 's')
			{
				system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//  
				printf("Escribe 'a', 'b', 'c' o 'd' dependiendo de la opcion que consideres verdadera\n"); //Se indica al usuario que para responder//
				//debe escribir la letra que represente a la respuesta correcta//
				//(esta indicacion sirve para todas las preguntas siguientes del juego y por ello, no se volvera a repetir)//
				puntos+=questCiencia(); //Funcion donde tiene lugar la parte de las preguntas y respuestas de CIENCIA//
				if(puntos<=3) //Esto se ejecutara cuando la respuesta otorgada por el usuario sea igual a la respuesta que el programa reconoce como correcta//
				{
					printf("\nParece que necesitas ponerte a repasar un pelin, pero tranquilo, todo es mejorable\n");
				}
				else if((puntos>3)&&(puntos<5))
				{
					printf("\nCasi casi apruebas, no te rindas... mas suerte la proxima\n");
				}
				else if((puntos>=5)&&(puntos<7))
				{
					printf("\nBastante bien, has conseguido superar la prueba que pocos han resistido, enhorabuena!!\n");
				}
				else if((puntos>=7)&&(puntos<10))
				{
					printf("\nFenomenal, no solo has aprobado, si no que ademas casi aciertas todo, enhorabuena!!\n");
				}
				else if(puntos=10)
				{
					printf("\nFANTASTICO, has acertado todas las preguntas, eres un increible!!!\n");
				}
			}
			else printf("Hasta pronto, ha sido un placer jugar contigo\n");
			break;
		case'A': //Se reproduce en caso de que el usuario escriba la letra 'A' o 'a'//
		case'a':
			system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//  
			printf("BIENVENIDO!!\nHas elegido la categoria Arte\n");
			printf("Pulsa (s) para comenzar a jugar, o pulsa cualquier tecla distinta para salir.\n");
			printf("Ten cuidado, y piensa bien antes de contestar, tu puntuacion depende de las preguntas que aciertes y no hay segundas oportunidades...\nBUENA SUERTE!\n");
			scanf(" %c", &start); //Aqui la persona introduce una letra para empezar a jugar o pulsa una letra diferente a 's' para salir//
			if(start == 's')
			{
				system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//  
				printf("Escribe 'a', 'b', 'c' o 'd' dependiendo de la opcion que consideres verdadera\n"); //Se indica al usuario que para responder//
				//debe escribir la letra que represente a la respuesta correcta//
				//(esta indicacion sirve para todas las preguntas siguientes del juego y por ello, no se volvera a repetir)//
				puntos+=questArte(); //Funcion donde tiene lugar la parte de las preguntas y respuestas de ARTE//
				if(puntos<=3) //Esto se ejecutara cuando la respuesta otorgada por el usuario sea igual a la respuesta que el programa reconoce como correcta//
				{
					printf("\nParece que necesitas ponerte a repasar un pelin, pero tranquilo, todo es mejorable\n");
				}
				else if((puntos>3)&&(puntos<5))
				{
					printf("\nCasi casi apruebas, no te rindas... mas suerte la proxima\n");
				}
				else if((puntos>=5)&&(puntos<7))
				{
					printf("\nBastante bien, has conseguido superar la prueba que pocos han resistido, enhorabuena!!\n");
				}
				else if((puntos>=7)&&(puntos<10))
				{
					printf("\nFenomenal, no solo has aprobado, si no que ademas casi aciertas todo, enhorabuena!!\n");
				}
				else if(puntos=10)
				{
					printf("\nFANTASTICO, has acertado todas las preguntas, eres un increible!!!\n");
				}	
			}
			else printf("Hasta pronto, ha sido un placer jugar contigo\n");
			break;
		default:
			printf("Has escogido salir del juego.\nUn placer, nos vemos pronto!!\n");
	}
	return 0;
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
	p=fopen("questionary/historia/p4.txt","r"); //Fichero que abre la pregunta 4 de HISTORIA//
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
	char name[20]; //Aqui se almacena el nombre del usuario//
	int contador=0;
	char ansUsuario; //Variable empleada para almacenar la eleccion del jugador//
	leefichero_p1_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 1 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'b');
	leefichero_p2_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 2 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'b');
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
	system("pause"); //Para dar tiempo al usuario a leer la ultima respuesta antes de llegar a la puntuacion//
	system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//
	printf("%s, Tu puntuacion es: %i", name, contador);
	return contador;
}

//GEOGRAFIA//
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
int questGeografia()
{
	char name[20]; //Aqui se almacena el nombre del usuario//
	int contador=0;
	char ansUsuario; //Variable empleada para almacenar la eleccion del jugador//
	leefichero_p1_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 1 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'b');
	leefichero_p2_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 2 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p3_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 3 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p4_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 4 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p5_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 5 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p6_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 6 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p7_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 7 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'b');
	leefichero_p8_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 8 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	leefichero_p9_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 9 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'd');
	leefichero_p10_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 10 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	system("pause"); //Para dar tiempo al usuario a leer la ultima respuesta antes de llegar a la puntuacion//
	system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//
	printf("%s, Tu puntuacion es: %i", name, contador);
	return contador;
}

//CIENCIA//
//Funcion para imprimir en pantalla la pregunta 1 de CIENCIA//
void leefichero_p1_c()
{
	FILE *p;
	char aux;
	p=fopen("questionary/ciencia/p1.txt","r"); //Fichero que abre la pregunta 1 de ciencia//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 2 de CIENCIA//
void leefichero_p2_c()
{
	FILE *p;
	char aux;
	p=fopen("questionary/ciencia/p2.txt","r"); //Fichero que abre la pregunta 2 de ciencia//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 3 de CIENCIA//
void leefichero_p3_c()
{
	FILE *p;
	char aux;
	p=fopen("questionary/ciencia/p3.txt","r"); //Fichero que abre la pregunta 3 de ciencia//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 4 de CIENCIA//
void leefichero_p4_c()
{
	FILE *p;
	char aux;
	p=fopen("questionary/ciencia/p4.txt","r"); //Fichero que abre la pregunta 4 de ciencia//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 5 de CIENCIA//
void leefichero_p5_c()
{
	FILE *p;
	char aux;
	p=fopen("questionary/ciencia/p5.txt","r"); //Fichero que abre la pregunta 5 de ciencia//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 6 de CIENCIA//
void leefichero_p6_c()
{
	FILE *p;
	char aux;
	p=fopen("questionary/ciencia/p6.txt","r"); //Fichero que abre la pregunta 6 de ciencia//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 7 de CIENCIA//
void leefichero_p7_c()
{
	FILE *p;
	char aux;
	p=fopen("questionary/ciencia/p7.txt","r"); //Fichero que abre la pregunta 7 de ciencia//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 8 de CIENCIA//
void leefichero_p8_c()
{
	FILE *p;
	char aux;
	p=fopen("questionary/ciencia/p8.txt","r"); //Fichero que abre la pregunta 8 de ciencia//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 9 de CIENCIA//
void leefichero_p9_c()
{
	FILE *p;
	char aux;
	p=fopen("questionary/ciencia/p9.txt","r"); //Fichero que abre la pregunta 9 de ciencia//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 10 de CIENCIA//
void leefichero_p10_c()
{
	FILE *p;
	char aux;
	p=fopen("questionary/ciencia/p10.txt","r"); //Fichero que abre la pregunta 10 de ciencia//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion donde tiene lugar la parte de las preguntas y respuestas de CIENCIA //
int questCiencia()
{
	char name[20]; //Aqui se almacena el nombre del usuario//
	int contador=0;
	char ansUsuario; //Variable empleada para almacenar la eleccion del jugador//
	leefichero_p1_c(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 1 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	leefichero_p2_c(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 2 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'd');
	leefichero_p3_c(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 3 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p4_c(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 4 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'b');
	leefichero_p5_c(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 5 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'b');
	leefichero_p6_c(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 6 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	leefichero_p7_c(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 7 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p8_c(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 8 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	leefichero_p9_c(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 9 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p10_c(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 10 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	system("pause"); //Para dar tiempo al usuario a leer la ultima respuesta antes de llegar a la puntuacion//
	system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//
	printf("%s, Tu puntuacion es: %i", name, contador);
	return contador;
}

//ARTE//
//Funcion para imprimir en pantalla la pregunta 1 de ARTE//
void leefichero_p1_a()
{
	FILE *p;
	char aux;
	p=fopen("questionary/arte/p1.txt","r"); //Fichero que abre la pregunta 1 de arte//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 2 de ARTE//
void leefichero_p2_a()
{
	FILE *p;
	char aux;
	p=fopen("questionary/arte/p2.txt","r"); //Fichero que abre la pregunta 2 de arte//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 3 de ARTE//
void leefichero_p3_a()
{
	FILE *p;
	char aux;
	p=fopen("questionary/arte/p3.txt","r"); //Fichero que abre la pregunta 3 de arte//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 4 de ARTE//
void leefichero_p4_a()
{
	FILE *p;
	char aux;
	p=fopen("questionary/arte/p4.txt","r"); //Fichero que abre la pregunta 4 de arte//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 5 de ARTE//
void leefichero_p5_a()
{
	FILE *p;
	char aux;
	p=fopen("questionary/arte/p5.txt","r"); //Fichero que abre la pregunta 5 de arte//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 6 de ARTE//
void leefichero_p6_a()
{
	FILE *p;
	char aux;
	p=fopen("questionary/arte/p6.txt","r"); //Fichero que abre la pregunta 6 de arte//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 7 de ARTE//
void leefichero_p7_a()
{
	FILE *p;
	char aux;
	p=fopen("questionary/arte/p7.txt","r"); //Fichero que abre la pregunta 7 de arte//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 8 de ARTE//
void leefichero_p8_a()
{
	FILE *p;
	char aux;
	p=fopen("questionary/arte/p8.txt","r"); //Fichero que abre la pregunta 8 de arte//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 9 de ARTE//
void leefichero_p9_a()
{
	FILE *p;
	char aux;
	p=fopen("questionary/arte/p9.txt","r"); //Fichero que abre la pregunta 9 de arte//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 10 de ARTE//
void leefichero_p10_a()
{
	FILE *p;
	char aux;
	p=fopen("questionary/arte/p10.txt","r"); //Fichero que abre la pregunta 10 de arte//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion donde tiene lugar la parte de las preguntas y respuestas de ARTE //
int questArte()
{
	char name[20]; //Aqui se almacena el nombre del usuario//
	int contador=0;
	char ansUsuario; //Variable empleada para almacenar la eleccion del jugador//
	leefichero_p1_a(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 1 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'd');
	leefichero_p2_a(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 2 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	leefichero_p3_a(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 3 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'd');
	leefichero_p4_a(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 4 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	leefichero_p5_a(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 5 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	leefichero_p6_a(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 6 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	leefichero_p7_a(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 7 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p8_a(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 8 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'd');
	leefichero_p9_a(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 9 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	leefichero_p10_a(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 10 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	system("pause"); //Para dar tiempo al usuario a leer la ultima respuesta antes de llegar a la puntuacion//
	system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//
	printf("%s, Tu puntuacion es: %i", name, contador);
	return contador;
}
