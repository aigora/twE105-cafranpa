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
void proximidad(posicion *tesoro, posicion *usuario);
void avancevertical(int n, posicion *usuario);
void avancehorizontal(int n, posicion *usuario);
int main()
{
	int cnt;
	posicion tesoro, usuario;
	enterrar(&tesoro);
	printf("Bienvenido a 'la busqueda del tesoro'\n");
	sleep(3);
	system("cls");
	printf("Se ha enterrado un tesoro en un mapa de 100*100\n");
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
	printf("Buena suerte(pulse cuando estes preparado)\n");
	system("pause");
	system("cls");
	for(cnt = 3; cnt >= 1; cnt--)
	{
	system("cls");
	printf("\n %d \n", cnt);
	sleep(1);
	} 
	system("cls");
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
	int i=1,n;
	char l,ans;
	do
	{
		printf("Ronda %i\n",i);
		sleep(2);
		proximidad(tesoro,usuario);
		printf("usuario:\n\tx:%i\n\ty:%i\n",u->x,u->y);
		scanf("%c%i[^\n]",&l,&n);
		switch(l)
		{
			case 'w':
			{
				avancevertical(n,usuario);
				break;		
			}
			case 'd':
			{
				avancehorizontal(n,usuario);
				break;//hacer funcion void avancehorizontal(int n, posicion *usuario)
			}
			case 's':
			{
				avancevertical(-n,usuario);
				break;		
			}
			case 'a':
			{
				avancehorizontal(n,usuario);
				break;				
			}		
		}
		i++;
	}
	while(i<=20);
	printf("Se ha acabado el juego\n");
	printf("QUieres jugar otra vez?(s/n)\n");
	scanf("%s",&ans);
	if(ans=='s')
	{
		enterrar(tesoro);
		busqueda(tesoro, usuario);
	}
}
void proximidad(posicion *tesoro, posicion *usuario)
{
	posicion *t=tesoro,*u=usuario;	
	if((abs(u->x-t->x)<=5)&&(abs(u->y-t->y)<=5))
	printf("Estas muy cerca del tesoro\n");
	else if(((abs(u->x-t->x)<=20)&&(abs(u->y-t->y)<=5))||((abs(u->x-t->x)<=5)&&(abs(u->y-t->y)<=20))||((abs(u->x-t->x)<=20)&&(abs(u->y-t->y)<=20)))
	printf("Estas acercandote\n");
	else
	printf("Estas bastante lejos del tesoro\n");
}
void avancevertical(int n, posicion *usuario)
{
	posicion *u=usuario;
	u->y+=n;
	if(u->y>100)
	{
		printf("Error:te has salido del tablero\n");
		exit(1);
	}
}
void avancehorizontal(int n, posicion *usuario)
{
	posicion *u=usuario;
	u->x+=n;
	if(u->x>100)
	{
		printf("Error:te has salido del tablero\n");
		exit(1);
	}
}
