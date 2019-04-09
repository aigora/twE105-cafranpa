#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef struct
{
	int x;
	int y;
}posicion;
void enterrar(posicion *tesoro);
int main()
{
	posicion tesoro, usuario;
	enterrar(&tesoro);
	printf("Bienvenido a 'la busqueda del tesoro'\n");
	system("pause");
	printf("Se ha enterrado en un mapa de 100*100 un tesoro\n");
	system("pause");
	printf("Comienzas en el origen de coordenadas\n");
	system("pause");
	printf("Tu objetivo, como habras podido deducir, es encontrar el tesoro\n");
	
	/* Este programa estará basado en una busqueda del tesoro en base a funciones con punteros 
	y a estructuras que alberguen la posicion del tesoro y del usuario.
	Los punteros ayudaran a modificar las estructuras con las funciones gracias al 
	paso por referencia*/
	return 0;
}
void enterrar(posicion *tesoro)
{
	posicion *res=tesoro;
	srand(time(NULL));
	res->x=rand() % 100+0;
	res->y=rand() % 100+0;
}
