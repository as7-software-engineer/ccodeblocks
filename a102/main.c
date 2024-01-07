#include <stdio.h>
#include <stdlib.h>
/*aula 102 alterando o vetor?
*/
int main()
{
    int i, num[10];

    for(i = 0; i <= 9; i++ ){
            printf("digite o elemento da posicao %d: ",i);
            scanf("%d", &num[i]);
    }
    for(i=0;i<=9;i++)
        num[i] *= 3;

    printf("\n\n");
    for(i = 0; i <= 9; i++ )
        printf("posicao %d: %d \n",i, num[i]);

    return 0;
}
