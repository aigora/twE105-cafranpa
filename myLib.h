typedef struct
{
	int x;
	int y;
}posicion;

int golpe(int b, int h);

int danhoyo(int b, int h);

int danhoel(int b, int h);

int pcn(int b);

void futuro();

void prediccion();

void enterrar(posicion *tesoro);

void busqueda(posicion *tesoro, posicion *usuario);

int proximidad(posicion *tesoro, posicion *usuario);

void avancevertical(int n, posicion *usuario);

void avancehorizontal(int n, posicion *usuario);
//Funciones principales
void combate();

void cunhado();

void boladelocho();

void busquedadeltesoro();
