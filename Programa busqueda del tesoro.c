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
	system("pause");
	printf("Se ha enterrado en un mapa de 100*100 un tesoro\n");
	system("pause");
	printf("Comienzas en el origen de coordenadas\n");
	system("pause");
	printf("Tu objetivo, como habras podido deducir, es encontrar el tesoro\n");
	system("pause");
	printf("Para ello te voy a dar 1 minuto\n");
	printf("Buena suerte(pulse cuando esté preparado)\n");
	system("pause");
	for(cnt = 3; cnt >= 1; cnt--){
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
	clock_t t=0,ts=0;
	int s=0, i=0;
	ts=clock()+CLOCKS_PER_SEC;
//	printf("%i\n",t);
	do
	{

			if((t=clock())>=ts)
			{
				s++;
			//	system("cls");
				ts=t+CLOCKS_PER_SEC;
				printf("%i\n",t);
			//	scanf("%i",&i);
			//	printf("%i\n",i);
			}
		}	

	while(t/1000<=10);
}
