#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*pg para calcular a transposta de u8ma matriz 5 x 4.  imprima as duas matrizes na tela.

*/
int main()
{
    int taml= 5, tamc= 4;
    int l, c, mat[taml][tamc], trans[tamc][taml];

    srand(time(NULL));

    for(l = 0; l < taml  ;l++){
        for(c=0; c <tamc ; c++){
            mat[l][c] = 1+ rand()%500;
        }
    }

    printf("matriz original:\n");
    for(l = 0; l<taml  ;l++){
        for(c=0; c< tamc ; c++){
            printf("%3d ", mat[l][c]);
        }
        printf("\n");
    }

    for(l = 0; l< taml  ;l++){
        for(c=0; c<tamc; c++){
            trans[c][l] = mat[l][c];
        }
    }

    printf("\nmatriz transposta:\n");

    for(l = 0; l< tamc ;l++){
        for(c=0; c< taml ; c++){
            printf("%3d ", trans[l][c]);
        }
        printf("\n");
    }
    return 0;
}
