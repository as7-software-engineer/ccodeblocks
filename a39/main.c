#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* aula 39 decis�o simples
vericando � a capital do brasil? sim = 1 nao  =0

*/

int main()
{
    setlocale(LC_ALL, "");// eu poderia "Portuguese"

    int a = 10;


    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);
    if(a < 0)
        printf("\n\tValor negativo!\n");

    printf("\nContinua��o do programa...\n");



    return 0;
}
