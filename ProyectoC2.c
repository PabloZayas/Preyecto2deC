#include<stdio.h>
#include<stdlib.h>
#include"Empleado.c"
#include"Articulo.c"
//#include"ListaEmpleados.c"
#include<string.h>

FILE * f;
FILE * f2;
void ingresar ();
int menuInicial();
int validaOpcion(int );

int main (void)
{
	char ruta[] = "/home/pablomorales/Documentos/proyectoC/Datos_Empleados.txt";	
	f = fopen(ruta, "a");
	char ruta2[] = "/home/pablomorales/Documentos/proyectoC/Datos_Articulos.txt";
	f2 = fopen(ruta2, "a");
	int opcion = menuInicial();
	opcion = validaOpcion(opcion);
	
	switch(opcion)
	{
		case 1: ingresar(); break;
		case 2: break;
	}
	Empleado * x = registrarEmpleado(f);
	ImprimirEmpleado(x);
	Articulo * A = registrarArticulo(f2);
	return 0;
}

void ingresar()
{
	int a;
	char usu [30];
	char con [30];
	printf("Bienvenido al sistema\n\n");
	printf("Usuario: ");
	scanf("%s", usu);	
	printf("Contraseña: ");
	scanf("%s", con);	

}

int menuInicial()
{
	int opcion;
	//printf("\t\t\t***A-SHOP***\n");
	printf("\n1.INGRESAR AL SISTEMA \n2.SALIR\n->");
	scanf("%d", &opcion);
	return opcion;
}

int validaOpcion(int opcion)
{
	while(opcion<1 || opcion>2)
	{
		printf("Opción inexistente, intente nuevamente: ");
		opcion = menuInicial();
	}
	return opcion;
}



