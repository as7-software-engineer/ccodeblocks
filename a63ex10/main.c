#include <stdio.h>
#include <stdlib.h>
/*pg que, dado tr�s valores a, b, c. verifique se eles podem ser os comprimentos dos lados de um tri�ngulo. caso positivo, seu pg deve informar tamb�m se o trian � equil, isosc, ou escaleno caso contrario, seu pg
infroma nao formam um trian
lembretes equil�tero 3 lados iguais. is�soceles 2 lados iguais, escaleno 3 lados diferentes.
*/



int main()
{
    int a, b, c;

    printf("Digite 3 valores: ");
    scanf("%d%d%d", &a, &b, &c);

    if(a + b > c && b + c > a && a + c > b){
        printf("os 3 lados formam um trin!\n");
        if(a == b && a == c)
            printf("equilatero\n");
        else if (a==b  || b==c || a==c )
            printf("isosceles\n");
        else
            printf("escaleno\n");
    }
    else
        printf("os 3 lados nao forma um trian!\n");


    return 0;
}
