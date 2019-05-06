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
//...
int busquedatesoro()
{
	int cnt;
	posicion tesoro, usuario;
	system("cls");
	enterrar(&tesoro);
	printf("Bienvenido a 'la busqueda del tesoro'\n");
	sleep(3);
	system("cls");
	printf("Se ha enterrado un tesoro en un mapa de 11*11\n");
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
//Usados en Combate por turnos
//...
//Usados en Cunhado
//...
//Usados en Recetario
//...
//Usados en Busqueda del tesoro
void enterrar(posicion *tesoro)
{
	posicion *res=tesoro;
	srand(time(NULL));
	res->x=rand() % 10+0;
	res->y=rand() % 10+0;
}
int busqueda(posicion *tesoro, posicion *usuario)
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
				system("cls");
				enterrar(tesoro);
				busqueda(tesoro,usuario);
			}
			else
			{
				system("cls");
				printf("Gracias por jugar\n");
				return 0;
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
				break;
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
	printf("Quieres jugar otra vez?(s/n)\n");
	scanf(" %c",&ans);
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
	return 1;
}
int avancevertical(int n, posicion *usuario)
{
	posicion *u=usuario;
	u->y+=n;
	if((u->y>10)||(u->y<0))
	{
		printf("Error:te has salido del tablero\n");
		u->y-=n;
		return 0;
	}
	return 1;
}
int avancehorizontal(int n, posicion *usuario)
{
	posicion *u=usuario;
	u->x+=n;
	if((u->x>10)||(u->x<0))
	{
		printf("Error:te has salido del tablero\n");
		u->x-=n;
		return 0;
	}
	return 1;
}
