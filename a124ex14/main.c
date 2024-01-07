#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*pg que imprima na tela os valores abaixo da diagonal principal de uma matriz 4x 4.
so podemos fa de diagonais em matrizes quadradas,

*/
int main()
{

    int tam = 4;
    int l, c, mat[tam][tam];

     srand(time(NULL));

     for(l=0;l<tam; l++){
        for (c = 0; c< tam; c++)
            mat[l][c] = rand() %100;
     }

     printf("\n\nmatriz gerada:\n");
     for(l=0;l<tam; l++){
        for (c = 0; c< tam; c++)
            printf("%2d ",mat[l][c]);
        printf("\n");
     }

     printf("\n\nabaixo da diagonal principal:\n");
     for(l=0;l<tam; l++){
        for (c = 0; c< tam; c++)
            if(l < c)
                printf("%2d ",mat[l][c]);
            else
                printf("   ");
        printf("\n");
     }
     printf("\n\n");




    return 0;
}
