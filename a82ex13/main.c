#include <stdio.h>
#include <stdlib.h>
/*pg que pç ao usuário um n inteiro maior que 1 e diga se o n é primo ou nao.
*/
int main()
{
    int valor, i, divisores = 0, opc;

    do{
        do{
            printf("Digite um valor maior que 1: ");
            scanf("%d", &valor);

        }while(valor < 2);

        printf("Divisores de %d: ", valor);

        for(i = 2; i<valor/2; i++){//vamos reduzir o teste pela metade,,,
            if(valor%i==0){
                printf("%d ",i);
                divisores++;
            }
        }
        printf("\n");

        if(divisores != 0)
            printf("%d nao e primo\n", valor);
        else
            printf("%d e primo\n", valor);
        printf("1 - digitar outro valor\n2 - sair\n");
        scanf("%d", &opc);
    }while(opc != 2);

}
