#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*a 119 ex8 pg que calcule e imprima  a soma de todos os elementos de uma matriz 5 x 7.

*/
int main()
{

    srand(time(NULL));
    int i, j, st = 0, m[5][7];




    printf("\tmatriz\:\n\n");

    for(i = 0 ; i<= 4; i++){
        for(j=0;j<=6;j++){
            m[i][j] = rand()%100;
            st+= m[i][j];
            printf("%2d ", m[i][j]);
        //st += m[i][j];}
        }
        printf("\n");
    }
   /* for(i = 0 ; i<= 4; i++){
        for(j=0;j<=6;j++)
            printf("%2d ", m[i][j]);
        printf("\n");
    }*/
    printf("\n\na soma de todos o elementos da matriz e igual = %3d\n\n", st);


    return 0;
}
