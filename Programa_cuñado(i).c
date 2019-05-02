#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int golpe(int b, int h);
int main()
{
	FILE *pf;
    int i=0, w, d, f;
  	char  eleccion[11], s, respuesta[20], a1[]="DEDOS", a2[]="PASO DE ZEBRA", a3[]="TIJERAS", chistes[300];
  	srand(time(NULL));
  do
  {	
  	system("cls");
  	printf ("\nBienvenido al programa cunhado. Por favor, escribe lo que prefieras:\n1)Chiste\n2)Adivinanza\n");
  	scanf ("%i", &f);
  	while (f!=1&&f!=2)
  	{
  		printf("Escribe un 1 o un 2, por favor.\n");
  		scanf ("%i", &f);
  	}
  	system("cls");
  	if (f!=2)
  	{
  		printf("Has escogido los Chistes! Aqui estan todos");
  		
  		
  		
  		
  		pf = fopen("chistes.txt", "r");
		fscanf(pf, "%299[^\n]", chistes);
		fclose(pf);
  		printf("%s", chistes);
  		
  		
  		
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
		printf("Has elegido las adivinanzas! Te voy a ir poniendo adivinanzas, cada vez mas dificiles. Ganaras si las adivinas todas antes de quedarte sin intentos.\n");
		sleep(3);
		printf("Primera adivinanza:\nCinco hermanos muy unidos que no se pueden mirar, cuando riñen aunque quieras no los puedes separar.");
		d=5;
		do
		{
			printf("\nTe quedan %i intentos\n", d);
			scanf (" %20s", respuesta);
			_strupr(respuesta);
			d--;
		}
		while (strcmp(a1, respuesta) != 0&&d>0);
		if (d>=0)
		{
			system("cls");
			printf("Segunda adivinanza:\nSoy animal en el campo, soy pintura en la ciudad y mi nombre como dice Braulio en esta calle esta.");
			d=5;
			do
			{
				printf("\nTe quedan %i intentos\n", d);
				scanf(" %20[^\n]\n", respuesta);
				_strupr(respuesta);
				d--;
			}
			while (strcmp(a2, respuesta) != 0&&d>0);
			if(d>=0)
			{
				system("cls");
				printf("Ultima adivinanza:\nDos hermanas diligentes que caminan al compas, con el pico por delante y los ojos por detras.");
				d=5;
				do
				{
					printf("\nTe quedan %i intentos\n", d);
					scanf(" %20s\n", respuesta);
					_strupr(respuesta);	
					d--;
				}	
				while (strcmp(a3, respuesta) != 0&&d>0);
				if(d<0)
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


int golpe(int b, int h)
{
	
	
	b= rand() % 20 + 1;
	b+=h;
	return b;
}
