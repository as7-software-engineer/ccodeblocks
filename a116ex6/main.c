#include <stdio.h>
#include <stdlib.h>
/*a116 ex 6 pg que leia 10 n em um vetor,em seguida, escolha o codigo e fça :
0 - finalizar o programa;
1 - imprime o vetor na ordem do início  ao fim;
2 - imprime o vetor na ordem do início  ao fim;
*/
int main()
{
    int i, opc;
    float v[10];

    for(i = 0; i <= 9; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%f", &v[i]);
        }

    do{
        printf("\n0 - finalizar\n1 - imprimir vetor\n2 - imp. vetor investido\n");
        scanf("%d", &opc);

        switch(opc){
        case 0:
            printf("finalizando...\n");
            break;
        case 1:
            for(i = 0; i<= 9; i++)
                printf("%.2f ", v[i]);

            printf("\n");
            break;
        case 2:
            for(i = 9; i>= 0; i--)
                printf("%.2f ", v[i]);

            printf("\n");
            break;
        default:
            printf("opcao invalida");
            break;
   }
    }while(opc!=0);



    return 0;
}
