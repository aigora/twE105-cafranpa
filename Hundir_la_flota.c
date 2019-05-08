#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void imprime_tablero(char M[9][9]);
void llenar_tablero(char M[9][9]);
int main()
{
	char tablero1[9][9], s, d;
	int crucero=2, destructor=3, barco, y, x;
	do
	{
		system("cls");
		llenar_tablero(tablero1);
		printf("Bienvenido al programa de 'Hundir la flota'\n");
		printf("Permite que te explique las normas:\n");
		sleep(1);
		printf("\nMuy bien! Ahora vamos a probar a llenar el tablero con barcos\n");
		printf("Lo mejor sera que decidas que tipo de barco quieres colocar primero:\n");
		do
		{
			printf("1)Crucero: Ocupa 3 espacios, tienes %i\n2)Destructor: Ocupa 2 espacios\n", crucero, destructor);
			do
			scanf("%i", &barco);
			while(barco!=1&&barco!=2);
			switch(barco)
			{
				case 1:
					system("cls");
					printf("Has escogido el crucero\n");
					printf("Por favor, escoge una coordenada desde la que poner tu barco, y una direccion con las teclas 'wasd'.\n\nPor ejemplo si yo escogo x4, y1, y d, el tablero pasa de estar asi:\n\n");
					imprime_tablero(tablero1);
					tablero1[0][3]='D';
					tablero1[0][4]='D';
					printf("\n\nY acaba asi:\n\n");
					imprime_tablero(tablero1);
					llenar_tablero(tablero1);
					printf("\nDime un numero x (1-9):\n");
					do
					scanf("%i", &x);
					while((x<1)||(x>9));
					printf("\nAhora dime un numero y (1-9):\n");
					do
					scanf("%i", &y);
					while((y<1)||(y>9));
					printf("\nY finalmente, una direccion (w, a, s, d):\n");
					do
					scanf("%c", &d);
					while((d!='w')&&(d!='a')&&(d!='s')&&(d!='d'));
					x=x-1;
					y=y-1;
					tablero1[y][x]='D';
					if (d='d')
					{
						
					}
					imprime_tablero(tablero1);
					
			}
		}
		while (crucero!=0&&destructor!=0);
			
				
	scanf(" %c", &s);
	}
	while(s=='s');
	return 0;
}

void imprime_tablero(char M[9][9])
{
int i, j;
printf("  1  2  3  4  5  6  7  8  9  \n");
for(i = 0; i < 9; i++)
{
	printf("%i", i+1);
	for(j = 0; j < 9; j++)
		printf(" %c ", M[i][j]);
printf("\n");
}
}

void llenar_tablero(char M[9][9])
{
int i, j;

for(i = 0; i < 9; i++)
{
	for(j = 0; j < 9; j++)
	M[i][j]='-';
}
}

