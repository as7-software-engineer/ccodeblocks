#include <stdio.h>
#include <stdlib.h>
/* aula 92 ex 21
pg que gere 10 linhas 20 * por linha.
printf usada 2 x
/n 1x
***********
...

*/

int main()
{
    int i,j;
    for(j = 1; j <=10; j++)
    {
        for(i = 1; i<= 20; i++)// para replicar isso 10 vezes preciso de outro for
            printf("*");
        printf("\n");
    }






    return 0;
}
