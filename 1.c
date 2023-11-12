#include <stdio.h>
#include <stdlib.h>
#include "BRL.h"

int calcularFactorialRecursion(int a);
void calcularFactorial(int a);

int main()
{
    int menu = 0;
    int op, num, res;

    do
    {
        menu = 0;
        op = validarnumeros("--Menu--\n1. Factorial\n2.Factorial con recursion\n3. Salir\n", 1, 3);
        switch (op)
        {
        case 1:
            num = validarnumeros("INGRESE UN NUMERO POSITIVO PARA OBTENER SU FACTORIAL\n", 1, 1000000000);
            calcularFactorial(num);
            break;
        case 2:
            num = validarnumeros("INGRESE UN NUMERO POSITIVO PARA OBTENER SU FACTORIAL\n", 1, 1000000000);
            res = calcularFactorialRecursion(num);
            printf("El factorial de %d es %d\n", num, res);
            break;
        case 3:
            system("cls");
            printf("FIN DEL PROGRAMA");
            return 0;
        }
    } while (!menu);
}

void calcularFactorial(int a)
{
    int i, fac;
    fac = a;
    for (i = 1; i < a; i++)
    {
        fac = fac * i;
    }
    printf("El factorial de %d es %d\n", a, fac);
}

int calcularFactorialRecursion(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        return a * calcularFactorialRecursion(a - 1);
    }
}