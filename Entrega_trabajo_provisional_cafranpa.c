#include <stdio.h>

void main ()
{
  int op;
  char s;
  do
  {
  printf("Buenos dias!! Bienvenido a nuestro programa. Te presentamos el 'PROCRASTINADOR 3000'");
  
  //En un futuro aqui se pedira al usuario que introduzca sus datos(nombre completo, edad, fecha de nacimiento,etc)
  
  //Aqui vamos a comenzar el switch case, pidiendo al usuario que escoja entre 6 opciones, cada una asignada con un numero
  printf("Escoge entre una de las siguientes opciones:\n1)'Bola de ocho':Hazme una pregunta de si o no y te dare una respuesta\n2)Generador de numeros aleatorios\n3)Calculdora\n4)Un programa que cuenta chistes malos, y adivinanzas\n5)Un combate por turnos\n6)Bola de cristal\n");
  do
  {
  scanf("%i",&op);
  }
  while(op<1||op>7);
  switch(op)
    {
    case 1:
      printf("1)'Bola de ocho':Hazme una pregunta de si o no y te dare una respuesta\n");
      break;
    case 2:
      printf("2)Generador de numeros aleatorios\n");
      break;
    case 3:
      printf("3)Calculdora\n");
      break;
    case 4:
      printf("4)Un programa que cuenta chistes malos, y adivinanzas\n");
      break;
	case 5:
      printf("5)Un combate por turnos\n");
      break;
	case 6:
      printf("6)Un combate por turnos\n");
      break;
    }
    printf("Desea repetir el programa? Pulse 's'\n");
    scanf("%s",&s);
}
while(s=='s');
}
