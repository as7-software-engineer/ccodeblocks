#include <stdio.h>
#include <stdlib.h>
/*aula 100: como imprimir o conteudo um vetor
*/
int main()
{
    int i;

    char vogais[5]= {'a','e', 'i', 'o', 'u'};// os indices vão de 0 ate 4 para cada posicao
    int num2[5]= {1,2,3,4,5};
    float num3[3] = {7.5,8.3,9.5};

    //printf("%d ", num2[0] );
    //printf("%d ", num2[1] );// para mostrar mais precisamos usar edr. for

    for(i=0;i<=4;i++)

        printf("%d ", num2[i]);
    printf("\n");
    for(i=0;i<=4;i++)

        printf("%c ", vogais[i]);//identifcador e posicao
    printf("\n");
    for(i=0;i<=2;i++)

        printf("%f ", num3[i]);

    return 0;
}
