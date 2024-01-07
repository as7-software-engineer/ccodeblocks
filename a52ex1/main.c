#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*aula 52:exercício 01
escreva um programa em c que leia 3 valores e apresenet qual é o maior e qual é o menor.
*/

int main()
{
    setlocale(LC_ALL, "");

    int a, b, c, menor, maior;

    printf("Digite 3 valores: ");
    scanf("%d%d%d", &a, &b, &c);

    /*//primeira solução
    if (a < b){
        if ( a < c)
            menor = a;
        else
            menor = c;
    }
    else {
        if(b < c)
            menor = b;
        else
            menor = c;
    }

    if (a > b){
        if ( a > c)
            maior = a;
        else
            maior = c;
    }
    else {
        if(b > c)
            maior = b;
        else
            maior = c;
    }
    printf("Primeira versão: \tMenor: %d\tMaior: %d\n", menor, maior);*/

    //segunda versão

    menor = a;
    maior = a;

    if(menor > b)
        menor = b;
    if(menor > c)
        menor = c;

    if (maior < b)
        maior = b;
    if(maior < c)
        maior = c;

    printf("segunda versão versão: \tMenor: %d\tMaior: %d\n", menor, maior);


    return 0;
}
