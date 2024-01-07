#include <stdio.h>
#include <stdlib.h>
/*aula 70 ex 1
1) pg que podemos digitar entre  um e 10  e apresentar a tabuada. exemplo:
int 7
saída:
valor inteiro >0 ate 10
7 *1 = 7
...

*/

int main()
{
    int n, i;

    /*printf("Digite um numero entre 1 e 10: ");
    scanf("%d", &n);
    while(n<=0){
            printf("valor invalido, digite um número positivo entre 1 e 10: ");
            scanf("%d", &n);
    }
    for(i=1;i<=10; i++){
            printf("\t%d x %3.d = %3.d\n", n, i, n * i);
    }*/
    do{
        printf("Digite um numero entre 1 e 10: ");
        scanf("%d", &n);
    }while(n <1 || n > 10);

    for(i=1;i<=10; i++){
            printf("\t%d x %3.d = %3.d\n", n, i, n * i);

    }
    return 0;
}
