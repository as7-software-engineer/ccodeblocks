#include <stdio.h>
#include <stdlib.h>
/*escreva um pg q leia 2 valores x e . a seguir, mostre uma sequencia de 1 ate y, passando para a proxima linha a cada x numeros.
exemplo de entrada:
3 99
out
1  2   3
4  5   6
...
97 98 99

*/
int main()
{
    int x, y,i;

    printf("digite x e y: ");
    scanf("%d%d", &x, &y);

    for(i=1; i<=y;i++){
        printf("%3d ", i);
        if(i%x==0)
            printf("\n");



    }


    return 0;
}
