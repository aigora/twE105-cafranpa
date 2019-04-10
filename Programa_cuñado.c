#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


int main()
{
  int i=0;
  char  eleccion[11], chiste[]="Chiste", adivinanza[]="Adivinanza";
  srand(time(NULL));
  printf ("Bienvenido al programa cunhado. Por favor, escribe lo que prefieras:\nChiste\nAdivinanza\n");
  scanf ("%10s", eleccion);
  
  	while (eleccion[i]!='\0')
  	{
  		printf("%c", eleccion[i]);
  		i++;
  	}
  
}
