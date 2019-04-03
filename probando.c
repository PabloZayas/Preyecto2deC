#include<stdio.h>
#include<stdlib.h>
#include<string.h>

FILE * f;

typedef struct datosEmpleado
{
	char usuario[30];
	char nombre[30];
	char contrasenia[30];
}Empleado;

int main (void)
{
	char respuesta;
	Empleado emp;
	Empleado * Apemp = &emp;
	char ruta[] = "/home/pablomorales/Documentos/proyectoC/prueba.txt";
	f = fopen(ruta, "w");
	
	if(f == NULL)
	{
		printf("\nNo se pudo crear el archivo\n");
		return 0;
	}	
	
	do
	{
		printf("\n\t\tDATOS DE LOS EMPLEADOS\n");
		fprintf(f, "\n\t\tDATOS DE LOS EMPLEADOS\n");
		printf("Nombre del empleado: ");
		gets(Apemp->nombre);
		fprintf(f, "Nombre del empleado: ");
		fwrite(Apemp->nombre, 1, strlen(Apemp->nombre), f);
		
		printf("\n¿Desea agregar más empleados?\n[s/n]\n");
		scanf("%c", &respuesta);		
	}while(respuesta!='n');
}
