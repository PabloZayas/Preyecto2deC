#include<stdio.h>
#include<stdlib.h>
#include"Empleado.h"
#include<string.h>

Empleado* registrarEmpleado(FILE * f)
{
	int areaNum;
	Empleado * ApEmp = (Empleado*) malloc(sizeof(Empleado));
	printf("\nNombre del empleado: ");
	scanf("%s", ApEmp->nombre);
	fprintf(f, "\nNombre del empleado: ");
	fwrite(ApEmp->nombre, 1, strlen(ApEmp->nombre), f);
	printf("\nNombre de usuario: ");
	scanf("%s", ApEmp->usuario);
	fprintf(f, "\nNombre de usuario: ");
	fwrite(ApEmp->usuario, 1, strlen(ApEmp->usuario), f);
	printf("\nÁrea de empleado: \n\t1)Administrador\n\t2)Área de ventas\n\t3)Área de compras\n\nÁrea: ");
	scanf("%d", &areaNum);
	if(areaNum<1 || areaNum>3)
	{
		printf("\nÁrea inexistente, ingrese un valor válido...\n");
	}

	switch(areaNum)
	{
		case 1: strcpy(ApEmp->area, "Administrador");	break;
		case 2: strcpy(ApEmp->area, "Ventas"); 			break;
		case 3: strcpy(ApEmp->area, "Compras"); 		break;
	}

	fprintf(f, "\nÁrea del empleado: ");
	fwrite(ApEmp->area, 1, strlen(ApEmp->area), f);
	fprintf(f,"\n\n");
	return ApEmp;
}

//gets, requiere getchar(); después

void ImprimirEmpleado(Empleado * x)
{
	printf("\nEl nombre del empleado es: %s", x->nombre);
	printf("\nEl nombre de usuario es: %s", x->usuario);
	printf("\nEl usuario es del area: %s", x->area);
}