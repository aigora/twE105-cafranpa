#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int golpe(int b, int h);
int main()
{
  do//https://www.europapress.es/desconecta/memes/noticia-cunadismo-nivel-chistes-malos-contar-noche-nochevieja-20161230171716.html chistes
  {	
  	int i=0, w, d;
  	char  eleccion[11], c[11] = "Chiste", a[11] = "Adivinanza", s;
  	srand(time(NULL));
  	printf ("Bienvenido al programa cunhado. Por favor, escribe lo que prefieras:\nChiste\nAdivinanza\n");
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
  		scanf("%i", w);
  		if (w==21)
  		{
  			golpe(w,0);
		}
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
				
			break;
			case 16:
			break;
			case 17:
			break;
			case 18:
			break;
			case 19:
			break;
			case 20:
			break;
		}
	}
	else
	{
		
	}
  }
  while(0==0);
  
}


int golpe(int b, int h)
{
	
	
	b= rand() % 20 + 1;
	b+=h;
	return b;
}
