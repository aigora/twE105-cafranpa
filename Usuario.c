#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
	char name[20];
	int bola, combate, cunhado, recetario, tesoro;
}usuario;
int ingreso(usuario *iz);
void registro(usuario iz, int io);
int main()
{
	usuario iz;
	int i;
	i=ingreso(&iz);
	system("cls");
	printf("%s:\n\tbola del 8cho:%i\n\tcombate:%i\n\tcunhado:%i\n\trecetario:%i\n\ttesoro:%i\n",
		iz.name,iz.bola,iz.combate,iz.cunhado,iz.recetario,iz.tesoro);
	printf("%s:\n\tbola del 8cho:%i\n\tcombate:%i\n\tcunhado:%i\n\trecetario:%i\n\ttesoro:%i\n",
		iz.name,iz.bola,iz.combate,iz.cunhado,iz.recetario,iz.tesoro);
	registro(iz,i);	
}
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
	printf("Quieres seleccionar alguno de ellos, o por el contrario quieres reescribir los datos?(s/r)\n");
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
