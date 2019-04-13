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
int proximidad(posicion *tesoro, posicion *usuario);
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
	printf("Se ha enterrado un tesoro en un mapa de 10*10\n");
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
	printf("Para ello tienes que pulsar una de las teclas direccionales(wasd), y el numero de unidades que quieras avanzar\n");
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
	res->x=rand() % 10+0;
	res->y=rand() % 10+0;
}
void busqueda(posicion *tesoro, posicion *usuario)
{
	posicion *t=tesoro,*u=usuario;
	u->x=u->y=0;
	int i=1,n,b;
	char l,ans,bans;
	do
	{
		printf("Ronda %i\n",i);
		sleep(2);
		b=proximidad(tesoro,usuario);
		if(b==0)
		{
			printf("Has ganado el juego\n");
			printf("Te gustaria volver a jugar?(s/pulsa cualquier tecla)\n");
			scanf(" %c",&bans);
			if(bans=='s')
			{
				enterrar(tesoro);
				busqueda(tesoro,usuario);
			}
			else
			{
				printf("Gracias por jugar\n");
				exit(-1);
			}
		}
		printf("usuario:\n\tx:%i\n\ty:%i\n",u->x,u->y);
		scanf(" %c%i[^\n]",&l,&n);
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
				avancehorizontal(-n,usuario);
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
int proximidad(posicion *tesoro, posicion *usuario)
{
	posicion *t=tesoro,*u=usuario;
	if((abs(u->x-t->x)==0)&&(abs(u->y-t->y)==0))
	return 0;
	else if((abs(u->x-t->x)<=1)&&(abs(u->y-t->y)<=1))
	printf("Estas al lado del tesoro\n");	
	else if((abs(u->x-t->x)<=2)&&(abs(u->y-t->y)<=2))
	printf("Estas muy cerca del tesoro\n");
	else if(((abs(u->x-t->x)<=3)&&(abs(u->y-t->y)<=2))||((abs(u->x-t->x)<=2)&&(abs(u->y-t->y)<=3))||((abs(u->x-t->x)<=3)&&(abs(u->y-t->y)<=3)))
	printf("Estas acercandote\n");
	else
	printf("Estas bastante lejos del tesoro\n");
	return -1;
}
void avancevertical(int n, posicion *usuario)
{
	posicion *u=usuario;
	u->y+=n;
	if((u->y>10)||(u->y<0))
	{
		printf("Error:te has salido del tablero\n");
		exit(1);
	}
}
void avancehorizontal(int n, posicion *usuario)
{
	posicion *u=usuario;
	u->x+=n;
	if((u->x>10)||(u->x<0))
	{
		printf("Error:te has salido del tablero\n");
		exit(1);
	}
}
