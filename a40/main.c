#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* aula 40 = decis�o completa
verificando se um n�mero � negativo

*/

int main()
{
    setlocale(LC_ALL, "");// eu poderia "Portuguese"

    int a = 10;


    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);
    if(a < 0)
        printf("\n\tValor negativo!\n");
    else
        printf("\n\tValor positivo ou igual a zero!\n.");
    printf("\nContinua��o do programa...\n");



    return 0;
}
