/*7. Se dispone de la siguiente información almacenada en un arreglo de no más de 100
registros: Nro de cta. cte. y saldo. Se ingresan todos los movimientos efectuados en
el día especificado: Nro de cuenta cte, código de movimiento (1- entrada, 2- salida)
el importe. La entrada finalizará cuando se ingrese nro de cta cte igual a –1. El
programa deberá:
a. Mostrar un listado ordenado por número de cuenta corriente detallando nro
de cta cte y saldo final.//solo los que tuvieron movimiento el dia.
b. Importe total de entradas.//sin tener en cuenta lo que habia//sumados TODOS los de entrada
c. Importe total de salidas.//sin tener encuenta lo que habia
d. Del mayor movimiento del día: nro de cta cte, importe, si fue ingreso o
egreso.*/


#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include "helper.h"
#include "helper.c"

int main() {

    lista * listaOperaciones=malloc(sizeof (lista));
    listaOperaciones->sig=NULL;
    listaOperaciones->cant=0;

    int op;

    printf("ingrese la operacion que desea realizar, ingresando el numero 1 para depositar y 2 para retirar o -1 para salir\n");
    scanf("%d", &op);

    listaOperaciones->cant++;

    if(op==-1)
    {
        imprimir(listaOperaciones);
    }
    else
        {
        int a=operaciones(op);
            ordenar(&bancarias[a-1],listaOperaciones);
        }

    return 0;
}
