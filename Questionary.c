#include <stdio.h>
#include <time.h> //Libreria que sera util para contabilizar el tiempo que el jugador tarde en contestar a las preguntas// 
int main() 
{
	char elecCateg; //Variable empleada para almacenar la eleccion de categoria de pregunta//
	printf("Bienvenido a 'Questionary', el programa en el que demostararas tus habilidades sobre cultura general y ... datos un poco mas especificos.\nEsperamos que te diviertas.");
	printf("Para comenzar elige una de las 4 categorias siguientes:\n");
	printf("Historia(H), Geografia(G), Ciencia(C), Arte(A)");
	scanf("%c", &elecCateg);
}
