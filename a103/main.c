#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*aula 103 como gerar números aleatorios para preencher um vetor?
aula 104 um numero entre 0 e 99 %100
*/
int main()
{
    int i, num[40];

    srand(time(NULL));// a hora do pc é atualizada a todo momento.

    for(i = 0; i <= 39; i++ )
        num[i]= 1 + rand()%100;//adcionamos o srand linha 9; +1 para nao ter 0 no meio

    printf("\n\n");
    for(i = 0; i <= 39; i++ )
        printf("posicao %d: %d \n",i, num[i]);

    return 0;
}
