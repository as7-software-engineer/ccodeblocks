#include <stdio.h>
#include <stdlib.h>
/*aula 75 ex 6 pg que imprima todos os multiplos de 7 de 1 ate 9999

*/

int main()
{
    int i;

    /*for (i = 1; i <= 9999; i++){
        if (i % 7 == 0)
            printf("%5.d ",i);
    }*/
    for (i = 7; i <= 9999; i+=7)
        printf("%5.d ",i);

    return 0;
}
