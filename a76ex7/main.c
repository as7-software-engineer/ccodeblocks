#include <stdio.h>
#include <stdlib.h>
/*aula 76 ex 7 valor inteiro N. apresente o quadrado de cada um dos valores pares
de 1 até n, inclusive n, s for o caso.

*/
int main()
{
    int n, i;

    printf("Digite um numero: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i+=2)
            printf("\t%4d     x %4d = %4d\n",i,i,i*i);

    return 0;
}
