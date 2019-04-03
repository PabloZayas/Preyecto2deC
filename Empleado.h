typedef struct empleado
{
	char nombre[25];
	int edad;
	float sueldo;
	char area [25];
	char usuario[25];
	struct empleado * ant;
	struct empleado * sig;
	char password[30];
}Empleado;

Empleado* registrarEmpleado(FILE * );
void ImprimirEmpleado(Empleado *);