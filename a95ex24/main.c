#include <stdio.h>
#include <stdlib.h>
/*aula 95 ex 24
vc deve fazer um pg que apresente a sequencia confrome
1=1  j=7-> j-i = 6
i=1  j=6
i=1  j=5-> j-i = 4

1=3  j=9-> j-i = 6
i=3  j=8
i=3  j=7-> j-i = 4

1=9  j=15-> j-i = 6
i=9  j=14
i=9  j=13> j-i = 4



*/
int main()
{
    int i, j;
    for(i = 1; i <= 9; i+=2){
       for(j = 6 +i; j>= 4 + i; j--)
            printf("i = %d j = %d\n", i, j);
       printf("\n");
    }

    return 0;
}
