#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef struct
{
	int x;
	int y;
}posicion;
void enterrar(posicion *tesoro);
void busqueda(posicion *tesoro, posicion *usuario);
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
	system("pause");
	printf("Para ello te voy a dar 1 minuto\n");
	printf("Buena suerte\n");
	busqueda(&tesoro, &usuario);
	return 0;
}
void enterrar(posicion *tesoro)
{
	posicion *res=tesoro;
	srand(time(NULL));
	res->x=rand() % 100+0;
	res->y=rand() % 100+0;
}
void busqueda(posicion *tesoro, posicion *usuario)
{
	
}
