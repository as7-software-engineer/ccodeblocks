#include <stdio.h>
#include <stdlib.h>
/* pg em c para trocar o valor de das vars inteiras sem utilizar nehuma var auxiliar

*/

int main()
{
    int a, b;


    printf("digite dois valores: \n");
    scanf("%d%d", &a, &b);
    printf("Valores lidos: a: %d\tb: %d\n", a, b);
    a += b;//2 4 6
    b = a - b;//4 2 2
    a -= b ;//2 4 4


    printf("Valores lidos: a: %d\tb: %d\n", a, b);


    return 0;
}
