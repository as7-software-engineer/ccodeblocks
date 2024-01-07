#include <stdio.h>
#include <stdlib.h>
/* aula 94 ex 23
pg que gere linhas * por linha.
printf usada 2 x
/n 2x
*
**

...

*/

int main()
{
    int i,j;

    for(j =1; j<=8; j++){
        for(i = 1; i<= j; i++)// para replicar isso 10 vezes preciso de outro for
            printf("*");
        printf("\n");

}





    return 0;
}
