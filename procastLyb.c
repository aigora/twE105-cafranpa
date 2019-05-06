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
void combate()
{
	int yo, el, defensayo, defensael;
	int danho1, danho2, espada, garras, pocion=3, n, curas, w;
	char s;
	//Generamos una semilla para los numeros aleatorios
	srand(time(NULL));
	do	
	{	
		printf("Instrucciones:\nTanto tu como el monstruo teneis 4 'habilidades', por ponerles un nombre.\nLos puntos de ataque, los puntos de danho, los puntos de vida y la defensa.\nLos puntos de ataque y de danho se generan aleatoreamente cada turno.\nSi tus puntos de ataque son iguales o superiores a la defensa del enemigo, le\nquitaras 'x' puntos de danho  sus puntos de vida\n\n");
		yo=70;
		el=80;
		printf("Aparece un enemigo, preparate para el combate \n");
		//Se repite hasta que uno de los dos valores baje a 0 o menos
		while(yo>0&&el>0)
		{
			//Asignamos los valores, calculados con las funciones, que estan definidas al final
			espada=golpe(espada, 8);
			garras=golpe(garras, 5);
			danho1=danhoyo(danho1, 5);
			danho2=danhoel(danho2, 3);
			curas=pcn(curas);
			defensayo=15;
			defensael=18;
			if((w==4||w==5))
			garras+=10;
			else if(w==6)
			danho2=danho2*2;
			else
			garras=golpe(garras, 5);
			printf("\n\n");
			system("pause");
			printf("\n\n");
			//Turno del jugador
			if(yo>0)
			{
				//El usuario ve las opciones, y escoge una
				printf("Es tu turno, que quieres hacer? Tienes %i puntos de vida y %i puntos de defensa\n", yo, defensayo);
				printf("Y el enemigo tiene %i puntos de vida y %i puntos de defensa\n", el, defensael);
				printf("(1)Atacar\n(2)Intentar esquivar\n(3)Tomar una pocion. Te quedan %i\n(4)Intentar defenderte\n", pocion);
				//Nos asegura que escoge un numero entre los parametros dados		
				do
				{
					scanf("%i", &n);
				}
				while(n<1||n>4);
				switch (n)
					{
					//Ataque
					case 1:
						if((espada<defensael)&&(espada-8!=20))
							printf("Intentas atacar, pero no le das porque has sacado un %i\n ", espada);
						else if(espada-8==20)
						{
							danho1=danho1*2;
							printf("Golpe critico! Le has quitado %i puntos de vida\n", danho1);
							el-=danho1;
						}
						else
						{
							printf("Le has dado con un %i, le has hecho %i puntos de danho\n",espada, danho1);	
							el-=danho1;
						}
						break;
					//Esquiva
					case 2: 
						defensayo+=5;
						printf("Te centras en esquivar, tu defensa aumenta a %i\n", defensayo);
						break;
					//Curas
					case 3:
						if(pocion>0)
						{
							printf("Te tomas una pocion, te sientes mas fuerte\n");	
							yo+=curas;
							printf("Tu vida es ahora igual a %i\n", yo);
							pocion--;
						}
						else
							printf("Pierdes tu turno buscando pociones, pero no encuentras ninguna\n");
							break;
						//Defensa	
						case 4:
							danho2=danho2/2;
							printf("Te preparas para recibir un golpe. El sigiente ataque te hara menos danho\n");
							break;		
				}		
			}
			printf("\n\n");
			system("pause");
			printf("\n\n");
			//Turno del monstruo
			if(el>0)
			{
				//El monstruo escogera que hacer generando un numero aleatorio. Algunas de sus opciones aumentan su da?o y
				//punteria el turno siguiente.Esto previene que el monstruo escoja dos de esas opciones seguidas
				if((w==4)||(w==5)||(w==6))
				{
					//Generamos otra vez un numero aleatorio para evitar entrar en bucle, el siguiente sera un ataque si o si
					w= rand() % 3 + 1;
					if((garras<defensayo)&&(garras-5!=20))
							printf("\n\n\n\nIntenta atacarte, pero le esquivas porque ha sacado un %i\n ", garras);
						else if(garras-5==20)
						{
							danho2=danho2*2;
							printf("Golpe critico! Te ha quitado %i puntos de vida\n", danho2);
							yo-=danho2;
						}
						else
						{
							printf("Te ha dado con un %i, te han hecho %i puntos de danho\n", garras, danho2);
							yo-=danho2;
						}		
				}
				else
				{
					//Genera un numero aleatorio que dictara las acciones del monstruo
					w= rand() % 6 + 1;
					switch(w)
					{
						//Ataque
						case 1:
						case 2:
						case 3:
							if((garras<defensayo)&&(garras-5!=20))
								printf("\n\n\n\nIntenta atacarte, pero le esquivas porque ha sacado un %i\n ", garras);
							else if(garras-5==20)
							{
								danho2=danho2*2;
								printf("Golpe critico! Te ha quitado %i puntos de vida\n", danho2);
								yo-=danho2;
							}
							else
							{
								printf("Te ha dado con un %i, te han hecho %i puntos de danho\n", garras, danho2);
								yo-=danho2;
							}
							break;
						//Mejora de punteria
						case 4:
						case 5:
							printf("El monstruo esta concentrandose en apuntar\n");
							break;
						//Aumento de da?o
						case 6:
							printf("El monstruo se esta preparando para hacer un ataque muy fuerte\n");
							break;
					}
				}
			}
			system("pause");
			system("cls");
		}
		printf("\n Has %s (s)? \n ", yo>0? "ganado, quieres jugar otra vez":"perdido, quieres la revancha");
		scanf("%s", &s);
	}
	while(s=='s');
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
int golpe(int b, int h)
{	
	b= rand() % 20 + 1;
	b+=h;
	return b;
}
int danhoel(int b, int h)
{
	int f,j;	
	f= rand() % 8 + 1;
	j= rand() % 8 + 1;
	b=f+j+h;
	return b;
}
int danhoyo(int b, int h)
{
	int f,j;	
	f = rand() % 10 + 1;
	j= rand() % 10 + 1;
	b=j+f+h;
	return b;
}
int pcn(int b)
{
	int f, j;	
	f= rand() % 8 + 1;
	j= rand() % 8 + 1;
	b=f+j+4;
	return b;
}
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
