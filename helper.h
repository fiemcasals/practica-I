//
// Created by mauri on 16/06/22.
//

#ifndef INC_7_HELPER_H
#define INC_7_HELPER_H

typedef struct cuentas
{
    int Ncuenta;
    int saldoTotal;
    int saldoSaliente;
    int saldoEntrante;
    int movimiento;
    struct cuentas * sig;

}cuenta;

cuenta bancarias[]= {{1, 100, 0, 0, 0, NULL},
{2, 200, 0, 0, 0, NULL},
                     {3, 300, 0, 0, 0, NULL,}};
typedef struct lista
{
    int cant;
    cuenta * sig;
}lista;


int operaciones(int);

void ordenar(cuenta * Actual, lista * listaOperaciones);

void imprimir(lista * listaOperaciones);

#endif //INC_7_HELPER_H
