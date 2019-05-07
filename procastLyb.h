//Usados en Procrastinador 3000(programa central)
typedef struct{
	char name[20];
	int bola, combate, cunhado, recetario, tesoro;
}usuario;
int ingreso(usuario *iz);
void registro(usuario iz, int io);
int boladelocho();
void combate();
//Usados en Bola del 8cho
typedef struct{
	char string[40];
}string;
void futuro();
void prediccion();
int lecturafichero(FILE *pf, string *res, int n);
//Usados en Combate por turnos
int golpe(int b, int h);
int danhoyo(int b, int h);
int danhoel(int b, int h);
int pcn(int b);
//Usados en Cunhado
//...
//Usados en Recetario
//...
//Usados en Busqueda del tesoro
typedef struct
{
	int x;
	int y;
}posicion;
void enterrar(posicion *tesoro);
int busqueda(posicion *tesoro, posicion *usuario);
int proximidad(posicion *tesoro, posicion *usuario);
int avancevertical(int n, posicion *usuario);
int avancehorizontal(int n, posicion *usuario);
