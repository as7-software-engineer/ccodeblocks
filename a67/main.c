#include <stdio.h>
#include <stdlib.h>
/*aula 67: estrutura de repetição while (enquanto)   não sei ate quando fazer.

função de saída printf
*/


int main()
{
    int valor;
    printf("Digite um valor maior que zero: ");
    scanf("%d",&valor); // quem garante que o valor vai ser maior que zero.(while)

    while(valor <= 0){
            printf("valor inválido! Digite um valor maior que zero: ");
            scanf("%d", &valor); // quem garante que o valor vai ser maior que zero.(while)


    }
    printf("Valor lido: %d\n\n", valor);

    return 0;
}
