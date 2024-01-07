#include <stdio.h>
#include <stdlib.h>
/*ex 72 ex3 pg que some os impares 1 a 1000 e imprima a respostas.
chaves opicioanis em if else e for caso tenha uma instrução
  */
int main()
{
    int n,si=0;

    /*for(n=1;n<=1000;n+= 2)
            si+=n;
    printf("a soma de todos o impares \n\t= %d",si);

    return 0;*/
    for(n=1;n<=1000;n++)
        if(n % 2 == 1)
            si += n;
    printf("a soma de todos o impares \n\t= %d",si);
}
