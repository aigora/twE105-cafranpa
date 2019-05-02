#include<stdio.h>
#include <time.h>
#include <stdlib.h>
void futuro();
int prediccion();
int main()
{
	char ans;
	printf("Hola, bienvenido a la bola del ocho\n");
	printf("Crees que estas preparado para conocer tu fortuna?(s/n)\n");
	scanf(" %c", &ans);
	while((ans!='s')&&(ans!='n'))
	{
		printf("lo siento no te he entendido\n");
		printf("Crees que estas preparado para conocer tu fortuna?(si o no)\n");
		scanf(" %c", &ans);
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
	char ans='s';
	printf("Veo que tienes agallas\n");
	system("pause");
	printf("Adelante, preguntame lo que quieras conocer(es necesario terminar con una '?')\n");
	scanf(" %c[^?]");
	prediccion();
	system("pause");
	system("cls");
	printf("Quieres preguntarme algo mas?(s/cualquier otra tecla)\n");
	scanf(" %c", &ans);
    if(ans=='s')
    futuro();
    else
    printf("Espero haberte servido de mucho, nos veremos en otro momento\n");
}
int prediccion()
{
	FILE *pf;
	char res[21][30];
	srand(time(NULL));
	int i,j;
	i=rand()%21+1;
	pf=fopen("bola_del_8.txt","r");
	if(pf==NULL)
	{
		printf("error: no se ha podido abrir el fichero\n");
		return 0;
	}
	for(j=0;j<=21;j++)
	{
		fscanf(pf,"\n%[^\n]\n",res[j]);
	}
	printf("%s\n",res[i]);
}
