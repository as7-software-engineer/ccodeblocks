#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*aula 112 ex2 soam de 2 vetores de 25 tamnho e imprima os 3 vetores.



*/
int main()
{
    int i, va[25], vb[25], vs[25];

    srand(time(NULL));
    for(i=0;i<=24;i++)
        va[i]= rand()%10;

    for(i=0;i<=24;i++)
        vb[i]= rand()%10;

    for(i=0;i<=24;i++)
        vs[i]= va[i] + vb[i];

    printf(" vetor 1: ");
    for(i=0; i<=24; i++)
        printf("%3d",va[i]);

    printf("\n");
    printf(" vetor 2: ");
    for(i=0; i<=24; i++)
        printf("%3d",vb[i]);

    printf("\n");
    printf(" vetor \n    soma: ");
    for(i=0; i<=24; i++)
        printf("%3d",vs[i]);

    return 0;
}
