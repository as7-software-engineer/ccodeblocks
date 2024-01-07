#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* aula 41 = verdadeiro e falso na linguagem C.
qualquer valor diferente de 0 vai ser verdadeiro.
*/

int main()
{
    setlocale(LC_ALL, "");// eu poderia "Portuguese"

    int a = 10;


    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);
    printf("Resultado logico: %d\n", a < 0);

    if(a < 0)
        printf("\n\tValor negativo!\n");
    else
        printf("\n\tValor positivo ou igual a zero!\n.");
    printf("\nContinuação do programa...\n");



    return 0;
}
