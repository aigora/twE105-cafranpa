#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"procastLyb.h"
int main()
{
	usuario iz;
	int i,vg;
	char res;
	printf("Bienvenido al Procrastinador 3000\n");
	printf("Antes de empezar, procede con la seleccion de usuario\n");
	system("pause");
	system("cls");
	i=ingreso(&iz);//linea 7 procastLyb.c
	sleep(1);
	system("cls");
	printf("Muy bien %s, como habras podido intuir, soy un bot que te ayudara a pasar el rato\n",iz.name);
	sleep(1);
	printf("Para ello dispongo de una serie de minijuegos y herramientas\n");
	printf("Vamos a ver cuales son\n");
	sleep(1);
	system("pause");
	system("cls");
	printf("Programas:\n\t1:Bola del ocho\n\t2:Combate por turnos\n\t3:Cunhado digital\n\t4:Recetario para celiacos\n\t5:Busqueda del tesoro\n");
	printf("Elija: ");
	do
	{
		scanf("%i", &vg);
		switch(vg)
		{
			case 1:
				boladelocho();
				iz.bola++;
				break;
			case 2:
				combate();
				iz.combate++;
				break;
			case 3:
				//...
				iz.cunhado++;
				break;
			case 4:
				//...
				iz.recetario++;
				break;
			case 5:
				busquedatesoro();
				iz.tesoro++;
				break;
			default:
				printf("No tengo esa opcion, vuelva a elegir: ");
				res='r';
				break;				
		}
		registro(iz,i);//linea 70 procastLyb.c
		system("cls");
		printf("Eso fue divertido, quieres elegir otro programa(o), o quieres salir del programa(s)?(o/s)\n");
		do
		{
			scanf(" %c",&res);
			res=mins(res);
			printf("%c", res);
			if(res=='o')
			{
				res='r';
				system("cls");
				printf("Muy bien, aqui tienes los programas:\n");
				printf("\t1:Bola del ocho\n\t2:Combate por turnos\n\t3:Cunhado digital\n\t4:Recetario para celiacos\n\t5:Busqueda del tesoro\n");		
			}
			else if(res=='s')
			{
				printf("Gracias por pasar tiempo conmigo %s\n", iz.name);
				printf("Espero volver a verte pronto\n");
				exit(-1);
			}
			else
			{
				printf("Lo siento, no te he entendedido\n");
				printf("Quieres elegir otro programa(o), o quieres salir del programa(s)?(o/s)\n");
				res='q';
			}	
		}while(res=='q');
	}while(res=='r');
}
