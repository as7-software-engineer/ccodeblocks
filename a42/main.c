#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* aula 42 = endentação e uso das chaves(que são opcionais dentro do if se tiver apenas uma linha de código
*/

int main()
{
    setlocale(LC_ALL, "");// eu poderia "Portuguese"

    int a = 10;


    printf("\nDigite um valor qualquer: ");
    scanf("%d", &a);

    if(a < 0){
        printf("\n\tValor negativo!\n");
        printf("\n\tValor negativo!\n");}
    else {
        printf("\n\tValor positivo ou igual a zero!\n.");
        printf("\n\tValor positivo ou igual a zero!\n.");}

    printf("\nContinuação do programa...\n");



    return 0;
}
