#include<stdio.h>
#include <time.h>
#include <stdlib.h>
void futuro();
void prediccion();
int main()
{
	char ans;
	printf("Hola, bienvenido a la bola del ocho\n");
	printf("Crees que estas preparado para conocer tu fortuna?(s/n)\n");
	scanf("%s", &ans);
	while((ans!='s')&&(ans!='n'))
	{
		printf("lo siento no te he entendido\n");
		printf("Crees que estas preparado para conocer tu fortuna?(si o no)\n");
		scanf("%s", &ans);
	}
	if(ans=='s')
	futuro();
	else if(ans=='n')
	{
		printf("Te entiendo, el futuro no es para mentes fragiles\n");
		system("pause");
		printf("Intuyo que nos volveremos a ver pronto...\n");
    }
    return 0;
}
void futuro()
{
	char r[300], ans;
	printf("Veo que tienes agallas\n");
	system("pause");
	printf("Adelante, preguntame lo que quieras conocer(es necesario terminar con una '?')\n");
	scanf("%300[^?]", r);//funciona pero con un apa�o
	prediccion();
	system("pause");
	printf("Quieres preguntarme algo mas?(s/cualquier otra tecla)\n");
	scanf("%s", &ans);
    if(ans=='s')//no funciona
    futuro();
    else
    printf("Espero haberte servido mucho\n");
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
			printf("En mi opini�n, s�\n");
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
			printf("Todo apunta a que s�\n");
			break;			
		}					
		case 7:
		{
			printf("Sin duda\n");
			break;			
		}			
		case 8:
		{
			printf("S�\n");
			break;			
		}			
		case 9:
		{
			printf("S�, definitivamente\n");
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
			printf("Ser� mejor que no te lo diga ahora\n");
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
