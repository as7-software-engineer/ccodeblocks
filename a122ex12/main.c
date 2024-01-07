#include <stdio.h>
#include <stdlib.h>
/*a122 ex12  dsecundaria de matriz 7x7.
colunas     colunas 0  1  2 0,6 c = tam -1 -L
linhas              0  1  2 1,5 c = tam -1 -L
                    0  1  2 2,4 c = tam -1 - L
*/
int main()
{
    srand(time(NULL));

    int l, c, m[7][7];

    for(l = 0; l <= 6; l++ ){
        for(c = 0; c <= 6; c++ )
            m[l][c]= 1 + rand()%49;
    }

    printf("\nmatriz:\n");
    for(l = 0; l <= 6; l++ ){
        for(c = 0; c <= 6; c++)
            printf("%6d ", m[l][c]);
        printf("\n");
    }



    printf("\ndp:\n");
    for(l = 0; l <= 6; l++ ){
        for(c = 0; c <= 6; c++){
            if(l==c)
                printf("%6d", m[l][c]);
            else
                printf("       ");
        }
        printf("\n");
    }

    printf("\nds:\n");
    for(l = 0; l <= 6; l++ ){
        for(c = 0; c <= 6; c++){
            if(l==c)
                printf("%6d", m[l][c]);
            else
                printf("       ");
        }
        printf("\n");
    }


// podemo imprimir em uma linha os elementos da diagonal principal. pois podemos imprimir ll ou [c][c]




    return 0;
}
