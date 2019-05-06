#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include"procastLyb.h"
//usados en Procrastinador 3000(programa central)
int ingreso(usuario *iz)
{
	FILE *p; usuario usuario[4];
	int i,j;char aux[20], res;
	p=fopen("usuarios.txt","r");
	for(i=0;i<4;i++)
	{
		fscanf(p,"%s\t%i\t%i\t%i\t%i\t%i\n", 
		aux,&usuario[i].bola,&usuario[i].combate,&usuario[i].cunhado,&usuario[i].recetario,&usuario[i].tesoro);
		strcpy(usuario[i].name,aux);
	}
	fclose(p);
	printf("Aqui estan los usuarios actuales:\n");
	for(i=0;i<4;i++)
	{
		printf("%i: %s:\n\tbola del 8cho:%i\n\tcombate:%i\n\tcunhado:%i\n\trecetario:%i\n\ttesoro:%i\n",
			i+1,usuario[i].name,usuario[i].bola,usuario[i].combate,usuario[i].cunhado,usuario[i].recetario,usuario[i].tesoro);
	}
	printf("Quieres seleccionar alguno de ellos, o por el contrario quieres reescribir alguno de ellos?(s/r)\n");
	do
	{
		scanf(" %c",&res);
		if(res=='s')
		{
			do
			{
				printf("Elija el numero que pertenece a tu usuario: ");
				scanf("%i",&j);
				i=j-1;
				printf("El usuario seleccionado es: %s\n",usuario[i].name);
				printf("Seguro que quiere elegir ese?(s/n): ");
				scanf(" %c",&res);
		    }
		    while(res!='s');
		}
		else if(res=='r')
		{
			do
			{
				printf("Seleccione sobre que usuario desea sobreescribir: ");
				scanf("%i",&j);
				i=j-1;
				printf("Seguro que desea eleminar el usuario: %s para siempre?(s/n)\n",usuario[i].name);
				scanf(" %c",&res);
			}
			while(res!='s');
			printf("seleccione el nombre que quiera tener:\n");
			scanf(" %s[^\n]", aux);
			strcpy(usuario[i].name,aux);
			printf("%i: %s:\n\tbola del 8cho:%i\n\tcombate:%i\n\tcunhado:%i\n\trecetario:%i\n\ttesoro:%i\n",
			1+i,usuario[i].name,usuario[i].bola=0,usuario[i].combate=0,usuario[i].cunhado=0,usuario[i].recetario=0,usuario[i].tesoro=0);
		}
		else if((res!='s')&&(res!='r'))
		{
			printf("No te he entendido\n");
			printf("Repita su respuesta por favor\n");
			res='h';
		}
	}
	while(res=='h');
	*iz=usuario[i];
	return i;
}
void registro(usuario iz, int io)
{
	FILE *p; usuario usuario[4];
	char aux[20]; int i;
	p=fopen("usuarios.txt","r");
	for(i=0;i<4;i++)
	{
		fscanf(p,"%s\t%i\t%i\t%i\t%i\t%i\n", 
		aux,&usuario[i].bola,&usuario[i].combate,&usuario[i].cunhado,&usuario[i].recetario,&usuario[i].tesoro);
		strcpy(usuario[i].name,aux);
	}
	fclose(p);
	p=fopen("usuarios.txt", "w");
	usuario[io]=iz;
	for(i=0;i<4;i++)
	{
		fprintf(p,"%s\t%i\t%i\t%i\t%i\t%i\n",
		usuario[i].name,usuario[i].bola,usuario[i].combate,usuario[i].cunhado,usuario[i].recetario,usuario[i].tesoro);
	}
	fclose(p);
}
int boladelocho()
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
//Usados en Bola del 8cho
void futuro(char ans)
{
	printf("Veo que tienes agallas\n");
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
