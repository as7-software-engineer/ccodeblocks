#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//6) pg em c que permita fz a convers�o cambial entre reais e dol�res. considere como taxa de c�mbio u$$
//1,0 = r$ 5,30. leia um valor em reias e mostre o correspondente em d�lares.

int main()
{
    setlocale(LC_ALL, "");

    float dol = 5.30, vd, cpd;

    printf("qual o valor em real: ");
    scanf("%f", &vd);
    cpd = vd/dol;
    printf(" o valor digitado corresponde a U$$: %.2f d�lares", cpd);







    return 0;
}
