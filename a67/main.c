#include <stdio.h>
#include <stdlib.h>
/*aula 67: estrutura de repeti��o while (enquanto)   n�o sei ate quando fazer.

fun��o de sa�da printf
*/


int main()
{
    int valor;
    printf("Digite um valor maior que zero: ");
    scanf("%d",&valor); // quem garante que o valor vai ser maior que zero.(while)

    while(valor <= 0){
            printf("valor inv�lido! Digite um valor maior que zero: ");
            scanf("%d", &valor); // quem garante que o valor vai ser maior que zero.(while)


    }
    printf("Valor lido: %d\n\n", valor);

    return 0;
}
