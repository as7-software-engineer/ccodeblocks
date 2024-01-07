#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*pg com mat 5x10 com números inteiros.
em sewguida faca:
a some cada uma das linhas armazenando o resultado em um vetor;
b some cada uma das colunas armazenando o resultado em um vetor;
c imprima a matriz e os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.


*/
int main()
{
    int i, sdij, j, vsi[5], vsc[10], m[5][10];

    srand(time(NULL));

    for(i = 0 ; i<=4; i++)
        for(j = 0; j <= 9; j++)
            m[i][j] = 1 + rand()%50;

    //soma linha    a)
    for(i = 0 ; i<=4; i++){
        sdij = 0;
        for(j = 0; j <= 9; j++)
            sdij += m[i][j];
        vsi[i] = sdij;
    }
    //letra b soma das colunas
    for(j = 0; j<= 9;j++){
        sdij = 0;
        for(i=0;i<=4;i++)
            sdij += m[i][j];
        vsc[j] = sdij;
    }
    //matriz
    printf("\nmatriz:\n");
    for(i = 0; i<=4; i++){
        for(j = 0;j<= 9; j++)
            printf("%2d ", m[i][j]);
        printf("\n");

    }
    printf("\n\nvetor com soma das linhas:\n");
    for(i = 0; i<=4; i++)
        printf("linha %d:  %d\n", i, vsi[i]);

    printf("\n\nvetor com soma das colunas:\n");
    for(j = 0; j<=9; j++)
        printf("coluna %d:  %d\n", j, vsc[j]);


    return 0;
}
