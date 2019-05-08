#include <stdio.h>
//programa RECETARIO//

void leeCadena(char *cadena); //Funcion para que el programa recorra la cadena de caracteres y la imprime en pantalla(uso bucle FOR)//

//Definicion de las funciones//
//celiaco SALADO//
void fc_s_D_a (); //Funcion para imprimir en pantalla la receta codigo'c_s_D_a'//
void fc_s_D_b (); //Funcion para imprimir en pantalla la receta codigo'c_s_D_b'//
void fc_s_D_c (); //Funcion para imprimir en pantalla la receta codigo'c_s_D_c'//
void fc_s_m_a (); //Funcion para imprimir en pantalla la receta codigo'c_s_m_a'//
void fc_s_m_b (); //Funcion para imprimir en pantalla la receta codigo'c_s_m_b'//
void fc_s_m_c (); //Funcion para imprimir en pantalla la receta codigo'c_s_m_c'//
void fc_s_m_d (); //Funcion para imprimir en pantalla la receta codigo'c_s_m_d'//
void fc_s_a_a (); //Funcion para imprimir en pantalla la receta codigo'c_s_a_a'//
void fc_s_a_b (); //Funcion para imprimir en pantalla la receta codigo'c_s_a_b'//
void fc_s_a_c (); //Funcion para imprimir en pantalla la receta codigo'c_s_a_c'//
void fc_s_a_d (); //Funcion para imprimir en pantalla la receta codigo'c_s_a_d'//
void fc_s_M_a (); //Funcion para imprimir en pantalla la receta codigo'c_s_M_a'//
void fc_s_M_b (); //Funcion para imprimir en pantalla la receta codigo'c_s_M_b'//
void fc_s_c_a (); //Funcion para imprimir en pantalla la receta codigo'c_s_c_a'//
void fc_s_c_b (); //Funcion para imprimir en pantalla la receta codigo'c_s_c_b'//
void fc_s_c_c (); //Funcion para imprimir en pantalla la receta codigo'c_s_c_c'//
void fc_s_c_d (); //Funcion para imprimir en pantalla la receta codigo'c_s_c_d'//  
//celiaco DULCE//
void fc_d_D_a (); //Funcion para imprimir en pantalla la receta codigo'c_d_D_a'//
void fc_d_D_b (); //Funcion para imprimir en pantalla la receta codigo'c_d_D_b'//
void fc_d_D_c (); //Funcion para imprimir en pantalla la receta codigo'c_d_D_c'//
void fc_d_m_a (); //Funcion para imprimir en pantalla la receta codigo'c_d_m_a'//
void fc_d_m_b (); //Funcion para imprimir en pantalla la receta codigo'c_d_m_b'//
void fc_d_a_a (); //Funcion para imprimir en pantalla la receta codigo'c_d_a_a'//
void fc_d_a_b (); //Funcion para imprimir en pantalla la receta codigo'c_d_a_b'//
void fc_d_M_a (); //Funcion para imprimir en pantalla la receta codigo'c_d_M_a'//
void fc_d_M_b (); //Funcion para imprimir en pantalla la receta codigo'c_d_M_b'//
void fc_d_c_a (); //Funcion para imprimir en pantalla la receta codigo'c_d_c_a'//
void fc_d_c_b (); //Funcion para imprimir en pantalla la receta codigo'c_d_c_b'//  

