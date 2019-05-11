#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include"procastLyb.h"
//usados en Procrastinador 3000(programa central)
int ingreso(usuario *iz)
{
	FILE *p; usuario usuario[4];
	int i,j;char aux[20], res;
	p=fopen("usuarios.txt","r");
	//abre el fichero que contiene la informacion de los usuarios
	for(i=0;i<4;i++)
	{
		fscanf(p,"%s\t%i\t%i\t%i\t%i\t%i\t%i\t%i\n", 
			aux,&usuario[i].bola,&usuario[i].combate,&usuario[i].cunhado,&usuario[i].flota,&usuario[i].questionary,&usuario[i].recetario,&usuario[i].tesoro);
		//almacenamos en un vector de estructuras todos los usuarios
		//para su proxima utilizacion
		strcpy(usuario[i].name,aux);
		//utilizamos la copia de cadenas para añadir la informacion del nombre de usuario
	}
	fclose(p);
	//cerramos el fichero
	printf("Aqui estan los usuarios actuales:\n");
	for(i=0;i<4;i++)
	{
		printf("%i: %s:\n\tbola del 8cho:%i\n\tcombate:%i\n\tcunhado:%i\n\tflota:%i\n\tquestionary:%i\n\trecetario:%i\n\ttesoro:%i\n",
			i+1,usuario[i].name,usuario[i].bola,usuario[i].combate,usuario[i].cunhado,usuario[i].flota,usuario[i].questionary,usuario[i].recetario,usuario[i].tesoro);
		//muestra por pantalla los usuarios para que 
		//el usuario pueda elegir uno de ellos
	}
	printf("Quieres seleccionar alguno de ellos, o por el contrario quieres reescribir alguno de ellos?(s/r)\n");
	do
	{
		scanf(" %c",&res);
		//el usuario elige entre
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
		//selecciona el usuario asegurandose 
		//de que el usario ha elegido correctamente
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
			printf("%i: %s:\n\tbola del 8cho:%i\n\tcombate:%i\n\tcunhado:%i\n\tquestionary:%i\n\trecetario:%i\n\ttesoro:%i\n",
			1+i,usuario[i].name,usuario[i].bola=0,usuario[i].combate=0,usuario[i].cunhado=0,usuario[i].recetario=0,usuario[i].tesoro=0);
		}
		//sobreescribe los datos de un usuario 
		//anterior poniendo todos los datos a 0
		else if((res!='s')&&(res!='r'))
		{
			printf("No te he entendido\n");
			printf("Repita su respuesta por favor\n");
			res='h';
		}
	}
	while(res=='h');
	*iz=usuario[i];
	//almacena el usuario seleccionada en 
	//la variable iz del programa principal
	return i;
	//devuelve la posicion del vector
	//que pertenece al usuario seleccionado
}
void registro(usuario iz, int io)//esta funcion tambien se usa en otros programas
{
	FILE *p; usuario usuario[4];
	char aux[20]; int i;
	p=fopen("usuarios.txt","r");
	//abre el fichero que contiene los usuarios
	for(i=0;i<4;i++)
	{
		fscanf(p,"%s\t%i\t%i\t%i\t%i\t%i\t%i\t%i\n", 
		aux,&usuario[i].bola,&usuario[i].combate,&usuario[i].cunhado,&usuario[i].flota,&usuario[i].questionary,&usuario[i].recetario,&usuario[i].tesoro);
		strcpy(usuario[i].name,aux);
	}
	//mete los datos en un vector
	fclose(p);
	//cierra el fichero
	p=fopen("usuarios.txt", "w");
	//vuelve a abrirlo
	usuario[io]=iz;
	//hace un cambio en el usuario seleccionado por el usuario
	for(i=0;i<4;i++)
	{
		fprintf(p,"%s\t%i\t%i\t%i\t%i\t%i\t%i\t%i\n",
		usuario[i].name,usuario[i].bola,usuario[i].combate,usuario[i].cunhado,usuario[i].flota,usuario[i].questionary,usuario[i].recetario,usuario[i].tesoro);
	}
	//los almacena para su proxima utilizacio
	//esta vez con los cambios realizados durante el programa
	fclose(p);
	//cierra el fichero
}
int boladelocho()
{
	char ans;
	system("cls");
	printf("Hola, bienvenido a la bola del ocho\n");
	printf("Crees que estas preparado para conocer tu fortuna?(s/n)\n");
	scanf(" %c", &ans);
	//el usuario selecciona lo que quiere
	ans=mins(ans);
	while((ans!='s')&&(ans!='n'))
	{
		printf("lo siento no te he entendido\n");
		printf("Crees que estas preparado para conocer tu fortuna?(si o no)\n");
		scanf(" %c", &ans);
		ans=mins(ans);
	}
	//permite al usuario corregir si ha introducido mal la respuesta
	if(ans=='s')
		futuro();
	//ejecuta el programa si la respuesta es s
	else if(ans=='n')
	{
		printf("Te entiendo, el futuro no es para mentes fragiles\n");
		system("pause");
		printf("Intuyo que nos volveremos a ver pronto...\n");
    }
    //cierra el programa si la respuesta es n
    return 0;
}
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
	//da una posicion aleatoria al tesoro
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
	//realiza una cuenta atras
	system("cls");
	busqueda(&tesoro, &usuario);
	//ejecuta el programa
	return 0;
}
void questionary()
{
	int puntos=0; //La variable que contabiliza los puntos empieza contando desde cero// 
	int ansUsuario; //Variable que almacena la respuesta del usuario//
	int ansCorrecta; //Variable que almacena la respuesta correcta//
	char elecCateg; //Variable empleada para almacenar la eleccion de categoria de pregunta//
	char start;//variable empleada para almacenar la letra con la que el jugador decide empezar o no a jugar//
	int contador; //Variable que cuenta la puntuacion del usuario//
	printf("Bienvenido a 'Questionary', el programa en el que demostararas tus habilidades con preguntas sobre cultura general y ... algunas otras un poco mas especificas.\nEsperamos que te diviertas.");
	printf("Para comenzar elige una de las 4 categorias siguientes, introduciendo la letra entre parentesis. Pulsa otra letra diferente a las 4 para salir:\n");
	printf("\nHistoria(h)\nGeografia(g)\nCiencia(c)\nArte(a)\n");
	scanf("%c", &elecCateg);
	switch(elecCateg) //El programa funcionara mostrando las opciones especificas de cada categoria, dependiendo de lo que introduzca el usuario//
	{
		case'H': //Se reproduce en caso de que el usuario escriba la letra 'H' o 'h'//
		case'h':
			system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//  
			printf("BIENVENIDO!!\nHas elegido la categoria Historia\n");
			printf("Pulsa (s) para comenzar a jugar, o pulsa cualquier tecla distinta para salir.\n");
			printf("Ten cuidado, y piensa bien antes de contestar, tu puntuacion depende de las preguntas que aciertes y no hay segundas oportunidades...\nBUENA SUERTE!\n");
			scanf(" %c", &start); //Aqui la persona introduce una letra para empezar a jugar o pulsa una letra diferente a 's' para salir//
			if(start == 's')
			{
				system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//
				printf("Escribe 'a', 'b', 'c' o 'd' dependiendo de la opcion que consideres verdadera\n"); //Se indica al usuario que para responder//
				//debe escribir la letra que represente a la respuesta correcta//
				//(esta indicacion sirve para todas las preguntas siguientes del juego y por ello, no se volvera a repetir)//
				puntos+=questHistoria(); //Funcion donde tiene lugar la parte de las preguntas y respuestas de HISTORIA //
				if(puntos<=3) //Esto se ejecutara cuando la respuesta otorgada por el usuario sea igual a la respuesta que el programa reconoce como correcta//
				{
					printf("\nParece que necesitas ponerte a repasar un pelin, pero tranquilo, todo es mejorable.\n");
				}
				else if((puntos>3)&&(puntos<5))
				{
					printf("\nCasi casi apruebas, no te rindas... mas suerte la proxima\n");
				}
				else if((puntos>=5)&&(puntos<7))
				{
					printf("\nBastante bien, has conseguido superar la prueba que pocos han resistido, enhorabuena!!\n");
				}
				else if((puntos>=7)&&(puntos<10))
				{
					printf("\nFenomenal, no solo has aprobado, si no que ademas casi aciertas todo, enhorabuena!!\n");
				}
				else if(puntos=10)
				{
					printf("\nFANTASTICO, has acertado todas las preguntas, eres un increible!!!\n");
				}
			}
			else printf("Hasta pronto, ha sido un placer jugar contigo\n");
			break;
		case'G': //Se reproduce en caso de que el usuario escriba la letra 'G' o 'g'//
		case'g':
			system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//  
			printf("BIENVENIDO!!\nHas elegido la categoria Geografia\n");
			printf("Pulsa (s) para comenzar a jugar, o pulsa cualquier tecla distinta para salir.\n");
			printf("Ten cuidado, y piensa bien antes de contestar, tu puntuacion depende de las preguntas que aciertes y no hay segundas oportunidades...\nBUENA SUERTE!\n");
			scanf(" %c", &start); //Aqui la persona introduce una letra para empezar a jugar o pulsa una letra diferente a 's' para salir//
			if(start == 's')
			{
				system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//  
				printf("Escribe 'a', 'b', 'c' o 'd' dependiendo de la opcion que consideres verdadera\n"); //Se indica al usuario que para responder//
				//debe escribir la letra que represente a la respuesta correcta//
				//(esta indicacion sirve para todas las preguntas siguientes del juego y por ello, no se volvera a repetir)//
				puntos+=questGeografia(); //Funcion donde tiene lugar la parte de las preguntas y respuestas de GEOGRAFIA//
				if(puntos<=3) //Esto se ejecutara cuando la respuesta otorgada por el usuario sea igual a la respuesta que el programa reconoce como correcta//
				{
					printf("\nParece que necesitas ponerte a repasar un pelin, pero tranquilo, todo es mejorable\n");
				}
				else if((puntos>3)&&(puntos<5))
				{
					printf("\nCasi casi apruebas, no te rindas... mas suerte la proxima\n");
				}
				else if((puntos>=5)&&(puntos<7))
				{
					printf("\nBastante bien, has conseguido superar la prueba que pocos han resistido, enhorabuena!!\n");
				}
				else if((puntos>=7)&&(puntos<10))
				{
					printf("\nFenomenal, no solo has aprobado, si no que ademas casi aciertas todo, enhorabuena!!\n");
				}
				else if(puntos=10)
				{
					printf("\nFANTASTICO, has acertado todas las preguntas, eres un increible!!!\n");
				}
			}
			else printf("Hasta pronto, ha sido un placer jugar contigo\n");
			break;
		case'C': //Se reproduce en caso de que el usuario escriba la letra 'C' o 'c'//
		case'c':	
			system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//  
			printf("BIENVENIDO!!\nHas elegido la categoria Ciencia\n");
			printf("Pulsa (s) para comenzar a jugar, o pulsa cualquier tecla distinta para salir.\n");
			printf("Ten cuidado, y piensa bien antes de contestar, tu puntuacion depende de las preguntas que aciertes y no hay segundas oportunidades...\nBUENA SUERTE!\n");
			scanf(" %c", &start); //Aqui la persona introduce una letra para empezar a jugar o pulsa una letra diferente a 's' para salir//
			if(start == 's')
			{
				system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//  
				printf("Escribe 'a', 'b', 'c' o 'd' dependiendo de la opcion que consideres verdadera\n"); //Se indica al usuario que para responder//
				//debe escribir la letra que represente a la respuesta correcta//
				//(esta indicacion sirve para todas las preguntas siguientes del juego y por ello, no se volvera a repetir)//
				puntos+=questCiencia(); //Funcion donde tiene lugar la parte de las preguntas y respuestas de CIENCIA//
				if(puntos<=3) //Esto se ejecutara cuando la respuesta otorgada por el usuario sea igual a la respuesta que el programa reconoce como correcta//
				{
					printf("\nParece que necesitas ponerte a repasar un pelin, pero tranquilo, todo es mejorable\n");
				}
				else if((puntos>3)&&(puntos<5))
				{
					printf("\nCasi casi apruebas, no te rindas... mas suerte la proxima\n");
				}
				else if((puntos>=5)&&(puntos<7))
				{
					printf("\nBastante bien, has conseguido superar la prueba que pocos han resistido, enhorabuena!!\n");
				}
				else if((puntos>=7)&&(puntos<10))
				{
					printf("\nFenomenal, no solo has aprobado, si no que ademas casi aciertas todo, enhorabuena!!\n");
				}
				else if(puntos=10)
				{
					printf("\nFANTASTICO, has acertado todas las preguntas, eres un increible!!!\n");
				}
			}
			else printf("Hasta pronto, ha sido un placer jugar contigo\n");
			break;
		case'A': //Se reproduce en caso de que el usuario escriba la letra 'A' o 'a'//
		case'a':
			system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//  
			printf("BIENVENIDO!!\nHas elegido la categoria Arte\n");
			printf("Pulsa (s) para comenzar a jugar, o pulsa cualquier tecla distinta para salir.\n");
			printf("Ten cuidado, y piensa bien antes de contestar, tu puntuacion depende de las preguntas que aciertes y no hay segundas oportunidades...\nBUENA SUERTE!\n");
			scanf(" %c", &start); //Aqui la persona introduce una letra para empezar a jugar o pulsa una letra diferente a 's' para salir//
			if(start == 's')
			{
				system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//  
				printf("Escribe 'a', 'b', 'c' o 'd' dependiendo de la opcion que consideres verdadera\n"); //Se indica al usuario que para responder//
				//debe escribir la letra que represente a la respuesta correcta//
				//(esta indicacion sirve para todas las preguntas siguientes del juego y por ello, no se volvera a repetir)//
				puntos+=questArte(); //Funcion donde tiene lugar la parte de las preguntas y respuestas de ARTE//
				if(puntos<=3) //Esto se ejecutara cuando la respuesta otorgada por el usuario sea igual a la respuesta que el programa reconoce como correcta//
				{
					printf("\nParece que necesitas ponerte a repasar un pelin, pero tranquilo, todo es mejorable\n");
				}
				else if((puntos>3)&&(puntos<5))
				{
					printf("\nCasi casi apruebas, no te rindas... mas suerte la proxima\n");
				}
				else if((puntos>=5)&&(puntos<7))
				{
					printf("\nBastante bien, has conseguido superar la prueba que pocos han resistido, enhorabuena!!\n");
				}
				else if((puntos>=7)&&(puntos<10))
				{
					printf("\nFenomenal, no solo has aprobado, si no que ademas casi aciertas todo, enhorabuena!!\n");
				}
				else if(puntos=10)
				{
					printf("\nFANTASTICO, has acertado todas las preguntas, eres un increible!!!\n");
				}	
			}
			else printf("Hasta pronto, ha sido un placer jugar contigo\n");
			break;
		default:
			printf("Has escogido salir del juego.\nUn placer, nos vemos pronto!!\n");
	}	
}
char mins(char ans)
{
	if((ans>'a')&&(ans<'z'))
	return ans;
	//si la respuesta ya esta en minusculas
	//lo devuelve tal cual
	else if((ans>'A')&&(ans<'Z'))
	{
		ans=ans+32;
		return ans;
	}
	//si la respuesta esta en mayusculas
	//lo transforma en minusculas y lo devuelve
}
//Usados en Bola del 8cho
void futuro()
{
	char ans;
	printf("Veo que tienes agallas\n");
	printf("Adelante, preguntame lo que quieras conocer\n");
	scanf(" %[^\n]");
	//permite que el usuario escribe cualquier cosa
	//hasta que de un salto de pagina.
	//Este dato al ser irrelevante para el resto del programa
	//no se dirige a niguna variable(podriamos considerarlo como datos inutiles)
	prediccion();
	//ejecuta el programa
	system("pause");
	system("cls");
	printf("Quieres preguntarme algo mas?(s/cualquier otra tecla)\n");
	scanf(" %c", &ans);
	//pregunta al usuario si quiere realizar otra pregunta
	ans=mins(ans);
    if(ans=='s')
    futuro();
    //realizamos una recursividad si la respuesta es s
    //lo que permite volver ha realizar el programa desde el inicio
    else
    printf("Espero haberte servido de mucho, nos veremos en otro momento\n");
    //termina el programa
}
void prediccion()
{
	FILE *pf;
	string res[21];
	int i;
	srand(time(NULL));
	i=rand()%20+0;
	//genera un numero aleatorio del 0 al 20
	lecturafichero(pf, res, 21);
	//almacena en un vector las respuestas
	printf("%s\n",res[i].string);
	//imprime en pantalla la respuesta que pertenece
	//a la posicion i elegida aleatoriamente
}
int lecturafichero(FILE *pf, string *res, int n)
{
	int i;
	char x;
	pf=fopen("bola_del_8.txt","r");
	//abre el fichero
	if(pf==NULL)
	{
		printf("error: no se ha podido abrir el fichero\n");
		return 0;
	}
	for(i=0;i<n;i++)
	{
		fscanf(pf," %400[^\n]",res[i].string);	
	}
	//almcena en cada posicion del vector una respuesta
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
//Usados en Hundir la flota
//...
//Usados en Questionary
//Funcion que suma la puntuacion e indica si la respuesta es correcta o no//
int puntuacion(char actualAns, char correctAns)
{	
	if(actualAns == correctAns) //Esto se ejecutara cuando la respuesta otorgada por el usuario sea igual a la respuesta que el programa reconoce como correcta//
	{
		printf("\nRespuesta correcta, ganas 1 punto.\n");
		return 1;
	}
	else
	{
		printf("\nRespuesta incorrecta, la correcta era la %c.\n", correctAns);
		return 0;
	}		
}
//HISTORIA//
//Funcion para imprimir en pantalla la pregunta 1 de HISTORIA//
void leefichero_p1_h()
{
	FILE *p;
	char aux;
	p=fopen("questionary/historia/p1.txt","r"); //Fichero que abre la pregunta 1 de HISTORIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);
}
//Funcion para imprimir en pantalla la pregunta 2 de HISTORIA//
void leefichero_p2_h()
{
	FILE *p;
	char aux;
	p=fopen("questionary/historia/p2.txt","r"); //Fichero que abre la pregunta 2 de HISTORIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);
}
//Funcion para imprimir en pantalla la pregunta 3 de HISTORIA//
void leefichero_p3_h()
{
	FILE *p;
	char aux;
	p=fopen("questionary/historia/p3.txt","r"); //Fichero que abre la pregunta 3 de HISTORIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);
}
//Funcion para imprimir en pantalla la pregunta 4 de HISTORIA//
void leefichero_p4_h()
{
	FILE *p;
	char aux;
	p=fopen("questionary/historia/p4.txt","r"); //Fichero que abre la pregunta 4 de HISTORIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);
}
//Funcion para imprimir en pantalla la pregunta 5 de HISTORIA//
void leefichero_p5_h()
{
	FILE *p;
	char aux;
	p=fopen("questionary/historia/p5.txt","r"); //Fichero que abre la pregunta 5 de HISTORIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);
}
//Funcion para imprimir en pantalla la pregunta 6 de HISTORIA//
void leefichero_p6_h()
{
	FILE *p;
	char aux;
	p=fopen("questionary/historia/p6.txt","r"); //Fichero que abre la pregunta 6 de HISTORIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);
}
//Funcion para imprimir en pantalla la pregunta 7 de HISTORIA//
void leefichero_p7_h()
{
	FILE *p;
	char aux;
	p=fopen("questionary/historia/p7.txt","r"); //Fichero que abre la pregunta 7 de HISTORIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);
}
//Funcion para imprimir en pantalla la pregunta 8 de HISTORIA//
void leefichero_p8_h()
{
	FILE *p;
	char aux;
	p=fopen("questionary/historia/p8.txt","r"); //Fichero que abre la pregunta 8 de HISTORIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);
}
//Funcion para imprimir en pantalla la pregunta 8 de HISTORIA//
void leefichero_p9_h()
{
	FILE *p;
	char aux;
	p=fopen("questionary/historia/p9.txt","r"); //Fichero que abre la pregunta 9 de HISTORIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);
}
//Funcion para imprimir en pantalla la pregunta 8 de HISTORIA//
void leefichero_p10_h()
{
	FILE *p;
	char aux;
	p=fopen("questionary/historia/p10.txt","r"); //Fichero que abre la pregunta 10 de HISTORIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);
}
//Funcion donde tiene lugar la parte de las preguntas y respuestas de HISTORIA //
int questHistoria()
{
	char name[20]; //Aqui se almacena el nombre del usuario//
	int contador=0;
	char ansUsuario; //Variable empleada para almacenar la eleccion del jugador//
	leefichero_p1_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 1 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'b');
	leefichero_p2_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 2 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'b');
	leefichero_p3_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 3 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p4_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 4 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p5_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 5 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p6_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 6 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p7_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 7 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'b');
	leefichero_p8_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 8 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	leefichero_p9_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 9 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'd');
	leefichero_p10_h(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 10 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	system("pause"); //Para dar tiempo al usuario a leer la ultima respuesta antes de llegar a la puntuacion//
	system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//
	printf("%s, Tu puntuacion es: %i", name, contador);
	return contador;
}
//GEOGRAFIA//
//Funcion para imprimir en pantalla la pregunta 1 de GEOGRAFIA//
void leefichero_p1_g()
{
	FILE *p;
	char aux;
	p=fopen("questionary/geografia/p1.txt","r"); //Fichero que abre la pregunta 1 de GEOGRAFIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 2 de GEOGRAFIA//
void leefichero_p2_g()
{
	FILE *p;
	char aux;
	p=fopen("questionary/geografia/p2.txt","r"); //Fichero que abre la pregunta 2 de GEOGRAFIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 3 de GEOGRAFIA//
void leefichero_p3_g()
{
	FILE *p;
	char aux;
	p=fopen("questionary/geografia/p3.txt","r"); //Fichero que abre la pregunta 3 de GEOGRAFIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 4 de GEOGRAFIA//
void leefichero_p4_g()
{
	FILE *p;
	char aux;
	p=fopen("questionary/geografia/p4.txt","r"); //Fichero que abre la pregunta 4 de GEOGRAFIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 5 de GEOGRAFIA//
void leefichero_p5_g()
{
	FILE *p;
	char aux;
	p=fopen("questionary/geografia/p5.txt","r"); //Fichero que abre la pregunta 5 de GEOGRAFIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 6 de GEOGRAFIA//
void leefichero_p6_g()
{
	FILE *p;
	char aux;
	p=fopen("questionary/geografia/p6.txt","r"); //Fichero que abre la pregunta 6 de GEOGRAFIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 7 de GEOGRAFIA//
void leefichero_p7_g()
{
	FILE *p;
	char aux;
	p=fopen("questionary/geografia/p7.txt","r"); //Fichero que abre la pregunta 7 de GEOGRAFIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 8 de GEOGRAFIA//
void leefichero_p8_g()
{
	FILE *p;
	char aux;
	p=fopen("questionary/geografia/p8.txt","r"); //Fichero que abre la pregunta 8 de GEOGRAFIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 9 de GEOGRAFIA//
void leefichero_p9_g()
{
	FILE *p;
	char aux;
	p=fopen("questionary/geografia/p9.txt","r"); //Fichero que abre la pregunta 9 de GEOGRAFIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 10 de GEOGRAFIA//
void leefichero_p10_g()
{
	FILE *p;
	char aux;
	p=fopen("questionary/geografia/p10.txt","r"); //Fichero que abre la pregunta 10 de GEOGRAFIA//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion donde tiene lugar la parte de las preguntas y respuestas de GEOGRAFIA //
int questGeografia()
{
	char name[20]; //Aqui se almacena el nombre del usuario//
	int contador=0;
	char ansUsuario; //Variable empleada para almacenar la eleccion del jugador//
	leefichero_p1_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 1 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'b');
	leefichero_p2_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 2 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p3_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 3 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p4_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 4 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p5_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 5 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p6_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 6 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p7_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 7 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'b');
	leefichero_p8_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 8 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	leefichero_p9_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 9 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'd');
	leefichero_p10_g(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 10 de geografia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	system("pause"); //Para dar tiempo al usuario a leer la ultima respuesta antes de llegar a la puntuacion//
	system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//
	printf("%s, Tu puntuacion es: %i", name, contador);
	return contador;
}
//CIENCIA//
//Funcion para imprimir en pantalla la pregunta 1 de CIENCIA//
void leefichero_p1_c()
{
	FILE *p;
	char aux;
	p=fopen("questionary/ciencia/p1.txt","r"); //Fichero que abre la pregunta 1 de ciencia//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 2 de CIENCIA//
void leefichero_p2_c()
{
	FILE *p;
	char aux;
	p=fopen("questionary/ciencia/p2.txt","r"); //Fichero que abre la pregunta 2 de ciencia//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 3 de CIENCIA//
void leefichero_p3_c()
{
	FILE *p;
	char aux;
	p=fopen("questionary/ciencia/p3.txt","r"); //Fichero que abre la pregunta 3 de ciencia//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 4 de CIENCIA//
void leefichero_p4_c()
{
	FILE *p;
	char aux;
	p=fopen("questionary/ciencia/p4.txt","r"); //Fichero que abre la pregunta 4 de ciencia//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 5 de CIENCIA//
void leefichero_p5_c()
{
	FILE *p;
	char aux;
	p=fopen("questionary/ciencia/p5.txt","r"); //Fichero que abre la pregunta 5 de ciencia//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 6 de CIENCIA//
void leefichero_p6_c()
{
	FILE *p;
	char aux;
	p=fopen("questionary/ciencia/p6.txt","r"); //Fichero que abre la pregunta 6 de ciencia//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 7 de CIENCIA//
void leefichero_p7_c()
{
	FILE *p;
	char aux;
	p=fopen("questionary/ciencia/p7.txt","r"); //Fichero que abre la pregunta 7 de ciencia//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 8 de CIENCIA//
void leefichero_p8_c()
{
	FILE *p;
	char aux;
	p=fopen("questionary/ciencia/p8.txt","r"); //Fichero que abre la pregunta 8 de ciencia//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 9 de CIENCIA//
void leefichero_p9_c()
{
	FILE *p;
	char aux;
	p=fopen("questionary/ciencia/p9.txt","r"); //Fichero que abre la pregunta 9 de ciencia//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 10 de CIENCIA//
void leefichero_p10_c()
{
	FILE *p;
	char aux;
	p=fopen("questionary/ciencia/p10.txt","r"); //Fichero que abre la pregunta 10 de ciencia//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion donde tiene lugar la parte de las preguntas y respuestas de CIENCIA //
int questCiencia()
{
	char name[20]; //Aqui se almacena el nombre del usuario//
	int contador=0;
	char ansUsuario; //Variable empleada para almacenar la eleccion del jugador//
	leefichero_p1_c(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 1 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	leefichero_p2_c(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 2 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'd');
	leefichero_p3_c(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 3 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p4_c(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 4 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'b');
	leefichero_p5_c(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 5 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'b');
	leefichero_p6_c(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 6 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	leefichero_p7_c(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 7 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p8_c(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 8 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	leefichero_p9_c(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 9 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p10_c(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 10 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	system("pause"); //Para dar tiempo al usuario a leer la ultima respuesta antes de llegar a la puntuacion//
	system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//
	printf("%s, Tu puntuacion es: %i", name, contador);
	return contador;
}
//ARTE//
//Funcion para imprimir en pantalla la pregunta 1 de ARTE//
void leefichero_p1_a()
{
	FILE *p;
	char aux;
	p=fopen("questionary/arte/p1.txt","r"); //Fichero que abre la pregunta 1 de arte//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 2 de ARTE//
void leefichero_p2_a()
{
	FILE *p;
	char aux;
	p=fopen("questionary/arte/p2.txt","r"); //Fichero que abre la pregunta 2 de arte//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 3 de ARTE//
void leefichero_p3_a()
{
	FILE *p;
	char aux;
	p=fopen("questionary/arte/p3.txt","r"); //Fichero que abre la pregunta 3 de arte//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 4 de ARTE//
void leefichero_p4_a()
{
	FILE *p;
	char aux;
	p=fopen("questionary/arte/p4.txt","r"); //Fichero que abre la pregunta 4 de arte//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 5 de ARTE//
void leefichero_p5_a()
{
	FILE *p;
	char aux;
	p=fopen("questionary/arte/p5.txt","r"); //Fichero que abre la pregunta 5 de arte//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 6 de ARTE//
void leefichero_p6_a()
{
	FILE *p;
	char aux;
	p=fopen("questionary/arte/p6.txt","r"); //Fichero que abre la pregunta 6 de arte//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 7 de ARTE//
void leefichero_p7_a()
{
	FILE *p;
	char aux;
	p=fopen("questionary/arte/p7.txt","r"); //Fichero que abre la pregunta 7 de arte//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 8 de ARTE//
void leefichero_p8_a()
{
	FILE *p;
	char aux;
	p=fopen("questionary/arte/p8.txt","r"); //Fichero que abre la pregunta 8 de arte//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}

//Funcion para imprimir en pantalla la pregunta 9 de ARTE//
void leefichero_p9_a()
{
	FILE *p;
	char aux;
	p=fopen("questionary/arte/p9.txt","r"); //Fichero que abre la pregunta 9 de arte//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion para imprimir en pantalla la pregunta 10 de ARTE//
void leefichero_p10_a()
{
	FILE *p;
	char aux;
	p=fopen("questionary/arte/p10.txt","r"); //Fichero que abre la pregunta 10 de arte//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
	fclose(p);	
}
//Funcion donde tiene lugar la parte de las preguntas y respuestas de ARTE //
int questArte()
{
	char name[20]; //Aqui se almacena el nombre del usuario//
	int contador=0;
	char ansUsuario; //Variable empleada para almacenar la eleccion del jugador//
	leefichero_p1_a(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 1 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'd');
	leefichero_p2_a(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 2 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	leefichero_p3_a(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 3 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'd');
	leefichero_p4_a(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 4 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	leefichero_p5_a(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 5 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	leefichero_p6_a(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 6 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	leefichero_p7_a(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 7 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	leefichero_p8_a(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 8 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'd');
	leefichero_p9_a(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 9 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'a');
	leefichero_p10_a(); //Se ejecuta la funcion encargada de leer el fichero de la pregunta 10 de historia(descrita al final del programa)//
	printf("\nTu respuesta:\t");
	scanf(" %c", &ansUsuario);
	contador+=puntuacion(ansUsuario, 'c');
	system("pause"); //Para dar tiempo al usuario a leer la ultima respuesta antes de llegar a la puntuacion//
	system("cls"); //Para limpiar el texto anterior y proporcionar mejor estetica al programa//
	printf("%s, Tu puntuacion es: %i", name, contador);
	return contador;
}
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
	//da un valor aleatorio a la posicion x del tesoro
	res->y=rand() % 10+0;
	//da un valor aleatorio a la posicion y del tesoro
}
int busqueda(posicion *tesoro, posicion *usuario)
{
	posicion *t=tesoro,*u=usuario;
	u->x=u->y=0;
	//el usuario empieza en el punto (0,0)
	int i=1,n,b;
	char l,ans,bans;
	do
	{
		printf("Ronda %i\n",i);
		sleep(2);
		b=proximidad(tesoro,usuario);
		//da informacion de la posicion del jugador
		//con respecto al tesoro y devuelve un numero
		if(b==0)
		//si es cero es porque ha ganado el juego
		{
			printf("Has ganado el juego\n");
			printf("Te gustaria volver a jugar?(s/pulsa cualquier tecla)\n");
			scanf(" %c",&bans);
			//decide si jugar de nuevo o salir
			bans=mins(bans);
			if(bans=='s')
			//si decide volver a jugar
			{
				system("cls");
				enterrar(tesoro);
				//vuelvea a asignar un posicion al tesoro
				busqueda(tesoro,usuario);
				//e inicia de nuevo el juego
			}
			else
			//si no
			{
				system("cls");
				printf("Gracias por jugar\n");
				return 0;
				//cierra el programa
			}
		}
		printf("usuario:\n\tx:%i\n\ty:%i\n",u->x,u->y);
		//indica donde esta situado el jugador
		scanf(" %c%i[^\n]",&l,&n);
		//lee como se quiere mover el jugador
		l=mins(l);
		switch(l)
		{
			case 'w':
			{
				avancevertical(n,usuario);
				//se mueve hacia arriba tantas posiciones como haya señalado el usuario
				break;		
			}
			case 'd':
			{
				avancehorizontal(n,usuario);
				//se mueve hacia la derecha...
				break;
			}
			case 's':
			{
				avancevertical(-n,usuario);
				//se mueve hacia abajo...
				break;		
			}
			case 'a':
			{
				avancehorizontal(-n,usuario);
				//se mueve hacia la izquierda...
				break;				
			}		
		}
		i++;
	}
	while(i<=20);
	//el juego acaba tras 20 rondas
	printf("Se ha acabado el juego\n");
	printf("Quieres jugar otra vez?(s/cualquier otra letra)\n");
	scanf(" %c",&ans);
	//el jugador elige si volver a jugar o si salir del programa
	ans=mins(ans);
	if(ans=='s')
	//si decide volver a jugar 
	{
		enterrar(tesoro);
		//se da otra posicion al tesoro
		busqueda(tesoro, usuario);
		//y se vuelve a comenzar el programa
	}
}
int proximidad(posicion *tesoro, posicion *usuario)
{
	posicion *t=tesoro,*u=usuario;
	//compara las posiciones del usuario y del tesoro
	if((abs(u->x-t->x)==0)&&(abs(u->y-t->y)==0))
	//si el usuario esta en la misma posicion que el tesoro devuelve 0, indicando que ha ganado
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
	//aumenta tantas veces como indicadas por el usuario
	if((u->y>10)||(u->y<0))
	{
		printf("Error:te has salido del tablero\n");
		//indica que se ha salido del tablero
		u->y-=n;
		//retrodece las posiciones que habia recorrido
		return 0;
	}
	return 1;
}
int avancehorizontal(int n, posicion *usuario)
{
	//funciona igual que el horizontal pero en horizontal
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
