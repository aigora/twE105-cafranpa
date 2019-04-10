#include <stdio.h>
//programa RECETARIO
int main () 
{
  int s, primer_ingrediente;
  printf("Aqui te traemos un recetario donde podras descubrir recetas faciles y rapidas, segun los ingredientes que desees\n");
  printf("Primero debes escoger si eres celiaco(c), vegetariano(v), o vegano(V). \nSelecciona otra letra distinta para recibir recetas sin restricciones de ingredientes.");
  scanf("%c", &s) // 's' significa la seleccion del tipo de menu.
  switch(s)
	{
		case 'c':
		  printf("La celiaquía es una patología intestinal crónica que cada vez es más común en nuestra sociedad. Se produce por una mala absorción de alimentos con gluten, proteína que se encuentra en la harina de diversos cereales como el trigo, cebada, avena o centeno. Por tanto, una persona diagnosticada con celiaquía debe consumir alimentos sin gluten.\n");
      	  printf("Ahora tienes que elegir entre los siguientes ingredientes y podras descubrir recetas riquisimas y sin gluten:\n");
      	  printf("Escoge 1 ingrediente de este grupo:\n");
      	  printf("Manzana(1), Limon(2), pimiento(3), tomate(4), zanahoria(5)\n");
      	  scanf("%i",&primer_ingrediente);
      	  	if()
		  break;
    	case 'v':
    	  printf("Ahora tienes que elegir entre estos ingredientes:\n");
    	  break;
   		case 'V':
    	  printf("Ahora tienes que elegir entre estos ingredientes:\n");
    	  break;
		default:
		  printf("Ahora tienes que elegir entre estos ingredientes:\n");
		  break;	
	}
}

