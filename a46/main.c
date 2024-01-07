#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* aula 46 = operador lógico de nagação!
tabela verdade x  !x
               v  f
               f  v


*/

int main()
{
    setlocale(LC_ALL, "");// eu poderia "Portuguese"

    int a = 10;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    printf("operador ternário:\n");
    !(a < 0) ? printf("\n\tValor negativo!\n"):
        !(a > 0)? printf("\n\tvalor positivo!\n"): printf("\n\tigual a zero!\n");

   /* printf("\n\nif/else\n");
    if(a < 0){
        printf("\n\tValor negativo!\n");
       }
    else {
        if(a> 0)
            printf("\n\tvalor positivo!\n");
        else
            printf("\n\tigual a zero!\n");
    }
*/
    printf("\nContinuação do programa...\n");



    return 0;

}
