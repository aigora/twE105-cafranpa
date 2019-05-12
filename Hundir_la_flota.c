#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//Estas funciones hace un "printf" de una matriz
void imprime_tablero(char M[9][9]);
void imprime_num(int M[9][9]);
//Estas funciones vacian las matrices, y las rellenan con "-" y "0" respectivamente
void vaciar_tablero(char M[9][9], char p);
void vaciar_num(int M[9][9], int p);
//Genera las posiciones de los barcos del ordenador
void enemigo_barcos(int M[9][9]);
//Estas tres funciones se encargan de los turnos
void turno_jugador(int m[9][9], char ti[9][9], char t1[9][9], int *u);
void turno_bot(int t0[9][9], int t2[9][9], char t1[9][9], int *u);
void turno(int t[9][9], char ti[9][9], char t1[9][9], int t0[9][9], int t2[9][9]);
int main()
{
	//Generamos una semilla para los numeros aleatorios
	srand(time(NULL));
	//Tablero1 y tableroi proporcinan informacion al jugador, la posicion de sus barcos, y si sus ataques han impactado o no
	char tablero1[9][9], tableroi[9][9], s, d;
	//Las distintas matrics aqui contienen informacion para el ordenador, sobre las posiciones de los barcos y si sus ataques fallan o no
	int destructor, submarino, barco, y, x, direccion, tablero2[9][9], tablero[9][9], tabler0[9][9], u;
	do
	{
		submarino=3;
		destructor=2;
		direccion=0;
		system("cls");
		vaciar_tablero(tableroi, '-');
		vaciar_tablero(tablero1, '-');
		vaciar_num(tablero, 0);
		vaciar_num(tablero2, 0);
		vaciar_num(tabler0, 0);
		enemigo_barcos(tablero);
		printf("Bienvenido al programa de 'Hundir la flota'");
		sleep(2);
		printf("\nAhora vamos a probar a llenar el tablero con barcos\n");
		sleep(2);
		printf("Lo mejor sera que decidas que tipo de barco quieres colocar primero:\n");
		sleep(2);
		system("cls");
		do
		{
			imprime_tablero(tablero1);
			printf("1)Destructor: Ocupa 2 espacios, tienes %i\n2)Submarino: Ocupa 1 espacio, tienes %i\n", destructor, submarino);
			do
			scanf("%i", &barco);
			while(barco!=1&&barco!=2);
			system("cls");
			switch(barco)
			{
				case 1:
					if(destructor>0)
					{
						printf("Has escogido el destructor\n");
						imprime_tablero(tablero1);
						do
						{
							//Comprueba que la coordenada escogida por el jugador no esta usada, y le enseña el tablero
							if(tablero1[y][x]!='-')
							{
								system("cls");
								printf("\nAsegurate de que en las coordenadas que has escogido no hay ya un barco\n");
								imprime_tablero(tablero1);
							}
							printf("\n\nPor favor, escoge una coordenada desde la que poner tu barco, y una direccion con las teclas 'wasd'.\n");
							printf("\nDime un numero x (1-9):\n");
							do
							scanf("%i", &x);
							while((x<1)||(x>9));
							printf("\nAhora dime un numero y (1-9):\n");
							do
							scanf("%i", &y);
							while((y<1)||(y>9));
							x=x-1;
							y=y-1;	
						}
						while(tablero1[y][x]!='-');
						tablero1[y][x]='D';
						do
						{
							//Comprueba que la coordenada escogida por el jugador no esta usada, y le enseña el tablero
							if(direccion!=0)
							{
								system("cls");
								printf("\nAsegurate de que las coordenadas que has marcado no estan ocupadas, y pertenecen al tablero\n");
								imprime_tablero(tablero1);
							}
							direccion=0;
							printf("Escoge una direccion (w a s d)\n");
							do
							scanf("%c", &d);
							while((d!='w')&&(d!='a')&&(d!='s')&&(d!='d'));
							//Esta serie de ifs comprueba que la "direccion" introducida no coloca el barco fuera del tablero
							if((d=='d')&&(x+1>8))
								direccion=-1;
							else if((d=='a')&&(x-1<0))
								direccion=-1;
							else if ((d=='w')&&(y-1<0))
								direccion=-1;
							else if ((d=='s')&&(y+1>8))
								direccion=-1;
							//Estos ifs comprueban que el espacio no esta ocupado
							else if (d=='d')
							{
								if (tablero1[y][x+1]!='-')
									direccion=-1;
								else
								{
									tablero1[y][x+1]='D';
									//Genera valores distintos para cada destructor y los asigna a una matriz
									if(destructor==2)
										tablero2[y][x+1]=1;
								else 
										tablero2[y][x+1]=2;
								}	
							}	
							else if (d=='a')
							{
								if (tablero1[y][x-1]!='-')
									direccion=-1;
								else
								{
									tablero1[y][x-1]='D';
									if(destructor==2)
										tablero2[y][x-1]=1;
									else 
										tablero2[y][x-1]=2;
								}	
							}		
							else if (d=='w')
							{
								if (tablero1[y-1][x]!='-')
									direccion=-1;
								else
								{
									tablero1[y-1][x]='D';
									if(destructor==2)
										tablero2[y-1][x]=1;
									else 
										tablero2[y-1][x]=2;
								}
							}	
							else
							{
								if (tablero1[y+1][x]!='-')
									direccion=-1;
								else
								{
									tablero1[y+1][x]='D';
									if(destructor==2)
										tablero2[y+1][x]=1;
									else 
										tablero2[y+1][x]=2;
								}
									
							}
						}
						while(direccion!=0);
						//Genera valores distintos para cada destructor y los asigna a una matriz
						if(destructor==2)
							tablero2[y][x]=1;
						else 
							tablero2[y][x]=2;
						imprime_tablero(tablero1);
						destructor--;
					}
					else
							printf("Me temo que no te quedan mas destructores\n\n");
				break;
				case 2:
					if(submarino>0)
					{
						printf("Has escogido el submarino. Como solo ocupan un espacio, no necesitas dar mas que coordenadas x e y\n");
						imprime_tablero(tablero1);
						do
						{
							if(tablero1[y][x]!='-')
							{
								//Comprueba que la coordenada escogida por el jugador no esta usada, y le enseña el tablero
								system("cls");
								printf("\nAsegurate de que en las coordenadas que has escogido no hay ya un barco\n");
								imprime_tablero(tablero1);
							}
							printf("\n\nPor favor, escoge una coordenada en la que poner tu submarino.\n");
							printf("\nDime un numero x (1-9):\n");
							do
							scanf("%i", &x);
							while((x<1)||(x>9));
							printf("\nAhora dime un numero y (1-9):\n");
							do
							scanf("%i", &y);
							while((y<1)||(y>9));
							x=x-1;
							y=y-1;	
						}
						while(tablero1[y][x]!='-');
						tablero1[y][x]='S';
						tablero2[y][x]=3;
						imprime_tablero(tablero1);
						submarino--;
					}
					else
						printf("No te quedan mas submarinos\n");
				break;		
			}
		}
		while (submarino>0||destructor>0);
	printf("\nMuy bien, ahora que ya tienes tu tablero listo, es hora de jugar\n");
	printf("\nEste tablero es en el cual se iran apuntando tus disparos, si son agua, tocado, undido, etc.\n");
	imprime_tablero(tableroi);
	system("pause");
	turno(tablero, tableroi, tablero1, tabler0, tablero2);				
	scanf(" %c", &s);
	}
	while(s=='s');
	printf("Espero volver a verte\n");
	system("pause");
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
void imprime_num(int M[9][9])
{
	int i, j;
	for(i = 0; i < 9; i++)
	{
		for(j = 0; j < 9; j++)
			printf(" %i ", M[i][j]);
	printf("\n");
	}
}
void vaciar_tablero(char M[9][9], char p)
{
int i, j;
for(i = 0; i < 9; i++)
{
	for(j = 0; j < 9; j++)
	M[i][j]=p;
}
}	
void vaciar_num(int M[9][9], int p)
{
int i, j;
for(i = 0; i < 9; i++)
{
	for(j = 0; j < 9; j++)
	M[i][j]=p;
}
}
//Casi identico a lo que hace el jugador, pero sin printfs ni scanfs	
void enemigo_barcos(int M[9][9])
{
	int destructor=2, submarino=2, barco, direccion, dir, x, y;
	char d;
	do
		{
			if (destructor>0)
				barco=1;
			if (destructor==0&&submarino>0)
				barco=2;
			switch(barco)
			{
				case 1:
						do
						{
							x= rand() % 8 + 0;
							y= rand() % 8 + 0;
						}
						while(M[y][x]!=0);
						if(destructor==2)
							M[y][x]=1;
						else 
							M[y][x]=2;
						do
						{
							direccion=0;
							dir= rand() % 4 + 1;
							switch(dir)
							{
								case 1:
									d='w';
								break;
								case 2:
									d='a';
								break;
								case 3:
									d='s';
								break;
								case 4:
									d='d';
								break;
							}
							if((d=='d')&&(x+1>8))
								direccion=-1;
							else if((d=='a')&&(x-1<0))
								direccion=-1;
							else if ((d=='w')&&(y-1<0))
								direccion=-1;
							else if ((d=='s')&&(y+1>8))
								direccion=-1;
							else if (d=='d')
							{
								if (M[y][x+1]!=0)
									direccion=-1;
								else
								{
									if(destructor==2)
										M[y][x+1]=1;
								else 
										M[y][x+1]=2;
								}	
							}	
							else if (d=='a')
							{
								if (M[y][x-1]!=0)
									direccion=-1;
								else
								{
									if(destructor==2)
										M[y][x-1]=1;
									else 
										M[y][x-1]=2;
								}	
							}		
							else if (d=='w')
							{
								if (M[y-1][x]!=0)
									direccion=-1;
								else
								{
									if(destructor==2)
										M[y-1][x]=1;
									else 
										M[y-1][x]=2;
								}
							}	
							else
							{
								if (M[y+1][x]!=0)
									direccion=-1;
								else
								{
									if(destructor==2)
										M[y+1][x]=1;
									else 
										M[y+1][x]=2;
								}
									
							}
						}
						while(direccion!=0);
						destructor--;
				break;
				case 2:
						do
						{
							x= rand() % 8 + 0;
							y= rand() % 8 + 0;
						}
						while(M[y][x]!=0);
						M[y][x]=3;
						submarino--;
				break;		
			}
		}
		while (submarino>=0&&destructor>=0);
}
void turno_jugador(int m[9][9], char ti[9][9], char t1[9][9], int *u)
{
	int x, y, z, d=0, i, j;
		system("cls");
		imprime_tablero(t1);
		imprime_tablero(ti);
		printf("\nEscoge una coordenada xy donde creas que estara el barco enemigo.\n");
		printf("\nDime un numero x (1-9):\n");
		do
		scanf("%i", &x);
		while((x<1)||(x>9));
		printf("\nAhora dime un numero y (1-9):\n");
		do
		scanf("%i", &y);
		while((y<1)||(y>9));
		x=x-1;
		y=y-1;
		sleep(2);
		//Comprueba si la coordenada escogida coincide con un barco o no
		if (m[y][x]==0)
			{
				system("cls");
				printf("Agua!\n");
				sleep(2);
				//Marca como "Agua" la casilla escogida en una matriz, para que el jugador no ataque esas coordenadas por error
				ti[y][x]='A';
				imprime_tablero(ti);
			}
			else if (m[y][x]==3)
			{
				system("cls");
				printf("Hundido!\n");
				sleep(2);
				//Marca como "Hundido" la casilla escogida en una matriz, para que el jugador no ataque esas coordenadas por error
				ti[y][x]='H';
				//Se cambia el valor en la mariz por un 0 para que el programa sepa que se ha hundido un barco
				m[y][x]=0;
				imprime_tablero(ti);
			}
			else if (m[y][x]==1)
			{
				z=0;
				m[y][x]=0;
				//Cada "1" equivale a una parte de un destructor, el programa cuenta el numero de unos y responde on "Tocado" o "Hundido"
				for(i = 0; i < 9; i++)					
				{
					for(j = 0; j < 9; j++)
						if(m[i][j]==1)
							z++;
				}
				if (z==0)
				{
					system("cls");
					printf("Hundido!\n");
					sleep(2);
					ti[y][x]='H';
					imprime_tablero(ti);
				}
				else 
				{
					system("cls");
					printf("Tocado!\n");
					sleep(2);
					ti[y][x]='T';
					imprime_tablero(ti);
				}
			}
			else
			{
				//Lo mismo que antes, pero con doses
				z=0;
				m[y][x]=0;
				for(i = 0; i < 9; i++)
				{
					for(j = 0; j < 9; j++)
						if(m[i][j]==2)
							z++;
				}
				if (z==0)
				{
					system("cls");
					printf("Hundido!\n");
					sleep(2);
					ti[y][x]='H';
					imprime_tablero(ti);
				}
				else 
				{
					system("cls");
					printf("Tocado!\n");
					sleep(2);
					ti[y][x]='T';
					imprime_tablero(ti);
				}
			}
			//Contamos el numero de 0. Si equivale a 81, todos los barcos enemigos han sido hundidos
			for(i = 0; i < 9; i++)
				{
					for(j = 0; j < 9; j++)
						if(m[i][j]==0)
							d++;
				}	
	*u=d;
	
	printf("\nAhora es el turno del ordenador\n");
	system("pause");
	system("cls");
}
//Practicamente igual al anterior
void turno_bot(int t0[9][9], int t2[9][9], char t1[9][9], int *u)
{
	int x, y, z, d=0, i, j;
		printf("El ordenador te esta atacando\n");
		do
		{
			x= rand() % 8 + 0;
			y= rand() % 8 + 0;
		}
		while (t0[y][x]==9);
		printf("Ha escogido x:%i e y:%i", x+1, y+1);
		sleep(3);
		system("cls");
		if (t2[y][x]==0)
			{
				printf("Agua!\n");
				t0[y][x]=9;
			}
			else if (t2[y][x]==3)
			{
				printf("Hundido!\n");
				t1[y][x]='H';
				t0[y][x]=9;
				t2[y][x]=0;
				imprime_tablero(t1);
			}
			else if (t2[y][x]==1)
			{
				z=0;
				t0[y][x]=9;
				t2[y][x]=0;
				for(i = 0; i < 9; i++)					
				{
					for(j = 0; j < 9; j++)
						if(t2[i][j]==1)
							z++;
				}
				if (z==0)
					{
						printf("Hundido!\n");
						t1[y][x]='H';
					}
				else 
					{
						printf("Tocado!\n");
						t1[y][x]='T';
					}
				imprime_tablero(t1);
			}
			else
			{
				z=0;
				t0[y][x]=9;
				t2[y][x]=0;
				for(i = 0; i < 9; i++)					
				{
					for(j = 0; j < 9; j++)
						if(t2[i][j]==2)
							z++;
				}
				if (z==0)
					{
						printf("Hundido!\n");
						t1[y][x]='H';
					}
				else 
					{
						printf("Tocado!\n");
						t1[y][x]='T';
					}
				imprime_tablero(t1);
			}
			for(i = 0; i < 9; i++)
				{
					for(j = 0; j < 9; j++)
						if(t2[i][j]==0)
							d++;
				}	
	*u=d;
	printf("\nAhora es tu turno\n");
	system("pause");
	system("cls");
}
void turno(int t[9][9], char ti[9][9], char t1[9][9], int t0[9][9], int t2[9][9])
{
	int u1, u2;
	do
	{
		turno_jugador(t, ti, t1, &u1);
		if (u1<81)
			turno_bot(t0, t2, t1, &u2);	
	}
	while ((u1<81)&&(u2<81));
	printf("\n Has %s!, Quieres intentarlo otra vez (s/cualquier otra tecla)? \n ", u2<u1? "ganado, has conseguido eliminar todos los barcos enemigos":"perdido, han derribado todos tus barcos");
}
