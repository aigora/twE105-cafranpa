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
	int cnt;
	posicion tesoro, usuario;
	enterrar(&tesoro);
	printf("Bienvenido a 'la busqueda del tesoro'\n");
	sleep(3);
	system("cls");
	printf("Se ha enterrado en un mapa de 100*100 un tesoro\n");
	sleep(3);
	system("cls");
	printf("Comienzas en el origen de coordenadas\n");
	sleep(3);
	system("cls");
	printf("Tu objetivo, como habras podido deducir, es encontrar el tesoro\n");
	sleep(3);
	system("cls");
	printf("Para ello te voy a dar 20 rondas\n");
	printf("En cada una de ellas podras mover tu personaje cuantas unidades quieras\n");
	printf("Para ello tienes que pulsar una de las teclas direccionales, y el numero de unidades que quieras avanzar\n");
	printf("(Pulse enter cuando hayas entendido las instrucciones)\n");
	system("pause");
	system("cls");
	printf("Buena suerte(pulse cuando esté preparado)\n");
	system("pause");
	system("cls");
	for(cnt = 3; cnt >= 1; cnt--)
	{
	system("cls");
	printf("\n %d \n", cnt);
	sleep(1);
	} 
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
	posicion *t=tesoro,*u=usuario;
	u->x=u->y=0;
	int i,n;
	char l;
	do
	{
		i++;
		printf("Ronda %i\n",i);
		sleep(2);
		system("cls");
		proximidad(tesoro,usuario);//hacer funcion void proximidad(posicion *tesoro, posicion *usario)
		printf("usuario:\n\tx:")
		scanf("%c%i",&l&n);
		switch(l)
		{
			case 'w':
			{
				avancevertical(n,usuario);//hacer funcion void avancevertical(int n, posicion *usuario)
				break;		
			}
			case 'd':
			{
				avancehorizontal(n,usuario);//hacer funcion void avancehorizontal(int n, posicion *usuario)
			}
			case 's':
			{
				avancevertical(-n,usuario);//hacer funcion void avancevertical(int n, posicion *usuario)
				break;		
			}	
		}
	}
}
