#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include"procastLyb.h"
int main()
{
	usuario iz;
	int i;
	i=ingreso(&iz);
	system("cls");
	printf("%s:\n\tbola del 8cho:%i\n\tcombate:%i\n\tcunhado:%i\n\trecetario:%i\n\ttesoro:%i\n",
		iz.name,iz.bola,iz.combate,iz.cunhado,iz.recetario,iz.tesoro);
	printf("%s:\n\tbola del 8cho:%i\n\tcombate:%i\n\tcunhado:%i\n\trecetario:%i\n\ttesoro:%i\n",
		iz.name,iz.bola,iz.combate,iz.cunhado,iz.recetario,iz.tesoro);
	registro(iz,i);	
}
