#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*a120 ex10 duas matrizes 3x3 e uma terceira que garde a soma das matrizes.
*/
int main()
{
    int l, c, ma[3][3], mb[3][3], ms[3][3];

    srand(time(NULL));

    for(l = 0 ; l<=2; l++)
        for(c=0; c<=2; c++){
            ma[l][c] = 1 + rand()%10;
            mb[l][c] = 1 + rand()%10;
            ms[l][c] = ma[l][c] + mb[l][c];
        }

    printf("\tmatriz a:\n");
    for(l = 0 ; l<=2; l++){
        for(c=0; c<=2; c++)
            printf("%3d ",ma[l][c]);
        printf("\n");
    }

    printf("\n\tmatriz b:\n");
    for(l = 0 ; l<=2; l++){
        for(c=0; c<=2; c++)
            printf("%3d ",mb[l][c]);
             printf("\n");
    }

    printf("\n\tmatriz soma:\n");
    for(l = 0 ; l<=2; l++){
        for(c=0; c<=2; c++)
            printf("%3d ",ms[l][c]);
         printf("\n");
    }


    return 0;
}
