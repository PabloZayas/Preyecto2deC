#include<stdio.h>
#include<stdlib.h>
#include"articulo.h"
#include<string.h>

Articulo * registrarArticulo(FILE * f)
{
	float costo, precioVenta;
	int cantidadInventario;
	Articulo * ApArt = (Articulo*) malloc(sizeof(Articulo));
	printf("\nIngrese nombre del artículo: ");
	scanf("%s", ApArt->NombreArt);
	fprintf(f, "\nNombre del articulo: ");
	fwrite(ApArt->NombreArt, 1, strlen(ApArt->NombreArt), f);
	printf("\nIngrese su costo: ");
	scanf("%f", &ApArt->costo);
	fprintf(f, "\nCosto: ");
	//fwrite(ApArt->costo, 1, strlen(ApArt->costo), f);
	printf("\nIngrese su precio de venta: ");
	scanf("%f", &ApArt->precioVenta);
	fprintf(f, "\nPrecio de venta: ");
	printf("\nIngrese la cantidad actual en el inventario: ");
	scanf("%d", &ApArt->cantidadInventario);
	fprintf(f, "\nCantidad en el inventario: ");
	return ApArt;
}

void ImprimirArticulo(Articulo * ApArt)
{
	printf("\nEl nombre del articulo es: %s", ApArt->NombreArt);
}

