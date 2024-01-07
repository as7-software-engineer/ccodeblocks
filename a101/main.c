#include <stdio.h>
#include <stdlib.h>
/*aula 101 como preencher vetor por meio de teclado?
*/
int main()
{
    int i, num[10];

    for(i = 0; i <= 9; i++ ){
            printf("digite o elemento da posicao %d: ",i);
            scanf("%d", &num[i]);
    }
    printf("\n\n");
    for(i = 0; i <= 9; i++ )
        printf("posicao %d: %d \n",i, num[i]);

    return 0;
}

