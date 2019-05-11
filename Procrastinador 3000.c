#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"procastLyb.h"
int main()
{
	usuario iz;
	//genero una variable que almacene el usuario seleccionado
	//el la funcion "ingreso"
	int i,vg;
	//contador y una variable de respuesta
	char res;
	//variable de respuesta
	printf("Bienvenido al Procrastinador 3000\n");
	printf("Antes de empezar, procede con la seleccion de usuario\n");
	system("pause");
	system("cls");
	i=ingreso(&iz);
	//esta funcion nos permite almacenar el usuario en la variable iz
	sleep(1);
	system("cls");
	printf("Muy bien %s, como habras podido intuir, soy un bot que te ayudara a pasar el rato\n",iz.name);
	sleep(1);
	printf("Para ello dispongo de una serie de minijuegos y herramientas\n");
	printf("Vamos a ver cuales son\n");
	sleep(1);
	system("pause");
	system("cls");
	printf("Programas:\n\t1:Bola del ocho\n\t2:Combate por turnos\n\t3:Cunhado digital\n\t4:Hundir la flota\n\t5:Questionary\n\t6:Recetario para celiacos\n\t7:Busqueda del tesoro\n");
	printf("Elija: ");
	do
	{
		scanf("%i", &vg);
		//Elige el minijuego que quiera jugar el usuario
		switch(vg)
		{
			case 1:
				boladelocho();
				//ejecuta el programa concreto
				iz.bola++;
				//aumenta en uno el contador del juego en concreto
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
				iz.flota++;
				break;
			case 5:
				//...
				iz.questionary++;
				break;		
			case 6:
				recetario();
				iz.recetario++;
				break;
			case 7:
				busquedatesoro();
				iz.tesoro++;
				break;
	
			default:
				printf("No tengo esa opcion, vuelva a elegir: ");
				res='r';
				break;				
		}
		registro(iz,i);
		//analiza los datos que han cambiado en el registro
		//para despues cambiarlos
		system("cls");
		printf("Eso fue divertido, quieres elegir otro programa(o), o quieres salir del programa(s)?(o/s)\n");
		do
		{
			scanf(" %c",&res);
			//analiza la respuesta para realizar una accion determinado
			res=mins(res);
			if(res=='o')
			{
				res='r';
				system("cls");
				printf("Muy bien, aqui tienes los programas:\n");
				printf("\t1:Bola del ocho\n\t2:Combate por turnos\n\t3:Cunhado digital\n\t4:Hundir la flota\n\t5:Recetario para celiacos\n\t6:Busqueda del tesoro\n");		
			}
			//permite al usuario jugar a otro programa
			else if(res=='s')
			{
				printf("Gracias por pasar tiempo conmigo %s\n", iz.name);
				printf("Espero volver a verte pronto\n");
				exit(-1);
			}
			//permite al usuario terminar de ejecutar el programa
			else
			{
				printf("Lo siento, no te he entendedido\n");
				printf("Quieres elegir otro programa(o), o quieres salir del programa(s)?(o/s)\n");
				res='q';
			}	
		}while(res=='q');
	}while(res=='r');
}
