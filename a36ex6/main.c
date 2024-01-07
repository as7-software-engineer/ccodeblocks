#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//6) pg em c que permita fz a conversão cambial entre reais e doláres. considere como taxa de câmbio u$$
//1,0 = r$ 5,30. leia um valor em reias e mostre o correspondente em dólares.

int main()
{
    setlocale(LC_ALL, "");

    float dol = 5.30, vd, cpd;

    printf("qual o valor em real: ");
    scanf("%f", &vd);
    cpd = vd/dol;
    printf(" o valor digitado corresponde a U$$: %.2f dólares", cpd);







    return 0;
}
