#include<stdio.h>
#include <time.h>
#include <stdlib.h>
typedef struct{
	char string[40];
}string;
void futuro(char ans);
int prediccion();
int lecturafichero(FILE *pf, string *res, int n);
{
	char ans;
	system("cls");
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
	futuro(ans);
	else if(ans=='n')
	{
		printf("Te entiendo, el futuro no es para mentes fragiles\n");
		system("pause");
		printf("Intuyo que nos volveremos a ver pronto...\n");
    }
    return 0;
}
void futuro(char ans)
{
	printf("Veo que tienes agallas\n");
int main()
	printf("Adelante, preguntame lo que quieras conocer\n");
	scanf(" %[^\n]");
	prediccion();
	system("pause");
	system("cls");
	printf("Quieres preguntarme algo mas?(s/cualquier otra tecla)\n");
	scanf(" %c", &ans);
    if(ans=='s')
    futuro(ans);
    else
    printf("Espero haberte servido de mucho, nos veremos en otro momento\n");
}
int prediccion()
{
	FILE *pf;
	string res[21];
	int i;
	srand(time(NULL));
	i=rand()%20+0;
	lecturafichero(pf, res, 21);
	printf("%s\n",res[i].string);
	return 1;
}
int lecturafichero(FILE *pf, string *res, int n)
{
	int i;
	char x;
	pf=fopen("bola_del_8.txt","r");
	if(pf==NULL)
	{
		printf("error: no se ha podido abrir el fichero\n");
		return 0;
	}
	for(i=0;i<n;i++)
	{
		fscanf(pf," %400[^\n]",res[i].string);	
	}
	fclose(pf);
	return 1;	
}
