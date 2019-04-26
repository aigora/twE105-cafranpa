#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include"myLib.h"
int main()
{
  int op, i=0;
  char s;
  typedef struct
  {
  	char nombre[30];
  	int edad;
  	char sexo;
  	int j1,j2,j3;//...
  }usuario;
	//el programa pide al usuario que se identifique 
  do
  {
  	usuario us;
	printf("Buenos dias!! Bienvenido a nuestro programa. Te presentamos el 'PROCRASTINADOR 3000'\n");
    printf("Antes de todo cuentame como te llamas\n");
    scanf("%[^\n]", us.nombre);
    system("cls");
    printf("Y ahora tu edad\n");
    scanf("%i[^\n]",&us.edad);
    system("cls");
    printf("Y por ultimo tu sexo\n");
    scanf("%[^\n]", us.sexo);
    system("cls");
    printf("Muy bien ");
    while(us.nombre[i]!='\0')
    {
    	printf("%c", us.nombre[i]);
    	i++;
	}
	printf(" vamos a divertirnos un rato\n");
    //Aqui vamos a comenzar el switch case, pidiendo al usuario que escoja entre 6 opciones, cada una asignada con un numero
    printf("Escoge entre una de las siguientes opciones:\n1)'Bola de ocho':Hazme una pregunta de si o no y te dare una respuesta\n2)Busqueda del tesoro\n3)Calculdora\n4)Un combate por turnos\n5)cunhado\n");  
  	do
  	{
  		scanf(" %i",&op);
  	}
  	while(op<1||op>7);
  	switch(op)
    	{
    		case 1:
    			system("cls");
      			boladelocho();
     			break;
    		case 2:
      			system("cls");
      			busquedadeltesoro();
      			break;
    		case 3:
      			printf("3)Calculdora\n");
      			break;
			case 4:
				system("cls");
     			combate();
      			break;
			case 5:
				system("cls");
      			cunhado();
      			break;
    	}
    printf("Desea repetir el programa? Pulse 's'\n");
    scanf("%s",&s);
  }
 while(s=='s');
return 0;
}
