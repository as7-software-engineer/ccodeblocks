#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*aula 113 ex 3 pg que le vetor n de 20 pos e o imprima.
troque o 1° elemento com o ultimo até o 10° com o 11° imprima o vt modificado
0    1    2    3    4    5    6    7    8    9    10    11    12    13    14    15    16    17    18    19
14   52   36   54   78   84   91   16   18   24   57    55    32    39    76    81    46     43   48     29
29   52   43   46   81   76   39   32   55   57   24    18    16    91    84    78     54    36   52    14
*/
int main()
{
    int d = 19,i, va[20], vi[20];

    srand(time(NULL));
    for(i=0;i<=19; i++)
        va[i] = 1 +rand()%20;

    for(i=0;i<=19; i++){
        vi[i] = va[d];
        d--;
    }
    printf("vetor inicial: \n");
    for(i=0;i<=19; i++)
        printf("%3d ", va[i]);

    printf("\nvetor reverso: \n");
    for(i=0;i<=19; i++)
        printf("%3d ", vi[i]);




    return 0;
}

/* int main (){
    int a, fim = 19, copia, vetor[20];

    for(a =0 ; a <20; a++){
        printf("digite %d", a);
        scanf("%d", &vetor[a]);
}
    printf("vetor inicial: \n");
    for(i=0;i<=19; i++)
        printf("%3d ", vetor[i]);


    for(a = 0; a<10; a++){
        copia = vetor[a];
        vetor[a] = vetor[fim];
        vetor[fim] = copia;
        fim--;
    }

    printf("vetor reverso: \n");
    for(i=0;i<=19; i++)
        printf("%3d ", vetor[i]);

    return 0;
}









*/
