//Usados en Procrastinador 3000(programa central)
typedef struct{
	char name[20];
	int bola, combate, cunhado, flota, recetario, tesoro;
}usuario;
int ingreso(usuario *iz);
void registro(usuario iz, int io);
int boladelocho();
void combate();
void recetario();
char mins(char ans);
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
