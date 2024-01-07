#include <stdio.h>
#include <stdlib.h>
/*pg que conte numeros negativos e ´positivos digitados.
terminar quando digitar 0. mostar total de impares e pares.


*/
int main()
{
    int num, positivos = 0, negativos = 0;


    do {
            printf("digite um valor: ");
            scanf("%d", &num);

            if(num > 0)
                positivos+=1;
            else if(num<0)
                negativos+=1;

    }while(num != 0);

    printf("positivos: %d\nnegativos: %d\n\n", positivos, negativos);






    return 0;
}
