#include <stdio.h>
#include <stdlib.h>
/*pg q calcule o valor de A dado por a = 1+2+3...nn é maior que zero e int.

*/


int main()
{
   int n, a,i;
   do{
        printf("Digite o valor de n:\n");
        scanf("%d",&n);
   }while(n <= 0);
    printf("A = ");
    for(i = 1; i<=n ;i++){
            a = a + i;
            if (i < n)
                printf("%d+",i);
            else
                printf("%d=",i);

            }
    printf(" %d", a);






    return 0;
}
