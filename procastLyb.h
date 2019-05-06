//Usados en Procrastinador 3000(programa central)
typedef struct{
	char name[20];
	int bola, combate, cunhado, recetario, tesoro;
}usuario;
int ingreso(usuario *iz);
void registro(usuario iz, int io);
int boladelocho();
//Usados en Bola del 8cho
typedef struct{
	char string[40];
}string;
void futuro(char ans);
int prediccion();
int lecturafichero(FILE *pf, string *res, int n);
