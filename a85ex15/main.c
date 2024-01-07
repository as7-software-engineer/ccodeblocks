#include <stdio.h>
#include <stdlib.h>
/*pg dois n inteiros, e mostre 2 x 3  = 6;;;sem usar *


*/
int main()
{
    int i=1, n1, n2, r = 0;

    printf("difite dois valores: \n");
    scanf("%d%d", &n1, &n2);

    for(i = 1; i <= n1; i++)
        r+=n2;
    printf("%d x %d = %d\n\n", n1, n2, r );


    /*printf("%d x %d = %d", n1, n2, n1*n2);*/




    return 0;
}
