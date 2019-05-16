//Usados en Procrastinador 3000(programa central)
typedef struct{
	char name[20];
	int bola, combate, cunhado, flota, questionary, recetario, tesoro;
}usuario;
//estructura que permite almacenar informacion util sobre el usuario
int ingreso(usuario *iz);
void registro(usuario iz, int io);
int boladelocho();
void combate();
int cunhado();
void flota();
void recetario();
void questionary(char *name);
char mins(char ans);
//Usados en Bola del 8cho
typedef struct{
	char string[40];
}string;
//estructura que permite hacer un vector de cadenas de caracteres
void futuro();
void prediccion();
int lecturafichero(FILE *pf, string *res, int n);
//Usados en Combate por turnos
//Funcion que genera un numero aleatorio + bonuses, representa la punteria
int golpe(int b, int h);
//Funciones que generan el daño del jugador y del onstruo
int danhoyo(int b, int h);
int danhoel(int b, int h);
//Genera numeros aleatorios simulando una pocion
int pcn(int b);
//Usados en Cunhado
/*Este programa usa la funcion
int golpe(int b, int h);
definida en la linea 25 en relacion al programa combate*/
//Usados en Hundir la flota
//Estas funciones hace un "printf" de una matriz
void imprime_tablero(char M[9][9]);
void imprime_num(int M[9][9]);
//Estas funciones vacian las matrices, y las rellenan con "-" y "0" respectivamente
void vaciar_tablero(char M[9][9], char p);
void vaciar_num(int M[9][9], int p);
//Genera las posiciones de los barcos del ordenador
void enemigo_barcos(int M[9][9]);
//Estas tres funciones se encargan de los turnos
void turno_jugador(int m[9][9], char ti[9][9], char t1[9][9], int *u);
void turno_bot(int t0[9][9], int t2[9][9], char t1[9][9], int *u);
void turno(int t[9][9], char ti[9][9], char t1[9][9], int t0[9][9], int t2[9][9]);
//Usados en Questionary
//Funciones empleadas(descritas al final del programa)//
int puntuacion(char actualAns, char correctAns);
//Funciones empleadas en la seccion HISTORIA//
int questHistoria(char *name); //Funcion donde tiene lugar la parte de las preguntas y respuestas de Historia // 
void leefichero_p1_h();
void leefichero_p2_h();
void leefichero_p3_h();
void leefichero_p4_h();
void leefichero_p5_h();
void leefichero_p6_h();
void leefichero_p7_h();
void leefichero_p8_h();
void leefichero_p9_h();
void leefichero_p10_h();
//Funciones empleadas en la seccion GEOGRAFIA//
int questGeografia(char *name); //Funcion donde tiene lugar la parte de las preguntas y respuestas de Geografia // 
void leefichero_p1_g();
void leefichero_p2_g();
void leefichero_p3_g();
void leefichero_p4_g();
void leefichero_p5_g();
void leefichero_p6_g();
void leefichero_p7_g();
void leefichero_p8_g();
void leefichero_p9_g();
void leefichero_p10_g();
//Funciones empleadas en la seccion CIENCIA//
int questCiencia(char *name); //Funcion donde tiene lugar la parte de las preguntas y respuestas de ciencia //
void leefichero_p1_c();
void leefichero_p2_c();
void leefichero_p3_c();
void leefichero_p4_c();
void leefichero_p5_c();
void leefichero_p6_c();
void leefichero_p7_c();
void leefichero_p8_c();
void leefichero_p9_c();
void leefichero_p10_c();
//Funciones empleadas en la seccion ARTE//
int questArte(char *name); //Funcion donde tiene lugar la parte de las preguntas y respuestas de arte //
void leefichero_p1_a();
void leefichero_p2_a();
void leefichero_p3_a();
void leefichero_p4_a();
void leefichero_p5_a();
void leefichero_p6_a();
void leefichero_p7_a();
void leefichero_p8_a();
void leefichero_p9_a();
void leefichero_p10_a();
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
