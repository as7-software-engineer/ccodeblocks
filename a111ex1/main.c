#include <stdio.h>
#include <stdlib.h>
/*aula 111 ex1 pg que preencha um vetor de inteiros de tanabho 10, o usuário digita.
 em seguida calculae slave num segundo vetor o quadrado de cada elemento do primeiro vetor. por fim, imprima os dois vetores.


*/
int main()
{
    int i, v[10], vr[10];

    for(i=0; i<=9; i++){
        printf("digite um valor para [%d] pos: ",i);
        scanf("%d",&v[i]);
        }
    for(i=0; i<=9; i++)
        vr[i] = v[i]*v[i];

    printf(" vetor 1: ");
    for(i=0; i<=9; i++)
        printf("%3d ",v[i]);
    printf("\n");
    printf(" vetor 2: ");
    for(i=0; i<=9; i++)
        printf("%3d " ,vr[i]);




    return 0;
}
