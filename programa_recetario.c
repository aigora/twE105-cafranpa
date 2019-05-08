#include <stdio.h>
//programa RECETARIO//

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
  char select2_s, select2_d; //Variable entera para elegir entre desayuno, almuerzo, etc.(salado); y variable entera para elegir entre desayuno, almuerzo, etc.(dulce)//
  char select3; //Variable entera para elegir que receta desea el usuario//

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

//Funcion para imprimir en pantalla la receta codigo'c_s_a_d'//
void fc_s_a_d ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/salado/c_s_a_d.txt","r"); //Fichero que abre la receta c_s_a_d//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'c_s_M_a'//
void fc_s_M_a ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/salado/c_s_M_a_dos.txt","r"); //Fichero que abre la receta c_s_M_a//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'c_s_M_b'//
void fc_s_M_b ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/salado/c_s_M_b_dos.txt","r"); //Fichero que abre la receta c_s_M_b//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'c_s_c_a'//
void fc_s_c_a ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/salado/c_s_c_a.txt","r"); //Fichero que abre la receta c_s_c_a//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'c_s_c_b'//
void fc_s_c_b ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/salado/c_s_c_b.txt","r"); //Fichero que abre la receta c_s_c_b//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'c_s_c_c'//
void fc_s_c_c ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/salado/c_s_c_c.txt","r"); //Fichero que abre la receta c_s_c_c//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'fc_s_c_d'//
void fc_s_c_d ()
{
	FILE *p;
	char aux;
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
	p=fopen("recetas/dulce/c_d_D_a.txt","r"); //Fichero que abre la receta c_d_D_a//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'c_d_D_b'//
void fc_d_D_b ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/dulce/c_d_D_b.txt","r"); //Fichero que abre la receta c_d_D_b//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'c_d_D_c'//
void fc_d_D_c ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/dulce/c_d_D_c.txt","r"); //Fichero que abre la receta c_d_D_c//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'c_d_m_a'//
void fc_d_m_a ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/dulce/c_d_m_a.txt","r"); //Fichero que abre la receta c_d_m_a//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'c_d_m_b'//
void fc_d_m_b ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/dulce/c_d_m_b.txt","r"); //Fichero que abre la receta c_d_m_b//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'c_d_a_a'//
void fc_d_a_a ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/dulce/c_d_a_a.txt","r"); //Fichero que abre la receta c_d_a_a//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'c_d_a_b'//
void fc_d_a_b ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/dulce/c_d_a_b.txt","r"); //Fichero que abre la receta c_d_a_b//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'c_d_M_a'//
void fc_d_M_a ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/dulce/c_d_M_a_dos.txt","r"); //Fichero que abre la receta c_d_M_a//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'c_d_M_b'//
void fc_d_M_b ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/dulce/c_d_M_b_dos.txt","r"); //Fichero que abre la receta c_d_M_b//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'c_d_c_a'//
void fc_d_c_a ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/dulce/c_d_c_a.txt","r"); //Fichero que abre la receta c_d_c_a//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}

//Funcion para imprimir en pantalla la receta codigo'c_d_c_b'//
void fc_d_c_b ()
{
	FILE *p;
	char aux;
	p=fopen("recetas/dulce/c_d_c_b.txt","r"); //Fichero que abre la receta c_d_c_b//
	while(fscanf(p,"%c",&aux)!=EOF)
		printf("%c",aux);
}
