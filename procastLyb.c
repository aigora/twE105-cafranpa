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
		fscanf(p,"%s\t%i\t%i\t%i\t%i\t%i\t%i\n", 
		aux,&usuario[i].bola,&usuario[i].combate,&usuario[i].cunhado,&usuario[i].flota,&usuario[i].recetario,&usuario[i].tesoro);
		strcpy(usuario[i].name,aux);
	}
	fclose(p);
	printf("Aqui estan los usuarios actuales:\n");
	for(i=0;i<4;i++)
	{
		printf("%i: %s:\n\tbola del 8cho:%i\n\tcombate:%i\n\tcunhado:%i\n\tflota:%i\n\trecetario:%i\n\ttesoro:%i\n",
			i+1,usuario[i].name,usuario[i].bola,usuario[i].combate,usuario[i].cunhado,usuario[i].flota,usuario[i].recetario,usuario[i].tesoro);
	}
	printf("Quieres seleccionar alguno de ellos, o por el contrario quieres reescribir alguno de ellos?(s/r)\n");
	do
	{
		scanf(" %c",&res);
		res=mins(res);
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
				res=mins(res);
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
				res=mins(res);
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
		fscanf(p,"%s\t%i\t%i\t%i\t%i\t%i\t%i\n", 
		aux,&usuario[i].bola,&usuario[i].combate,&usuario[i].cunhado,&usuario[i].flota,&usuario[i].recetario,&usuario[i].tesoro);
		strcpy(usuario[i].name,aux);
	}
	fclose(p);
	p=fopen("usuarios.txt", "w");
	usuario[io]=iz;
	for(i=0;i<4;i++)
	{
		fprintf(p,"%s\t%i\t%i\t%i\t%i\t%i\t%i\n",
		usuario[i].name,usuario[i].bola,usuario[i].combate,usuario[i].cunhado,usuario[i].flota,usuario[i].recetario,usuario[i].tesoro);
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
	ans=mins(ans);
	while((ans!='s')&&(ans!='n'))
	{
		printf("lo siento no te he entendido\n");
		printf("Crees que estas preparado para conocer tu fortuna?(si o no)\n");
		scanf(" %c", &ans);
		ans=mins(ans);
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
void combate()
{
	int yo, el, defensayo, defensael;
	int danho1, danho2, espada, garras, pocion=3, n, curas, w;
	char s;
	system("cls");
	//Generamos una semilla para los numeros aleatorios
	srand(time(NULL));
	do	
	{	
		printf("Instrucciones:\nTanto tu como el monstruo teneis 4 'habilidades', por ponerles un nombre.\nLos puntos de ataque, los puntos de danho, los puntos de vida y la defensa.\nLos puntos de ataque y de danho se generan aleatoriamente cada turno.\nSi tus puntos de ataque son iguales o superiores a la defensa del enemigo, le\nquitaras 'x' puntos de danho  sus puntos de vida\n\n");
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
		scanf(" %c", &s);
		s=mins(s);
	}
	while(s=='s');
}
//cunhado
void recetario()
{
	char select1; //Variable entera para elegir entre dulce o salado//
	char select2_s, select2_d; //Variable entera para elegir entre desayuno, almuerzo, etc.(salado); y variable entera para elegir entre desayuno, almuerzo, etc.(dulce)//
	char select3; //Variable entera para elegir que receta desea el usuario//
	system("cls");
	printf("Aqui te traemos un recetario donde podras descubrir recetas faciles y rapidas (para culquier hora del dia) dedicadas especialmente a gente celiaca\n");
	//MENU CELIACO//
	printf("La celiaquia es una patologia intestinal cronica que cada vez es mas comun en nuestra sociedad.\nSe produce por una mala absorcion de alimentos con gluten,\nproteina que se encuentra en la harina de diversos cereales como el trigo, cebada, avena o centeno.\nPor tanto, una persona diagnosticada con celiaquia debe consumir alimentos sin gluten.\n");
	printf("Escoge si prefieres una receta dulce(d) o salada(s)\n"); //A continuacion, el usuario teclea 'd' si desea una receta dulce o 's' si la prefiere salada//
	scanf(" %c", &select1); //El usuario elige un menu escribiendo una letra en el teclado//
	switch(select1) //Con este switch case el programa va a continuar en base a las opcciones escogidas por el usuario: dulce o salado//
	{
		case 's': //si la seleccion del usuario es una receta  celiaca SALADA, el programa continua pidiendo sus elecciones al usuario en base a recetas celiacas solo saladas//
			printf("Escoge que te apetece mas, una receta salada para:\nUn desayuno(D)\nUna comida de media manhana(m)\nUn almuerzo(a)\nUna merienda(M)\nUna cena(c)\n");
	  		scanf(" %c", &select2_s); //El usuario escribira una letra u otra('D', 'm', 'a', 'M', 'c'), dependiendo del tipo de comida que prefiera//
			switch(select2_s) //El programa da 5 opciones segun la eleccion previa realizada//
				{
				  	case 'D':
					  	printf("Aqui te presentamos algunas recetas de desayunos salados para celiacos disponibles\n");
					 	printf("Por favor, escoge una de las siguientes recetas, escribiendo la letra que aparezca al lado de la que desees\n");
				     	printf("1.Revoltillo o tortilla(a)\n2.Tostada con crema de cacahuete o almendras y platano(b)\n3.Tortitas saladas caseras de trigo sarraceno o maiz(c)\n");
					  	scanf(" %c", &select3); //Aqui es usuario teclea la opcion que desee para obetener impresa en pantalla su receta deseada//
					 	switch(select3)
						{
							case 'a':
							  	printf("Has escogido: 1.'Revoltillo o tortilla'\n");//Codigo de esta receta:'c_s_D_a'//
						  	  	fc_s_D_a (); //Nombre de la funcion que imprime la receta codigo: 'c_s_D_a'//
						  	  	break;
						  	case 'b':
						  	 	printf("Has escogido: 2.'Tostada con crema de cacahuete o almendras y platano'\n");//Codigo de esta receta:'c_s_D_b'//
						  	 	fc_s_D_b (); //Nombre de la funcion que imprime la receta codigo: 'c_s_D_b'//
							 	break;
						  	case 'c':
						  	  	printf("Has escogido: 3.'Tortitas saladas caseras de trigo sarraceno o maiz'\n");//Codigo de esta receta:'c_s_D_c'//
						  	  	fc_s_D_c (); //Nombre de la funcion que imprime la receta codigo: 'c_s_D_c'//
							  	break;
						  	default:
						  	  	printf("Esta opcion no es valida\n"); //Si la letra introducida por el usuario es distinta de las opcciones dadas, el programa imprime este mensaje en pantalla//
						  	  	break;
						}
					 	break;
					case 'm':
					  	printf("Aqui te presentamos algunas recetas de las comidas de media manhana saladas para celiacos disponibles\n");
					  	printf("Por favor, escoge una de las siguientes recetas, escribiendo la letra que aparezca al lado de la que desees\n");
				      	printf("1.Gazpacho para celiacos(a)\n2.Brownie de garbanzos(b)\n3.Tortitas fritas(c)\n4.Pan suave trenzado sin gluten(d)\n");
					  	scanf(" %c", &select3); //Aqui es usuario teclea la opcion que desee para obetener impresa en pantalla su receta deseada//
					  	switch(select3)
						{
							case 'a':
							  	printf("Has escogido: 1.'Gazpacho para celiacos'\n");//Codigo de esta receta:'c_s_m_a'//
						  	  	fc_s_m_a (); //Nombre de la funcion que imprime la receta codigo: 'c_s_m_a'//
						  	  	break;
						  	case 'b':
						  	 	printf("Has escogido: 2.'Brownie de garbanzos'\n");//Codigo de esta receta:'c_s_m_b'//
						  	  	fc_s_m_b (); //Nombre de la funcion que imprime la receta codigo: 'c_s_m_b'//
							  	break;
						  	case 'c':
						  	  	printf("Has escogido: 3.'Tortitas fritas'\n");//Codigo de esta receta:'c_s_m_c'//
						  	  	fc_s_m_c (); //Nombre de la funcion que imprime la receta codigo: 'c_s_m_c'//
							  	break;
							case 'd':
						  	  	printf("Has escogido: 4.'Pan suave trenzado sin gluten'\n");//Codigo de esta receta:'c_s_m_d'//
						  	  	fc_s_m_d (); //Nombre de la funcion que imprime la receta codigo: 'c_s_m_d'//
							  	break;
						  	default:
						  	  	printf("Esta opcion no es valida\n"); //Si la letra introducida por el usuario es distinta de las opcciones dadas, el programa imprime este mensaje en pantalla//
						  	  	break;
						}
					  	break;
					case 'a':
					  	printf("Aqui te presentamos algunas recetas de las almuerzos salados para celiacos disponibles\n");
					  	printf("Por favor, escoge una de las siguientes recetas, escribiendo la letra que aparezca al lado de la que desees\n");
				      	printf("1.Canelones sin leche y sin gluten(a)\n2.Croquetas sin gluten(b)\n3.Empanadillas sin gluten(c)\n4.Receta de Pasta al huevo sin gluten(d)\n");
					  	scanf(" %c", &select3); //Aqui es usuario teclea la opcion que desee para obetener impresa en pantalla su receta deseada//
					  	switch(select3)
						{
							case 'a':
							  	printf("Has escogido: 1.'Canelones sin leche y sin gluten'\n");//Codigo de esta receta:'c_s_a_a'//
						  	  	fc_s_a_a (); //Nombre de la funcion que imprime la receta codigo: 'c_s_a_a'//
						  	  	break;
						  	case 'b':
						  	  	printf("Has escogido: 2.'Croquetas sin gluten'\n");//Codigo de esta receta:'c_s_a_b'//
						  	  	fc_s_a_b (); //Nombre de la funcion que imprime la receta codigo: 'c_s_a_b'//
							  	break;
						  	case 'c':
						  	  	printf("Has escogido: 3.'Empanadillas sin gluten'\n");//Codigo de esta receta:'c_s_a_c'//
						  	  	fc_s_a_c (); //Nombre de la funcion que imprime la receta codigo: 'c_s_a_c'//
							  	break;
							case 'd':
						  	  	printf("Has escogido: 4.'Receta de Pasta al huevo sin gluten'\n");//Codigo de esta receta:'c_s_a_d'//
						  	  	fc_s_a_d (); //Nombre de la funcion que imprime la receta codigo: 'c_s_a_d'//
							  	break;
						  	default:
						  	  	printf("Esta opcion no es valida\n"); //Si la letra introducida por el usuario es distinta de las opcciones dadas, el programa imprime este mensaje en pantalla//
						  	  	break;
								}
					  	break;
					case 'M':
					  	printf("Aqui te presentamos algunas recetas de las meriendas saladas para celiacos disponibles\n");
					  	printf("Por favor, escoge una de las siguientes recetas, escribiendo la letra que aparezca al lado de la que desees\n");
				      	printf("1.Mini magdalenas de atun con tomate(a)\n2.galletas saladas sin gluten(b)\n");
					  	scanf(" %c", &select3); //Aqui es usuario teclea la opcion que desee para obetener impresa en pantalla su receta deseada//
					  	switch(select3)
						{
							case 'a':
							  	printf("Has escogido: 1.'Mini magdalenas de atun con tomate'\n");//Codigo de esta receta:'c_s_M_a'//
						  	  	fc_s_M_a (); //Nombre de la funcion que imprime la receta codigo: 'c_s_M_a'//
						  	  	break;
							case 'b':
						  	  	printf("Has escogido: 2.'galletas saladas sin gluten'\n");//Codigo de esta receta:'c_s_M_b'//
						  	  	fc_s_M_b (); //Nombre de la funcion que imprime la receta codigo: 'c_s_M_b'//
							  	break;
						  	default:
						  	  	printf("Esta opcion no es valida\n"); //Si la letra introducida por el usuario es distinta de las opcciones dadas, el programa imprime este mensaje en pantalla//
						  	  	break;
						}
					  	break;	
					case 'c':
					  	printf("Aqui te presentamos algunas recetas de las cenas saladas para celiacos disponibles\n");
					  	printf("Por favor, escoge una de las siguientes recetas, escribiendo la letra que aparezca al lado de la que desees\n");
				      	printf("1.Masa para pizzas sin gluten(a)\n2.Lasagna a la bolognesa sin gluten(b)\n3.Hojaldre relleno de queso de cabra(c)\n4)Croquetas de Jamon Serrano y Queso(d)\n");
					  	scanf(" %c", &select3); //Aqui es usuario teclea la opcion que desee para obetener impresa en pantalla su receta deseada//
					  	switch(select3)
						{
							case 'a':
							  	printf("Has escogido: 1.'Masa para pizzas sin gluten'\n");//Codigo de esta receta:'c_s_c_a'//
						  	  	fc_s_c_a (); //Nombre de la funcion que imprime la receta codigo: 'c_s_c_a'//
						  	  	break;
						  	case 'b':
						  	  	printf("Has escogido: 2.'Lasagna a la bolognesa sin gluten'\n");//Codigo de esta receta:'c_s_c_b'//
						  	  	fc_s_c_b (); //Nombre de la funcion que imprime la receta codigo: 'c_s_c_b'//
							  	break;
						  	case 'c':
						  	  	printf("Has escogido: 3.'Hojaldre relleno de queso de cabra'\n");//Codigo de esta receta:'c_s_c_c'//
						  	  	fc_s_c_c (); //Nombre de la funcion que imprime la receta codigo: 'c_s_c_c'//
							  	break;
							case 'd':
						  	 	printf("Has escogido: 4.'Croquetas de Jamon Serrano y Queso'\n");//Codigo de esta receta:'c_s_a_d'//
						  	  	fc_s_c_d (); //Nombre de la funcion que imprime la receta codigo: 'c_s_a_d'//
							  	break;
							default:
						  	  	printf("Esta opcion no es valida\n"); //Si la letra introducida por el usuario es distinta de las opcciones dadas, el programa imprime este mensaje en pantalla//
						  	  	break;
						}
						break;
				}	
			  	break;
		case 'd': //si la seleccion del usuario es una receta dulce, el programa continua pidiendo sus elecciones al usuario en base a recetas celiacas solo dulces//
			printf("Escoge que te apetece mas, una receta dulce para:\nUn desayuno(D)\nUna comida de media manhana(m)\nUn almuerzo(a)\nUna merienda(M)\nUna cena(c)\n");
			scanf(" %c", &select2_d); //El usuario escribira una letra u otra('D', 'm', 'a', 'M', 'c'), dependiendo del tipo de comida que prefiera//
		  	switch(select2_d)
		  		{
				  	case 'D':
					  	printf("Aqui te presentamos algunas recetas de desayunos salados para celiacos disponibles\n");
				  	  	printf("Por favor, escoge una de las siguientes recetas, escribiendo la letra que aparezca al lado de la que desees\n\n");
					  	printf("1.Tortitas caseras de trigo sarraceno o maiz(a)\n2.Galletas de vainilla y mandioca(b)\n3.Bol de fruta con quinoa(c)\n");
					  	scanf(" %c", &select3); //Aqui es usuario teclea la opcion que desee para obetener impresa en pantalla su receta deseada//
					  	switch(select3)
						{
							case 'a':
							  	printf("Has escogido: 1.'Tortitas caseras de trigo sarraceno o maiz'\n");//Codigo de esta receta:'c_d_D_a'//
						  	  	fc_d_D_a (); //Nombre de la funcion que imprime la receta codigo: 'c_d_D_a'//
						  	  	break;
						  	case 'b':
						  	  	printf("Has escogido: 2.'Galletas de vainilla y mandioca'\n");//Codigo de esta receta:'c_d_D_b'//
						  	  	fc_d_D_b (); //Nombre de la funcion que imprime la receta codigo: 'c_d_D_b'//
							  	break;
						  	case 'c':
						  	  	printf("Has escogido: 3.'Bol de fruta con quinoa'\n");//Codigo de esta receta:'c_d_D_c'//
						  	  	fc_d_D_c (); //Nombre de la funcion que imprime la receta codigo: 'c_d_D_c'//
							  	break;
						  	default:
						  	  	printf("Esta opcion no es valida\n");
						  	  	break;
						}
    				  	break;
					case 'm':
					  	printf("Aqui te presentamos algunas recetas de comidas de media manhana saladas para celiacos disponibles\n");
					  	printf("Deberias escoger una de las siguientes recetas, escribiendo el numero que aparezca al lado de la que desees\n");
					  	printf("1.Galletas de Mantequilla de Cacahuete con Chocolate Blanco(a)\n2.Hojaldre de cebolla y calabaza caramelizada con queso rulo de cabra(b)\n");
					  	scanf(" %c", &select3); //Aqui es usuario teclea la opcion que desee para obetener impresa en pantalla su receta deseada//
					  	switch(select3)
						{
							case 'a':
							  	printf("Has escogido: 1.'Galletas de Mantequilla de Cacahuete con Chocolate Blanco'\n");//Codigo de esta receta:'c_d_D_a'//
						  	  	fc_d_m_a (); //Nombre de la funcion que imprime la receta codigo: 'c_d_D_a'//
						  	 	break;
						  	case 'b':
						  	  	printf("Has escogido: 2.'Hojaldre de cebolla y calabaza caramelizada con queso rulo de cabra'\n");//Codigo de esta receta:'c_d_m_b'//
						  	  	fc_d_m_b (); //Nombre de la funcion que imprime la receta codigo: 'c_d_m_a'//
							  	break;
						  	default:
						  	  	printf("Esta opcion no es valida\n");
						  	  	break;
						}
					  	break;
					case 'a':
					  	printf("Aqui te presentamos algunas recetas de almuerzos salados para celiacos disponibles\n");
					  	printf("Deberias escoger una de las siguientes recetas, escribiendo el numero que aparezca al lado de la que desees\n");
					 	printf("1.Escalopines en salsa agridulce sin gluten(a)\n2.Lomo de cerdo agridulce(b)\n");
					  	scanf(" %c", &select3); //Aqui es usuario teclea la opcion que desee para obetener impresa en pantalla su receta deseada//
					  	switch(select3)
						{
							case 'a':
							  	printf("Has escogido: 1.'Escalopines en salsa agridulce sin gluten'\n");//Codigo de esta receta:'c_d_a_a'//
						  	  	fc_d_a_a (); //Nombre de la funcion que imprime la receta codigo: 'c_d_a_a'//
						  	  	break;
						  	case 'b':
						  	  	printf("Has escogido: 2.'Lomo de cerdo agridulce'\n");//Codigo de esta receta:'c_d_a_b'//
						  	  	fc_d_a_b (); //Nombre de la funcion que imprime la receta codigo: 'c_d_a_b'//
							  	break;
						  	default:
						  	  	printf("Esta opcion no es valida\n");
						  	  	break;
						}
				      	break;
					case 'M':
					  	printf("Aqui te presentamos algunas recetas de meriendas saladas para celiacos disponibles\n");
					  	printf("Deberias escoger una de las siguientes recetas, escribiendo el numero que aparezca al lado de la que desees\n");
					  	printf("1.Magdalenas de vainilla sin gluten(a)\n2.Pastel Biarritz sin gluten(b)\n");
					  	scanf(" %c", &select3); //Aqui es usuario teclea la opcion que desee para obetener impresa en pantalla su receta deseada//
					  	switch(select3)
						{
							case 'a':
							  	printf("Has escogido: 1.'Magdalenas de vainilla sin gluten'\n");//Codigo de esta receta:'c_d_M_a'//
						  	  	fc_d_M_a (); //Nombre de la funcion que imprime la receta codigo: 'c_d_M_a'//
						  	  	break;
						  	case 'b':
						  	  	printf("Has escogido: 2.'Pastel Biarritz sin gluten'\n");//Codigo de esta receta:'c_d_M_b'//
						  	  	fc_d_M_b (); //Nombre de la funcion que imprime la receta codigo: 'c_d_M_b'//
							  	break;
						  	default:
						  	  	printf("Esta opcion no es valida\n");
						  	  	break;
						}
					  	break;
					case 'c':
					  	printf("Aqui te presentamos algunas recetas de cenas ligeras y saladas para celiacos disponibles\n");
					  	printf("Deberias escoger una de las siguientes recetas, escribiendo el numero que aparezca al lado de la que desees\n");
					  	printf("1.Croquetas de arroz con leche(a)\n2.Rollitos de primavera(b)\n");
					  	scanf(" %c", &select3); //Aqui es usuario teclea la opcion que desee para obetener impresa en pantalla su receta deseada//
					  	switch(select3)
						{
							case 'a':
							  	printf("Has escogido: 1.'Croquetas de arroz con leche'\n");//Codigo de esta receta:'c_d_c_a'//
						  	  	fc_d_c_a (); //Nombre de la funcion que imprime la receta codigo: 'c_d_c_a'//
						  	  	break;
						  	case 'b':
						  	  	printf("Has escogido: 2.'Rollitos de primavera'\n");//Codigo de esta receta:'c_d_c_b'//
						  	  	fc_d_c_b (); //Nombre de la funcion que imprime la receta codigo: 'c_d_c_b'//
							  	break;
						  	default:
						  	  	printf("Esta opcion no es valida\n");
						  	  	break;
						}
					  	break;
				}
					break;
		default: //Si se teclea algo distinto de 's' o 'd', el programa avisa de que con esa opccion no se puede continuar//
			printf("Esa no es una opccion valida\n");
			break;	
	}
	printf("\n");
	system("pause");
}
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
char mins(char ans)
{
	if((ans>'a')&&(ans<'z'))
	return ans;
	else if((ans>'A')&&(ans<'Z'))
	{
		ans=ans+32;
		return ans;
	}
}
//Usados en Bola del 8cho
void futuro()
{
	char ans;
	printf("Veo que tienes agallas\n");
	printf("Adelante, preguntame lo que quieras conocer\n");
	scanf(" %[^\n]");
	prediccion();
	system("pause");
	system("cls");
	printf("Quieres preguntarme algo mas?(s/cualquier otra tecla)\n");
	scanf(" %c", &ans);
	ans=mins(ans);
    if(ans=='s')
    futuro();
    else
    printf("Espero haberte servido de mucho, nos veremos en otro momento\n");
}
void prediccion()
{
	FILE *pf;
	string res[21];
	int i;
	srand(time(NULL));
	i=rand()%20+0;
	lecturafichero(pf, res, 21);
	printf("%s\n",res[i].string);
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
//Definicion de las funciones tipoMenu: 'CELIACO SALADO'//
void fc_s_D_a () //Funcion para imprimir en pantalla la receta codigo'c_s_D_a'//
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/salado/c_s_D_a.txt","r");
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);	
}
void fc_s_D_b () //Funcion para imprimir en pantalla la receta codigo'c_s_D_b'//
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/salado/c_s_D_b.txt","r"); //Fichero que abre la receta c_s_D_b//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'c_s_D_c'//
void fc_s_D_c ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/salado/c_s_D_c.txt","r"); //Fichero que abre la receta c_s_D_c//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'c_s_m_a'//
void fc_s_m_a ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/salado/c_s_m_a.txt","r"); //Fichero que abre la receta c_s_m_a//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'c_s_m_b'//
void fc_s_m_b ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/salado/c_s_m_b.txt","r"); //Fichero que abre la receta c_s_m_b//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'c_s_m_c'//
void fc_s_m_c ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/salado/c_s_m_c.txt","r"); //Fichero que abre la receta c_s_m_c//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'fc_s_m_d'//
void fc_s_m_d ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/salado/c_s_m_c.txt","r"); //Fichero que abre la receta c_s_m_d//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'fc_s_a_a'//
void fc_s_a_a ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/salado/c_s_a_a.txt","r"); //Fichero que abre la receta c_s_a_a//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'c_s_a_b'//
void fc_s_a_b ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/salado/c_s_a_b.txt","r"); //Fichero que abre la receta c_s_a_b//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'c_s_a_c'//
void fc_s_a_c ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/salado/c_s_a_c.txt","r"); //Fichero que abre la receta c_s_a_c//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'c_s_a_d'//
void fc_s_a_d ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/salado/c_s_a_d.txt","r"); //Fichero que abre la receta c_s_a_d//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'c_s_M_a'//
void fc_s_M_a ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/salado/c_s_M_a_dos.txt","r"); //Fichero que abre la receta c_s_M_a//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'c_s_M_b'//
void fc_s_M_b ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/salado/c_s_M_b_dos.txt","r"); //Fichero que abre la receta c_s_M_b//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'c_s_c_a'//
void fc_s_c_a ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/salado/c_s_c_a.txt","r"); //Fichero que abre la receta c_s_c_a//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'c_s_c_b'//
void fc_s_c_b ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/salado/c_s_c_b.txt","r"); //Fichero que abre la receta c_s_c_b//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'c_s_c_c'//
void fc_s_c_c ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/salado/c_s_c_c.txt","r"); //Fichero que abre la receta c_s_c_c//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'fc_s_c_d'//
void fc_s_c_d ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/salado/c_s_c_d.txt","r"); //Fichero que abre la receta c_s_c_d//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Definicion de las funciones tipoMenu: 'CELIACO DULCE'//
//Funcion para imprimir en pantalla la receta codigo'c_d_D_a'//
void fc_d_D_a ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/dulce/c_d_D_a.txt","r"); //Fichero que abre la receta c_d_D_a//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'c_d_D_b'//
void fc_d_D_b ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/dulce/c_d_D_b.txt","r"); //Fichero que abre la receta c_d_D_b//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'c_d_D_c'//
void fc_d_D_c ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/dulce/c_d_D_c.txt","r"); //Fichero que abre la receta c_d_D_c//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'c_d_m_a'//
void fc_d_m_a ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/dulce/c_d_m_a.txt","r"); //Fichero que abre la receta c_d_m_a//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'c_d_m_b'//
void fc_d_m_b ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/dulce/c_d_m_b.txt","r"); //Fichero que abre la receta c_d_m_b//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'c_d_a_a'//
void fc_d_a_a ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/dulce/c_d_a_a.txt","r"); //Fichero que abre la receta c_d_a_a//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'c_d_a_b'//
void fc_d_a_b ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/dulce/c_d_a_b.txt","r"); //Fichero que abre la receta c_d_a_b//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'c_d_M_a'//
void fc_d_M_a ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/dulce/c_d_M_a_dos.txt","r"); //Fichero que abre la receta c_d_M_a//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'c_d_M_b'//
void fc_d_M_b ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/dulce/c_d_M_b_dos.txt","r"); //Fichero que abre la receta c_d_M_b//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'c_d_c_a'//
void fc_d_c_a ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/dulce/c_d_c_a.txt","r"); //Fichero que abre la receta c_d_c_a//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
//Funcion para imprimir en pantalla la receta codigo'c_d_c_b'//
void fc_d_c_b ()
{
	FILE *p;
	char aux;
	system("cls");
	p=fopen("recetas/dulce/c_d_c_b.txt","r"); //Fichero que abre la receta c_d_c_b//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
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
			bans=mins(bans);
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
		l=mins(l);
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
	ans=mins(ans);
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
