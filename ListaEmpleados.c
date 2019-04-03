#include<stdio.h>
#include<stdlib.h>
#include"ListaEmpleados.h"
#include"Empleado.h"

ListaEmpleados * crearLista ()
{
        ListaEmpleados * lista;
        lista =(ListaEmpleados *) malloc (sizeof(ListaEmpleados));
        lista->h=lista->t=NULL;
        return lista;
}

void agregar (ListaEmpleados * lista, Empleado * empleado)
{
    if(lista->h==NULL)
         lista->h=lista->t=empleado;
    else{
        (lista->t)->sig=empleado;
         empleado->ant=lista->t;
         lista->t=empleado;
       }
}

/*Empleado * borrar (ListaEmpleados * r, char * nombre) //pasa nombre
{
    Empleado * k;
    if(r->h==NULL)
    {
        printf("\nElemento no encontrado, LISTA VACIA\n");
        return; 
    }

    k=r->h;

    while(k!=NULL)
    {
       if(nombre==k->nombre)
       {
           printf("ESTE DEBE ELIMINARSE");
           k=k->sig;
       }
    }
}*/



void imprimirL (ListaEmpleados * d)
{
    Empleado * b;
    if(d->h==NULL){
        printf("***LISTA VACIA***");
        return;
    }

    if(d->h==d->t)
        printf("%d, %s", d->h->edad, d->h->nombre);

    b=d->h;
    printf("LISTA: ");
    while(b!=NULL)
    {

        printf("\n\nNOMBRE: %s \nEDAD: %d", b->nombre, b->edad);
        b=b->sig;
    }
}
