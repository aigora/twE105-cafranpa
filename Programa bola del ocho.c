#include<stdio.h>
#include <time.h>
#include <stdlib.h>
void futuro();
int main()
{
	char ans;
	printf("Hola, bienvenido a la bola del ocho\n");
	printf("Crees que estas preparado para conocer tu fortuna?(s/n)\n");
	scanf("%s", &ans);
	while((ans!='s')&&(ans!='n'))
	{
		printf("lo siento no te he entendido\n");
		printf("Crees que estas preparado para conocer tu fortuna?(si o no)\n");
		scanf("%s", &ans);
	}
	if(ans=='s')
	futuro();
	else if(ans=='n')
	{
		printf("Te entiendo, el futuro no es para mentes fragiles\n");
		system("pause");
		printf("Intuyo que nos volveremos a ver pronto...\n");
    }
    return 0;
}
void futuro()
{
	char answ, r[300];
	printf("Veo que tienes agallas\n");
	printf("Adelante, preguntame lo que quieras conocer\n");
	scanf("%300[^\n]", r);
	printf("has dicho %s\n", r);
	printf("Quieres preguntarme algo mas?\n");
	printf("(Si quiere volver a jugra, pulse s. Si no pulse cualquier otra tecla)");
	scanf("%s",&answ);
    if(answ=='s')
    futuro();
    else
    printf("Espero haberte servido mucho\n");
}
