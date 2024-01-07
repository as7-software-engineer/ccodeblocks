#include <stdio.h>
#include <stdlib.h>
//caractere de escape para saltar uma linha -> \n
//%d quero imprimir um número inteiro
//recursos inerentes a cada ide.
int main(){

    /*
        Isso aqui e um grande bloco de comentario
        printf é uma função de saída

        sobre o system("pause"), os betas usam para somente no windows, pois não é funcional no mac e linux
        então para contornar e utilizarmos em diversos os, vamos:

    */
    /*

    //printf("\nOla. seja bem vindo! C\n\n");
    printf("\n---------------------------------\n\n");
    printf("1 - Logar 2 - Cadastar 3 - Imprimir\n");
    printf("\n---------------------------------\n");

    printf("\nValor retornado: %d", printf("bom"));
    //printf("Aprendendo comentarios na linguagem C\n");
    //printf("Hello world!\n");
    */








    //no final quem está iniciando, usam:
    //system("pause");
    //porem
    printf("\nPressione qualquer tecla para finalizar.");
    //vamos ter que receber/receber a leiruta da informcao de algum caractere informado pelo teclado. atraves
    getchar();

    return 0;
}
