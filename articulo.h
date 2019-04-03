typedef struct articulo
{
	float costo;
	float precioVenta;
	char NombreArt[25];
	int cantidadInventario;
	struct articulo * sigArt;
	struct articulo * antArt;
}Articulo;

Articulo * registrarArticulo(FILE * F);
void ImprimirArticulo(Articulo * ApArt);
