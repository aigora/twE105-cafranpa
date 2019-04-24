#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include"myLib.h"
//Funciones secundarios
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
void futuro()
{
	char ans='s';
	printf("Veo que tienes agallas\n");
	system("pause");
	printf("Adelante, preguntame lo que quieras conocer(es necesario terminar con una '?')\n");
	scanf(" %c");
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
void prediccion()
{
	srand(time(NULL));
	int i;
	i=rand()%21+1;
	switch (i)
	{
		case 1:
		{
			printf("En mi opinion, si\n");
			break;
		}	
		case 2:	
		{
			printf("Es cierto\n");
			break;
		}		
		case 3:
		{
			printf("Es decididamente asi\n");
			break;			
		}	
		case 4:
		{
			printf("Probablemente\n");
			break;			
		}	
		case 5:
		{
			printf("Buen proposito\n");
			break;			
		}	
		case 6:
		{
			printf("Todo apunta a que si\n");
			break;			
		}					
		case 7:
		{
			printf("Sin duda\n");
			break;			
		}			
		case 8:
		{
			printf("Si\n");
			break;			
		}			
		case 9:
		{
			printf("Si, definitivamente\n");
			break;			
		}			
		case 10:
		{
			printf("Debes confiar en ello\n");
			break;			
		}			
		case 11:
		{
			printf("Respuesta vaga, vuelve a intentarlo\n");
			break;			
		}			
		case 12:
		{
			printf("Pregunta en otro momento\n");
			break;			
		}			
		case 13:
		{
			printf("Sera mejor que no te lo diga ahora\n");
			break;			
		}			
		case 14:
		{
			printf("No puedo predecirlo ahora\n");
			break;			
		}
		case 15:
		{
			printf("Concentrate y vuelve a preguntar\n");
			break;			
		}			
		case 16:
		{
			printf("Puede ser\n");
			break;			
		}		
		case 17:
		{
			printf("No cuentes con ello\n");
			break;			
		}			
		case 18:
		{
			printf("Mi respuesta es no\n");
			break;			
		}			
		case 19:
		{
			printf("Mis fuentes dicen que no\n");
			break;			
		}
		case 20:
		{
			printf("Mis perspectivas no son buenas\n");
			break;			
		}	
		case 21:
		{
			printf("Muy dudoso\n");
			break;			
		}				
	}
}
void enterrar(posicion *tesoro)
{
	posicion *res=tesoro;
	srand(time(NULL));
	res->x=rand() % 10+0;
	res->y=rand() % 10+0;
}
void busqueda(posicion *tesoro, posicion *usuario)
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
				enterrar(tesoro);
				busqueda(tesoro,usuario);
			}
			else
			{
				printf("Gracias por jugar\n");
				exit(-1);
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
				break;//hacer funcion void avancehorizontal(int n, posicion *usuario)
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
	printf("QUieres jugar otra vez?(s/n)\n");
	scanf("%s",&ans);
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
	return -1;
}
void avancevertical(int n, posicion *usuario)
{
	posicion *u=usuario;
	u->y+=n;
	if((u->y>10)||(u->y<0))
	{
		printf("Error:te has salido del tablero\n");
		exit(1);
	}
}
void avancehorizontal(int n, posicion *usuario)
{
	posicion *u=usuario;
	u->x+=n;
	if((u->x>10)||(u->x<0))
	{
		printf("Error:te has salido del tablero\n");
		exit(1);
	}
}
//Funciones centrales
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
			//Esto esta relacionado con el turno del monstruo, pero por ahora no funciona
			if((w==4||w==5))
			garras+=10;
			else if(w==6)
			danho2=danho2*2;
			else
			{
			garras=golpe(garras, 5);
			danho2=danho2*2;
			}
			printf("\n\n");
			system("pause");
			printf("\n\n");
			//Turno del jugador
			if(yo>0)
			{
				//El usuario ve las opciones, y escoge una
				printf("Es tu turno, que quieres hacer? Tienes %i puntos de vida y %i puntos de defensa\n", yo, defensayo);
				printf("Y el enemigo tiene %i puntos de vida, %i puntos de ataque y %i puntos de defensa\n", el, garras, defensael);
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
				//El monstruo escogera que hacer generando un numero aleatorio. Algunas de sus opciones aumentan su daño y
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
					//Aumento de daño
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
void cunhado()
{
//https://www.europapress.es/desconecta/memes/noticia-cunadismo-nivel-chistes-malos-contar-noche-nochevieja-20161230171716.html chistes
    int i=0, w, d;
  	char  eleccion[11], c[11] = "Chiste", a[11] = "Adivinanza", s, respuesta[20], a1[]="dedos", a2[]="paso de zebra", a3[]="tijeras";
  	srand(time(NULL));
  do
  {	
  	system("cls");
  	printf ("\nBienvenido al programa cunhado. Por favor, escribe lo que prefieras:\nChiste\nAdivinanza\n");
  	scanf ("%10s", eleccion);
  	while ((strcmp(c, eleccion)!=0)&&(strcmp(a, eleccion)!=0))
  	{
  		printf("Esa respuesta no es valida. Asegurate que no te olvidas las mayusculas.\n");
  		scanf ("%10s", eleccion);
  	}
  	system("cls");
  	if (strcmp(a, eleccion)!=0)
  	{
  		printf("Has escogido los Chistes! Aqui estan todos");
  		sleep(3);
  		printf("\n(1)El de Voldemort\n(2)El de cavar\n(3)El del banco\n(4)El de papa noel\n(5)El de la roca\n(6)El de ET\n(7)El de ingles\n(8)Otro de ingles\n(9)El de la pintura\n(10)El de la pelicula\n(11)El del amor\n(12)El de las fresas\n(13)El del alcohol\n(14)El del adjetivo\n(15)El de los seguros\n(16)El del barco\n(17)El de historia\n(18)El de informatica\n(19)El ultimo de ingles\n(20)El de la foca\n(21)No puedo elegir\n");
  		do
		scanf("%i", &w);
		while(w<1||w>21);
  		if (w==21)
  		{
  			w=golpe(w,0);
		}
		system("cls");
		switch(w)
		{
			case 1:
				printf("-Como se llamaria Voldemort si fuera cantante de reggaeton?\n+Como?\n-Quien ya tu sabe");
			break;
			case 2:
				printf("Yo cavo\nTu cavas\nEl cava\nElla cava\nTodos cavan\nNo sera un  poema bonito, pero es profundo");
			break;
			case 3:
				printf("-Soy la Jessy\n+Si?\n-Quiero hacer una domiciliacion\n+Numero de cuenta?\n-Aqui tiene\n+Y el IBAN?\n-Fuera, esperandome en la moto");
			break;
			case 4:
				printf("-Sabes que coche usa Papa Noel?\n+Facil, un Renol");
			break;
			case 5:
				printf("Se abre el telon y sale una roca muy pequenha\nSe cierra el telon. Como se llama la pelicula?\nRocky");
			break;
			case 6:
				printf("-Quien es el padre de ET\n+Donette");
			break;
			case 7:
				printf("-Si sabe ingles, digame como se dice 'mirar'\n+Look\n-Podria construir una frase?\n+Look, yo soy tu padre");
			break;
			case 8:
				printf("-He encontrado un trabajo como profesor de ingles\n+Si? Trabajo estable?\n-No, trabajo es 'job', mesa es 'table'");
			break;
			case 9:
				printf("-Por que te banhas con pintura azul?\n+Por que mi novia vive lejos\n-Y eso que tine que ver?\nQue quiero estar azulado");
			break;
			case 10:
				printf("-Que peli vas a ver\n+Tiburones asesinos\n-Y de ue va?\n+De un caballo que quiere ser cantante");
			break;
			case 11:
				printf("-No se si conseguire enamorar a esta chica\n+Tu tienes vacas y ovejas?\n-Si\n+Pues ya tienes mucho ganado");
			break;
			case 12:
				printf("-Donde vas, Anonio?\n+A por estiercol, para las fresas\n-No puedes comerlas con nata, como todo el mundo?");
			break;
			case 13:
				printf("-Tu traes las birras, tu el ginebra, tu la comida...\n+Y yo?\n-Tu ron\n+De Suchard?\n-Tu no vienes");
			break;
			case 14:
				printf("-Papa, que significa inodoro?\n+Que no huele\n-Con razon se llama el primo Isidoro\n");
			break;
			case 15:
				printf("+Hola, es esta la agencia de seguros?\n-Si\n+Seguro?\n-Siiii\n+Seguro, seguro?\n-Que si conho, que queria?\n+Asegurarme\n");
			break;
			case 16:
				printf("+Capitan, su mujer esta asomada por la ventana del barco\n-Escotillan\n+Me parecia feo decirselo, pero si, mucho\n");
			break;
			case 17:
				printf("+Espero que hayas estudiado para el examen\n-Por suspuesto\n+Hablame del tercer Reich\n-El de la mirra?\n");
			break;
			case 18:
				printf("Están 1023 terabytes en una fiesta, llega uno más y dice...\nNos hacemos un peta?\n");
			break;
			case 19:
				printf("+Nivel de ingles?\n-Alto\n+Como es 'La proxima semana'\n-The Colacao\n+Huh?\n-Ah, no... The Nesquick\n+Esta bien, vaya a prepararse uno\n");
			break;
			case 20:
				printf("+Que le dice a la foca de su madre?\n-I love you, mother foca\n");
			break;
		}
	}
	else
	{
		printf("Has elegido las adivinanzas! Te voy a ir poniendo adivinanzas, cada vez mas dificiles. Ganaras si las adivinas todas antes de quedarte sin intentos. Escribe en minusculas\n");
		sleep(3);
		printf("Primera adivinanza:\nCinco hermanos muy unidos que no se pueden mirar, cuando riñen aunque quieras no los puedes separar.");
		d=5;
		do
		{
			printf("\nTe quedan %i intentos\n", d);
			scanf ("%20s", respuesta);
			d--;
		}
		while (strcmp(a1, respuesta) != 0&&d>0);
		if (d>0)
		{
			system("cls");
			printf("Segunda adivinanza:\nSoy animal en el campo, soy pintura en la ciudad y mi nombre como dice Braulio en esta calle esta.");
			d=5;
			do
			{
				printf("\nTe quedan %i intentos\n", d);
				scanf(" %20[^\n]", respuesta);
				d--;
			}
			while (strcmp(a2, respuesta) != 0&&d>0);
			if(d>0)
			{
				system("cls");
				printf("Ultima adivinanza:\nDos hermanas diligentes que caminan al compas, con el pico por delante y los ojos por detras.");
				d=5;
				do
				{
					printf("\nTe quedan %i intentos\n", d);
					scanf(" %20s", respuesta);
					d--;
				}	
				while (strcmp(a3, respuesta) != 0&&d>0);
				if(d=0)
				d=-1;
					
			}
			else
			d=-1;
		}
		else
		d=-1;
	}	
	printf("\nHas %s!, Repetimos (s)? \n ", d!=-1? "ganado":"perdido");
	scanf(" %c", &s);
  }
  while(s=='s');
}
void boladelocho()
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
	futuro();
	else if(ans=='n')
	{
		printf("Te entiendo, el futuro no es para mentes fragiles\n");
		system("pause");
		printf("Intuyo que nos volveremos a ver pronto...\n");
    }
}
void busquedadeltesoro()
{
	int cnt;
	posicion tesoro, usuario;
	enterrar(&tesoro);
	printf("Bienvenido a 'la busqueda del tesoro'\n");
	sleep(3);
	system("cls");
	printf("Se ha enterrado un tesoro en un mapa de 10*10\n");
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
}
