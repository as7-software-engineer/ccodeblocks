#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* aula 49 = else if encadeados
*/

int main()
{
    setlocale(LC_ALL, "");// eu poderia "Portuguese"

    int a = 10;

    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    /*printf("operador ternário:\n");
    a < 0 ? printf("\n\tValor negativo!\n"): printf("\n\tValor positivo ou igual a zero!\n.");*/

    printf("\n\n\tif/else\n");
    /*if(a < 0){
        printf("\n\tValor negativo!\n");
       }
    else {
        if(a> 0)
            printf("\n\tvalor positivo!\n");
        else
            printf("\n\tigual a zero!\n");
    }

    printf("\nContinuação do programa...\n");*/

    //========================================
    if(a < 0)
        printf("\n\tValor negativo!\n");

    else if(a> 0)
        printf("\n\tvalor positivo!\n");
    else
        printf("\n\tigual a zero!\n");


    printf("\nContinuação do programa...\n");





    return 0;

}
