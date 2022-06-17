//
// Created by mauri on 16/06/22.
//

#include <stdio.h>
#include "helper.h"


int operaciones(int operacion)
{
    int Ncuenta;
    int saldo;

    printf("ingrese el numero de cuenta\n");
scanf("%d", &Ncuenta);
bancarias[Ncuenta-1].movimiento++;

printf("ingrese el monto a ejecutar\n");
scanf("%d", &saldo);

if (operacion == 1)
{
bancarias[Ncuenta-1].saldoTotal+=saldo;
bancarias[Ncuenta-1].saldoEntrante+=saldo;
}else
{
bancarias[Ncuenta-1].saldoTotal-=saldo;
bancarias[Ncuenta-1].saldoSaliente+=saldo;
}
return Ncuenta;
}

void ordenar(cuenta * nuevo, lista * listaOperaciones) {
    cuenta *anterior = NULL;
    cuenta *actual=NULL;

    if (listaOperaciones->sig == NULL) //no tiene ningun elemento en la lista;
    {
        listaOperaciones->sig = nuevo;
    } else//en el caso que ya haya un nodo en la lista
    {
        actual = listaOperaciones->sig;
        anterior = actual;

        while (actual->Ncuenta > nuevo->Ncuenta) {
            anterior = actual;
            actual = actual->sig;
        }

        if(actual==NULL){
            anterior->sig=nuevo;
        }else if(actual==anterior){
            listaOperaciones->sig=nuevo;
            nuevo->sig=actual;
        }else{
            nuevo->sig=actual;
            anterior->sig=nuevo;
        }
    }
}
    void imprimir(lista * listaOperaciones)
    {
        cuenta * partida=listaOperaciones->sig;

        if(partida==NULL)
        {
            printf("no hay cuentas creadas\n");
            return;
        }

        for (; partida!=NULL;partida=partida->sig) {
            printf("para el numero de cuenta: %d\n", partida->Ncuenta);
        }
    }


