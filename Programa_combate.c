#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
//Funcion que genera un numero aleatorio + bonuses, representa la punteria
int golpe(int b, int h);
//Funciones que generan el daño del jugador y del onstruo
int danhoyo(int b, int h);
int danhoel(int b, int h);
//Genera numeros aleatorios simulando una pocion
int pcn(int b);
void main()
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
		//Dependiendo del valor de w, el monstruo atacara, apuntara, o hara mas daño en su siguiente ataque
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