int main () 
{
  char select1; //Variable entera para elegir entre dulce o salado//
  char select2_s, select2_d; //Variable entera para elegir entre desayuno, almuerzo, etc.(salado); y variable entera para elegir entre desayuno, almuerzo, etc.(dulce)
  char select3; //Variable entera para elegir que receta desea el usuario//
  
//Definicion de las cadenas de caracteres tipoMenu: 'CELIACO'//
//celiaco salado//
char c_s_D_a; //Variable que contiene la receta 'c_s_D_a' en una cadena de caracteres//
char c_s_D_b; //Variable que contiene la receta 'c_s_D_b' en una cadena de caracteres//
char c_s_D_c; //Variable que contiene la receta 'c_s_D_c' en una cadena de caracteres//
char c_s_m_a; //Variable que contiene la receta 'c_s_m_a' en una cadena de caracteres//
char c_s_m_b; //Variable que contiene la receta 'c_s_m_b' en una cadena de caracteres//
char c_s_m_c; //Variable que contiene la receta 'c_s_m_c' en una cadena de caracteres//
char c_s_m_d; //Variable que contiene la receta 'c_s_m_d' en una cadena de caracteres//
char c_s_a_a; //Variable que contiene la receta 'c_s_a_a' en una cadena de caracteres//
char c_s_a_b; //Variable que contiene la receta 'c_s_a_b' en una cadena de caracteres//
char c_s_a_c; //Variable que contiene la receta 'c_s_a_c' en una cadena de caracteres//
char c_s_a_d; //Variable que contiene la receta 'c_s_a_d' en una cadena de caracteres//
char c_s_M_a; //Variable que contiene la receta 'c_s_M_a' en una cadena de caracteres//
char c_s_M_b; //Variable que contiene la receta 'c_s_M_b' en una cadena de caracteres//
char c_s_c_a; //Variable que contiene la receta 'c_s_c_a' en una cadena de caracteres//
char c_s_c_b; //Variable que contiene la receta 'c_s_c_b' en una cadena de caracteres//
char c_s_c_c; //Variable que contiene la receta 'c_s_c_c' en una cadena de caracteres//
char c_s_c_d; //Variable que contiene la receta 'c_s_c_d' en una cadena de caracteres//
//celiaco dulce//
char c_d_D_a; //Variable que contiene la receta 'c_d_D_a' en una cadena de caracteres//
char c_d_D_b; //Variable que contiene la receta 'c_d_D_b' en una cadena de caracteres//
char c_d_D_c; //Variable que contiene la receta 'c_d_D_c' en una cadena de caracteres//
char c_d_m_a; //Variable que contiene la receta 'c_d_m_a' en una cadena de caracteres//
char c_d_m_b; //Variable que contiene la receta 'c_d_m_b' en una cadena de caracteres//
char c_d_a_a; //Variable que contiene la receta 'c_d_a_a' en una cadena de caracteres//
char c_d_a_b; //Variable que contiene la receta 'c_d_a_b' en una cadena de caracteres//

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
				      printf("1.Masa para pizzas sin gluten(a)\n2.Lasagna a la bolognesa sin gluten(b)\n3.Hojaldre relleno de queso de cabra(c)\n4.Croquetas de Jamon Serrano y Queso(d)\n");
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
					  printf("1.3. Tortitas caseras de trigo sarraceno o maiz\n(2)Galletas de vainilla y mandioca\n(3)Bol de fruta con quinoa\n");
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
					  printf("1.Galletas de Mantequilla de Cacahuete con Chocolate Blanco\n(2)Hojaldre de cebolla y calabaza caramelizada con queso rulo de cabra\n");
					  scanf(" %c", &select3); //Aqui es usuario teclea la opcion que desee para obetener impresa en pantalla su receta deseada//
					  switch(select3)
						{
							case 'a':
							  printf("Has escogido: 1.'Tortitas caseras de trigo sarraceno o maiz'\n");//Codigo de esta receta:'c_d_D_a'//
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
					  printf("(1)Escalopines en salsa agridulce sin gluten\n(2)Lomo de cerdo agridulce\n");
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
					  printf("(1)Magdalenas de vainilla sin gluten\n(2)Pastel Biarritz sin gluten\n");
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
					  printf("(1)Croquetas de arroz con leche\n(2)\n");
					  scanf(" %c", &select3); //Aqui es usuario teclea la opcion que desee para obetener impresa en pantalla su receta deseada//
					  switch(select3)
						{
							case 'a':
							  printf("Has escogido: 1.'Croquetas de arroz con leche'\n");//Codigo de esta receta:'c_d_c_a'//
						  	  fc_d_c_a (); //Nombre de la funcion que imprime la receta codigo: 'c_d_c_a'//
						  	  break;
						  	case 'b':
						  	  printf("Has escogido: 2.''\n");//Codigo de esta receta:'c_d_c_b'//
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
return 0;
}


//DEFINICION DE LAS FUNCIONES EMPLEADAS EN ESTE PROGRAMA://

//Definicion de las funciones tipoMenu: 'CELIACO SALADO'//

void fc_s_D_a () //Funcion para imprimir en pantalla la receta codigo'c_s_D_a'//
{
	FILE *p;
	char aux;
	p=fopen("recetas/salado/c_s_D_a.txt","r");
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

void fc_s_D_b () //Funcion para imprimir en pantalla la receta codigo'c_s_D_b'//
{
	FILE *p;
	char aux;
	p=fopen("recetas/salado/c_s_D_b.txt","r"); //Fichero que abre la receta c_s_D_b//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'c_s_D_c'//
void fc_s_D_c ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/salado/c_s_D_c.txt","r"); //Fichero que abre la receta c_s_D_c//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'c_s_m_a'//
void fc_s_m_a ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/salado/c_s_m_a.txt","r"); //Fichero que abre la receta c_s_m_a//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'c_s_m_b'//
void fc_s_m_b ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/salado/c_s_m_b.txt","r"); //Fichero que abre la receta c_s_m_b//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'c_s_m_c'//
void fc_s_m_c ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/salado/c_s_m_c.txt","r"); //Fichero que abre la receta c_s_m_c//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'fc_s_m_d'//
void fc_s_m_d ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/salado/c_s_m_c.txt","r"); //Fichero que abre la receta c_s_m_d//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'fc_s_a_a'//
void fc_s_a_a ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/salado/c_s_a_a.txt","r"); //Fichero que abre la receta c_s_a_a//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'c_s_a_b'//
void fc_s_a_b ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/salado/c_s_a_b.txt","r"); //Fichero que abre la receta c_s_a_b//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'c_s_a_c'//
void fc_s_a_c ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/salado/c_s_a_c.txt","r"); //Fichero que abre la receta c_s_a_c//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'fc_s_a_d'//
void fc_s_a_d ()
{
char c_s_a_d[] = //Usamos \ para escribir varias lineas
"INGREDIENTES PARA LA MASA:\n\
250 gr de harina sin gluten\n\
3 huevos\n\
3 cucharadas de aceite\n\
3 cucharadas de agua\n\
PREPARACION:\n\
1. Poner la harina con la forma de un volcan en la tabla de amasar e incorporar en el centro el huevo, el aceite, y el agua.\n\
Trabajar la masa hasta que quede bien ligada (se tiene que despegar de las manos).\n\
Amasamos y la introducimos en los rodillos de la maquina de hacer pasta.\n\
Despues se vuelve a pasar por la maquina utilizando la cuchillas de corte. No es totalmente necesario la maquina,\n\
se puede hacer tambien amasando bien con un rodillo manual y cortando despues la masa con un cuchillo.\n\
2. Para terminar la cocemos en agua salada con un poco de aceite durante 5 minutos.";
leeCadena(c_s_a_d);
}

//Funcion para imprimir en pantalla la receta codigo'fc_s_M_a'//
void fc_s_M_a ()
{
char c_s_M_a[] = //Usamos \ para escribir varias lineas
"INGREDIENTES:\n\
4 huevos\n\
3 latas de atun con tomate\n\
50 gramos de concentrado de tomate (o tomate frito)\n\
60 gramos de nata liquida para montar\n\
90 gramos de queso emmental\n\
2 cucharaditas de oregano\n\
Pimienta negra recien molida\n\
1 cucharadita de levadura quimica o polvos de hornear\n\
PREPARACION:\n\
1. Batimos los huevos, echamos las tres latas de atun con tomate, el queso rallado, la nata, el concentrado de tomate,\n\
la levadura, el oregano y una pizca de pimienta negra. Vertemos esta mezcla en las capsulas de papel,\n\
dejando un dedo libre ya que suben un poco y horneamos en horno precalentado, a 180 grados C unos doce o quince minutos.\n\
Podeis comprobar que estan hechas, pinchando con una brocheta: si sale limpia es que ya estan. Sacamos y dejamos enfriar.";
leeCadena(c_s_M_a);
}

//Funcion para imprimir en pantalla la receta codigo'fc_s_M_b'//
void fc_s_M_b ()
{
char c_s_M_b[] = //Usamos \ para escribir varias lineas
"INGREDIENTES:\n\
100 gr. de fécula de maíz\n\
80 gr. de fécula de mandioca\n\
60 gr. de harina de arroz\n\
100 ml. de leche\n\
1 cucharada de polvo leudante\n\
50 gr. de margarina\n\
1 huevo\n\
Queso rallado al gusto\n\
Sal\n\
PREPARACION:\n\
1. Incorpora en un bol la harina de arroz, la fecula de maiz y la fecula de mandioca previamente tamizadas.\n\
2. Calienta en un cazo la margarina a fuego lento y cuando esté derrita añade la leche y el queso. Remueve para integrar hasta que el queso se funda.\n\
Precalienta el horno a 180 grados C.\n\
3. Incorpora la mezcla de queso, leche y mantequilla al bol y amasa con tus manos para integrar.\n\
Bate el huevo e incorporalo a la preparacion junto con el polvo leudante y una pizca de sal. Amasa hasta tener una masa suave y consistente.\n\
4. Estira la masa con un rodillo sobre un meson, corta las galletas de la forma de tu preferencia\n\
y colocalas en una bandeja para hornear previamente forrada con papel film. Hornea durante 20 minutos a 180 grados C.\n\
5. Saca la bandeja del horno, deja enfriar las galletas saldas sin gluten y luego sirve y disfruta. ¡Qué aproveche!";
leeCadena(c_s_M_b);
}

//Funcion para imprimir en pantalla la receta codigo'fc_s_c_a'//
void fc_s_c_a ()
{
char c_s_c_a[] = //Usamos \ para escribir varias lineas
"INGREDIENTES:\n\
250 g de harina o preparado sin gluten\n\
1 cucharada sopera de aceite\n\
5 g de levadura prensada de panaderia\n\
2 g de sal\n\
150 g de agua\n\
PREPARACION:\n\
1. Hacer un volcan con la harina sobre una mesa, y hacer un hueco en el centro.\n\
Incorporar todos los ingredientes en el hueco y mezclar los ingredientes de dentro hacia fuera,\n\
hasta conseguir una masa homogenea no demasiado dura, agregando harina y/o agua si fuese necesario para conseguir la textura adecuada.\n\
Dejar reposar 20 minutos y estirar en una mesa espolvoreada con harina sin gluten, y darle la forma deseada. Se puede congelar.";
leeCadena(c_s_c_a);
}

//Funcion para imprimir en pantalla la receta codigo'fc_s_c_b'//
void fc_s_c_b ()
{
char c_s_c_b[] = //Usamos \ para escribir varias lineas
"INGREDIENTES:\n\
200 gr. de placas para lasagna sin gluten\n\
150 gr. de queso para gratinar,\n\
1/2 kg. de carne picada\n\
50 gr. de aceite de oliva\n\
3 zanahorias\n\
2 cebollas\n\
4 dientes de ajo\n\
1/2 kg. de tomate triturado\n\
1 pastilla de caldo sin gluten\n\
100 ml. de vino blanco\n\
pimienta negra\n\
oregano y sal.\n\
INGREDIENTE PARA LA BECHAMEL:\n\
2 cucharadas soperas de harina sin gluten\n\
50 gr. de mantequilla\n\
2 cucharadas de aceite de oliva\n\
3/4 litros de leche\n\
sal y pimienta blanca.\n\
PREPARACION:\n\
1. Pon a pochar la cebolla, el ajo y la zanahoria, todo ello bien picado, en una cazuela con aceite de oliva.\n\
Una vez tengamos las verduras bien pochadas, agrega la carne y rehoga el conjunto durante 5 minutos.\n\
Acto seguido, agrega el tomate triturado, la pastilla de caldo disuelta en agua, el vino blanco y las especias.\n\
Deja cocinar la salsa a fuego suave durante 45 minutos.\n\
2. Mientras se termina de cocinar la salsa, pon a cocer las placas de lasaña en una olla con abundante agua hirviendo y sal.\n\
Cuando estas se encuentren al dente, escurrelas y depositalas sobre un paño de cocina humedo.\n\
3. Coloca una capa de pasta en una bandeja refractaria.\n\
Cubrela con la salsa preparada, un poco de bechamel y queso rallado.\n\
Repite la misma operacion hasta acabar con una capa de pasta, la cual cubriremos con bechamel y queso rallado.\n\
4. Introduce la lasagna en el horno precalentado a 180 grados C hasta que quede bien dorada.";
leeCadena(c_s_c_b);
}

//Funcion para imprimir en pantalla la receta codigo'fc_s_c_c'//
void fc_s_c_c ()
{
char c_s_c_c[] = //Usamos \ para escribir varias lineas
"INGREDIENTES:\n\
1 paquete de hojaldre\n\
150 g queso de oveja\n\
6 tomates secos\n\
10 aceitunas deshuesadas\n\
3 cda.  de Creme fraiche (nata fresca)\n\
1 cda. de aceite de oliva\n\
PREPARACION:\n\
1. Aplastar el queso de cabra con un tenedor.\n\
2. Cortar los tomates y las olivas en trozos chiquititos, y mezclarlos con el queso de cabra, la Creme fraiche\n\
y las hierbas aromaticas hasta obtener una pasta.\n\
3. Extender la masa de hojaldre sobre una superficie enharinada hasta conseguir un rectangulo de 2 mm de espesor.\n\
4. Cortar la masa en cuadrados de 8 x 8 cm.\n\
5. Colocar los restos de masa unos encima de otros sin amasar, y volver a extender.\n\
6. Colocar una cucharadita colmada de la masa de queso de cabra en el medio de cada cuadrado.\n\
7. Untar los bordes con agua.\n\
8. Plegar cada cuadrado de hojaldre formando un triangulo.\n\
10. Presionar los bordes con un tenedor de postre bañado en harina. Eventualmente, pintarlo con leche.\n\
11. Cocer en el horno a 220 grados C durante 12-15 minutos hasta que queden dorados.\n\
12. Colocar sobre papel de cocina para que absorba la grasa.\n\
13. Servir caliente.";
leeCadena(c_s_c_c);
}

//Funcion para imprimir en pantalla la receta codigo'fc_s_c_d'//
void fc_s_c_d ()
{
char c_s_c_d[] = //Usamos \ para escribir varias lineas
"INGREDIENTES:\n\
150 g harina\n\
200 g jamon crudo (Serrano) \n\
150 g queso rallado\n\
1 cebolla chiquitita\n\
100 g mantequilla\n\
1 l de leche entera fresca\n\
sal y pimienta\n\
INGREDIENTES PARA EL EMPANADO:\n\
huevo\n\
Pan Grati\n\
harina\n\
PREPARACION:\n\
1. Picar el jamon serrano en trocitos muy chiquititos y reservar.\n\
2.Templar la leche en una olla y reservar.\n\
3. Rehogar la cebolla muy picada junto a la mantequilla en una sarten.\n\
4. Incorporar el jamon serrano cuando la cebolla este transparente.\n\
5. Incorporamos la harina poco a  poco y con varillas rehogar unos 2 minutos.\n\
6. Incorporar poco a poco la leche y mezclar sin parar con unas varillas hasta que la salsa espese, unos 10 minutos.\n\
7. Echar la sal y la pimienta al gusto.\n\
8. Cocinar sin dejar de remover unos 2 minutos mas.\n\
9. Incorporar el queso y mezclar.\n\
10. Colocar la masa en un recipiente rectangular, y dejarla enfriar en la nevera.\n\
11. Dar forma a las croquetas preparando 3 platos, uno con harina, otro con huevo batido y el ultimo con pan rallado.\n\
12. Utilizar dos cucharitas de postre e ir cogiendo porciones y dando forma, pasando por harina, huevo y por ultimo por pan rallado.\n\
13. Freir en abundante aceite caliente hasta que esten doradas por ambos lados.\n\
14. Escurrir en un papel de cocina para eliminar el exceso de aceite.";
leeCadena(c_s_c_d);
}


//Definicion de las funciones tipoMenu: 'CELIACO DULCE'//

//Funcion para imprimir en pantalla la receta codigo'c_d_D_a'//
void fc_d_D_a ()
{
char c_d_D_a[] = //Usamos \ para escribir varias lineas
"INGREDIENTES:\n\
150g de harina de trigo sarraceno o maiz.\n\
2 vasos de agua.\n\
1 huevo.\n\
Canela al gusto (opcional).\n\
1/2 platano o 2-3 a.\n\
1 cucharada sopera de aceite de oliva.\n\
PREPARACION:\n\
1. Incorpora la harina de trigo sarraceno o maiz, el agua, el platano o los datiles, el huevo y, si quieres, la canela.\n\
2. Batelo hasta dejar la mezcla homogenea. Pon a calentar la sarten, echa un chorrito de aceite de oliva y ve echando la mezcla poco a poco.\n\
3. Dale la vuelta a la tortita cuando veas que se va oscureciendo por los extremos.\n\
4. Repite el proceso para cada tortita.\n\
5. Con esta mezcla tendras para unas 10 unidades.\n\
6. Emplata y sirvelo a tu gusto.\n\
7. Puedes espolvorear canela o cacao por encima, trocitos de fruta o alguna crema de frutos secos como la de almendras o cacahuete.\n";
leeCadena(c_d_D_a);
}

//Funcion para imprimir en pantalla la receta codigo'c_d_D_b'//
void fc_d_D_b ()
{
char c_d_D_b[] = //Usamos \ para escribir varias lineas
"INGREDIENTES:\n\
400 grs. de harina de mandioca\n\
170 grs. de harina de arroz\n\
1/2 cdita. de bicarbonato\n\
6 cdas. de azucar\n\
110 grs. de margarina o manteca fria\n\
5 claras de huevo\n\
1 yema de huevo\n\
1 cdita. de esencia de vainilla\n\
PREPARACION:\n\
1. Tamizar las dos harinas conjunto el bicarbonato y el azucar, realizar una corona, o sea un hueco en los secos e integrar la margarina fria,\n\
mezclarla bien hasta formar unas migajas, agregar los huevos y la esencia de vainilla, unir y formar la masa.\n\
2. Formar las galletas, pre-calentar el horno 5 minutos, y luego hornear las galletas a fuego moderado hasta que esten doradas, alrededor de 10 a 20 minutos.";
leeCadena(c_d_D_b);
}

//Funcion para imprimir en pantalla la receta codigo'c_d_D_c'//
void fc_d_D_c ()
{
char c_d_D_c[] = //Usamos \ para escribir varias lineas
"INGREDIENTES:\n\
Quinoa cocida(aprox 1/4 del bol)\n\
leche\n\
1 pieza de mango, una manzana, un platano y frutos rojos\n\
6 o 7 almendras (al natural o tostadas)\n\
PREPARACION:\n\
1. Si queremos desayunos sin gluten y saludables tenemos la alternativa de mezclar quinoa cocida,\n\
que podemos haber preparado previamente y conservar en el frigorifico, en un bol con leche (natural o de almendras, arroz).\n\
2. Incorporamos algunas frutas como mango pelado y cortado de dados, manzana o platano.\n\
3. Tambien podemos integrar en el desayuno frutos rojos e incluso almendras laminadas.\n\
Endulzar al gusto con azucar, miel o jarabe de arce.";
leeCadena(c_d_D_c);
}

//Funcion para imprimir en pantalla la receta codigo'c_d_m_a'//
void fc_d_m_a ()
{
char c_d_m_a[] = //Usamos \ para escribir varias lineas
"INGREDIENTES PARA LAS GALLETAS:\n\
115 gr mantequilla sin sal (a temperatura ambiente)\n\
100 gr azUcar moreno\n\
50 gr azUcar normal\n\
1 huevo\n\
200 gr mantequilla de cacahuete\n\
1 cdta esencia de vainilla\n\
1/4 cdta bicarbonato sOdico\n\
140 gr harina normal\n\
100 gr chips de chocolate blanco\n\
INGREDIENTES PARA LA DECORACION:\n\
150 gr chocolate blanco\n\
PREPARACION DE LAS GALLETAS:\n\
Batimos los dos tipos de azucar con la mantequilla hasta llegar a punto pomada\n\
Incorporamos el huevo y mezclamos hasta integrar\n\
Agregamos la mantequilla de cacahuete y la esencia de vainilla y lo batimos.\n\
Tamizamos la harina con el bicarbonato y lo incorporamos a cucharadas a la mezcla anterior\n\
Paramos la batidora y agregamos los chips de chocolate blanco. Mezclamos manualmente usando una paleta.\n\
Refrigeramos 20 minutos la masa\n\
PREPARACION DE LA DECORACION:\n\
Derretimos el chocolate blanco a 40 grados aplicando tiempos de 30 segundos en el microondas.\n\
Atemperamos a 24 grados el chocolate, rellenamos una manga pastelera, le cortamos la punta y hacemos hilos de chocolate sobre las galletas.\n\
Si quieres que tenga un punto más crujiente usa mantequilla de cacahuete con trocitos";
leeCadena(c_d_m_a);
}

//Funcion para imprimir en pantalla la receta codigo'c_d_m_b'//
void fc_d_m_b ()
{
char c_d_m_b[] = //Usamos \ para escribir varias lineas
"INGREDIENTES:\n\
1 lámina de masa de hojaldre sin gluten fresca\n\
1 tarro de cebolla caramelizada sin gluten\n\
1 tarro de calabaza caramelizada sin gluten\n\
250 g de queso rulo de cabra apto\n\
1 huevo\n\
PREPARACION:\n\
Batimos los dos tipos de azúcar con la mantequilla hasta llegar a punto pomada\n\
Incorporamos el huevo y mezclamos hasta integrar\n\
Agregamos la mantequilla de cacahuete y la esencia de vainilla y lo batimos.\n\
Tamizamos la harina con el bicarbonato y lo incorporamos a cucharadas a la mezcla anterior\n\
Paramos la batidora y agregamos los chips de chocolate blanco. Mezclamos manualmente usando una paleta.\n\
Refrigeramos 20 minutos la masa\n\
PREPARACION DE LA DECORACION:\n\
Derretimos el chocolate blanco a 40 grados aplicando tiempos de 30 segundos en el microondas.\n\
Atemperamos a 24 grados el chocolate, rellenamos una manga pastelera, le cortamos la punta y hacemos hilos de chocolate sobre las galletas.\n\
Si quieres que tenga un punto más crujiente usa mantequilla de cacahuete con trocitos";
leeCadena(c_d_m_b);
}

//Funcion para imprimir en pantalla la receta codigo'c_d_a_a'//
void fc_d_a_a ()
{
char c_d_a_a[] = //Usamos \ para escribir varias lineas
"INGREDIENTES:\n\
60 g de azucar integral\n\
30 g de vinagre de manzana\n\
70 g de tamari\n\
100 g de jerez seco\n\
50 g de ketchup sin gluten\n\
500 g de escalopines de cerdo\n\
1 lata de pinha\n\
20 g de maicena\n\
PREPARACION:\n\
Cortamos cada escalopin en 3 trozos y, de paso, retiramos los restos de grasa o telillas que puedan tener.\n\
Ponemos en el vaso el azucar integral, el vinagre, el tamari, el jerez, el ketchup y 50 g de jugo de la pinha.\n\
Mezclamos durante unos segundos.\n\
A continuacion, incorporamos los escalopines troceados.\n\
Rehogamos durante 12 minutos\n\
Un par de minutos antes, cortamos las 4 rodajas de pinha en trozos y desleimos la maicena con el resto del jugo de pinha.\n\
Lo mezclamos bien para que no queden grumos.\n\
Despues, echamos rapidamente los trozos de pinha y el jugo con la maicena.\n\
Rehogamos durante 3 minutos\n\
Finalizado el proceso, servimos los escalopines con la pinha y la salsa agridulce melosa y brillante.";
leeCadena(c_d_a_a);
}

//Funcion para imprimir en pantalla la receta codigo'c_d_a_b'//
void fc_d_a_b ()
{
char c_d_a_b[] = //Usamos \ para escribir varias lineas//
"INGREDIENTES:\n\
1 lomo de cerdo de aproximadamente 1 kg\n\, 4 dientes de ajo picados\n\, 2 cucharadas de mostaza de dijon\n\, Aceite de oliva\n\
El zumo y la cascara de 3 limones\n\, 2 ramitos de romero\n\, sal y pimienta\n\
PREPARACION:\n\
Para hacer el marinado de la carne, mezclamos el zumo de limon y su cascara con el ajo y la mostaza de dijon.\n\
Lentamente le echamos media taza de aceite de oliva, mientras mezclamos con un tenedor y echamos la pimienta negra.\n\
Colocamos el cerdo y el romero en una bolsa de plastico para cocina de las que tienen cierre hermetico y incorporamos el marinado.\n\
Sacamos el aire de la bolsa y cerranos. Dejamos el cerdo marinando en la nevera toda la noche. Vertimos por encima la salsa de arandanos\n\
Sacamos el cerdo, lo salpimentamos y lo colocamos en un recipiente para horno con 4 cucharadas de aceite de oliva.\n\
Asamos el cerdo durante aproximadamente 20 minutos, dando la vuelta para que todas las partes queden doradas,\n\
si lo pinchamos y notamos que esta crudo, podemos meterlo un poquito mas con cuidado de que no se nos quede seco.\n\
lo tapamos con papel de aluminio y dejamos de repose durante 10 minutos.";
leeCadena(c_d_a_b);
}

//Funcion para imprimir en pantalla la receta codigo'fc_d_M_a'//
void fc_d_M_a ()
{
char c_d_M_a[] = //Usamos \ para escribir varias lineas
"INGREDIENTES PARA LA MASA:\n\
300 gr de harina sin gluten\n\, 125 gr de azucar\n\, 3 huevos\n\, 125 gr de mantequilla\n\
100 ml leche\n\
2 cucharaditas de levadura en polvo sin gluten\n\
1 sobre de azucar avainillado\n\
1 pizca sal\n\
PREPARACION:\n\
1. Batir la mantequilla, el azucar y la sal hasta formar una crema.\n\
Luego incorporamos los huevos y la leche, a continuacion la harina y la levadura, mezclar\n\
y echar la masa en los moldes (llenarlos solo una tercera parte).\n\
Meter los moldes en el horno previamente precalentado a 180 grados y esperar hasta que esten hechos.";
leeCadena(c_d_M_a);
}

//Funcion para imprimir en pantalla la receta codigo'c_d_M_b'//
void fc_d_M_b ()
{
char c_d_M_b[] = //Usamos \ para escribir varias lineas
"INGREDIENTES:\n\
4 Huevo L\n\
Azucar 100 g\n\
Cremor tartaro media cucharadita (opcional)\n\
Azucar 85 g\n\
Sal una pizca\n\
Almendra molida 200 g\n\
Azucar glase para decorar\n\
PREPARACION:\n\
Precalentar el horno a 165 grados C y engrasar o cubrir con papel sulfurizado un molde cuadrado o rectangular.\n\
Separar las claras de las yemas de los huevos en recipientes separados. Comenzar a batir las claras con el cremor tartaro,\n\
usando batidora de varillas, hasta casi montarlas. Echar el azucar y seguir batiendo hasta conseguir una textura de merengue.\n\
Batir aparte las yemas con el azucar restante, hasta que doblen su volumen y tengan un color palido.\n\
Incorporar la sal y mezclar con el merengue, usando una espatula. Incorporar poco a poco la almendra molida,\n\
mezclando con movimientos envolventes, hasta conseguir una masa homogenea y esponjosa.\n\
Verter la mitad en el molde, igualando la superficie con la espatula o el dorso de una cuchara.\n\
Hornear durnate unos 20-15 minutos, hasta que se haya dorado bien por encima.\n\
Sacar del horno y repartir el resto de la masa. Bajar la temperatura del horno a 160 grados C y hornear durante unos 18-20 minutos mas.\n\
Esperar un poco fuera del horno, trasladar a una rejilla y dejar enfriar. Espolvorear con azucar glase y cortar en porciones rectangulares.";
leeCadena(c_d_M_b);
}

//Funcion para imprimir en pantalla la receta codigo'c_d_c_a'//
void fc_d_c_a ()
{
char c_d_c_a[] = //Usamos \ para escribir varias lineas//
"INGREDIENTES:\n\
Leche entera 250 ml\n\
Nata liquida 250 ml\n\
Arroz redondo 75 g\n\
Canela en rama 1\n\
Piel de limon 1\n\
Azucar 75 g\n\
Huevos 2\n\
Pan rallado sin gluten 100 g\n\
Aceite de girasol para freir\n\
Canela molida 15 g\n\
PREPARACION:\n\
Poner a calentar la nata y la leche junto con la rama de canela y la corteza de limon en una olla,\n\
cuando empiece a hervir, incorporar el arroz, y dejar cocer removiendo frecuentemente durante 40 minutos o hasta que el arroz este blando.\n\
Incorporamos el azucar y cocer durante ocho minutos mas sin parar de remover. Verter en una fuente, cubrir con papel film transparente y dejar enfriar,";
leeCadena(c_d_c_a);
}

//Funcion para imprimir en pantalla la receta codigo'c_d_c_b'//
void fc_d_c_b ()
{
char c_d_c_b[] = //Usamos \ para escribir varias lineas//
"INGREDIENTES PARA LA MASA DE LOS ROLLITOS:\n\
1 huevo, 250 ml. de leche, una pizca de sal y 150 gr. de maicena.\n\
INGREDIENTES PARA EL RELLENO: 1/2 col o repollo, 3 zanahorias, 1 cebolla grande,\n\
300 gr. de carne de cerdo picada, sal y pimienta.\n\
INGREDIENTES PARA LA SALSA:\n\ El zumo de dos naranjas, un chorro generoso de vinagre, 2 cucharadas de azúcar, 1/2 vasito de ketchup,\n\
2 cucharaditas de maicena.\n\
PREPARACION:\n\
Coloca todos los ingredientes en un bol y trituralos con la batidora. Pon un poco de mantequilla en una sarten antiadherente.\n\
Cuando la mantequilla se haya fundido, extiende sobre la superficie de la sarten una capa muy fina de la masa elaborada.\n\
Cuando comiencen a aparecer burbujitas en la masa, dale la vuelta y cocina por la otra cara. Repite la operacion hasta conseguir las tortas deseadas.\n\
Coloca sobre cada tortita un par de cucharadas generosas de relleno y envuelvelas dandoles forma de rollito.\n\
Frie los rollitos en abundante aceite de oliva muy caliente y, una vez dorados, depositalos sobre papel de cocina para eliminar el exceso de aceite.\n\
La salsa agridulce: Coloca en un cazo todos los ingredientes arriba indicados y cocinalos a fuego suave hasta conseguir una salsa con cierta consistencia.";
leeCadena(c_d_c_b);
}
