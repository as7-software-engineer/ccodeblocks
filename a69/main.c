#include <stdio.h>
#include <stdlib.h>
/*aula 69: Diferenças entre for, while e do{}while

todo for pode ser substiuido por while do while, mas o contrário é inviável
*/

int main()
{
    int i =0;

   /* printf("\nGerado com for: ");//for
    for(i = 0; i <= 10; i++)
        printf("%d ", i);

    i = 0;

    printf("\n\n");
    printf("\nGerado com while: ");//for
    while(i <=10){//while
        printf("%d ", i++);
    }*/
    do{
        printf("tDigite um valor maior que zero: ");
        scanf("%d", &i);
    }while(i<=0);
    printf("\n\n\valor lido: %d\n\n", i);





    return 0;
}
