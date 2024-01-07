#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*a121ex11 pg que imprima a diagona main de uma m 5x5.

*/
int main()
{
    srand(time(NULL));

    int l, c, m[5][5];

    for(l = 0; l <= 4; l++ ){
        for(c = 0; c <= 4; c++ )
            m[l][c]= 1 + rand()%25;
    }

    printf("\nmatriz:\n");
    for(l = 0; l <= 4; l++ ){
        for(c = 0; c <= 4; c++)
            printf("%6d ", m[l][c]);
        printf("\n");
    }



    printf("\ndp:\n");
    for(l = 0; l <= 4; l++ ){
        for(c = 0; c <= 4; c++){
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
