#include <stdio.h>
#include <stdlib.h>
/*aula 68: estrutura de repeti��o do{}while (enquanto)  (fa�a enquanto)

fun��o de sa�da printf
*/


int main()
{
    int valor, valor2;
    printf("Digite um valor maior que zero: ");
    scanf("%d",&valor); // quem garante que o valor vai ser maior que zero.(while)

    while(valor <= 0){
            printf("valor inv�lido! Digite um valor maior que zero: ");
            scanf("%d", &valor); // quem garante que o valor vai ser maior que zero.(while)


    }
    printf("Valor lido: %d\n\n", valor);

    do{
        printf("Digite um valor maior que zero: ");
        scanf("%d",&valor2);
    }while(valor2 <=0);
     printf("Valor lido: %d\n\n", valor2);

    return 0;
}
