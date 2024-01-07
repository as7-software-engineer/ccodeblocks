#include <stdio.h>
#include <stdlib.h>
// aula 18 = tamanho de um int na memória
//intervalo: -2.147.483.648 até 2.147.483.647
//%hi ou %d
int main()
{

    //temos como economizar memória usando o operador short.

    int x = 2147483647;// 31*1(111...), o 32° bit é usado para o sinal, + ou negativo.

                     // sizeof é um operador ou uma constante.
    //float x = 1.0;
    //printf("Tamanho de um int na memoria:  %d bytes\n ",sizeof y);// par de () não é obrigatório
    printf("valor de x: %d\n ", x);// par de () não é obrigatório
    x++;
    //printf("Tamanho em memoria de short int: %d bytes\n", sizeof x); //aqui eu quero saber o tamanho de um tipo primitivo.
    printf("valor de x: %d\n", x); //aqui eu quero saber o tamanho de um tipo primitivo.
    //valor de x: 32767
    //valor de x: -32768 porque negativo? 32767(10) = 111111111111111; já 32768(10) = 1000000000000000
    //ocorreu um estouro de memória



    //Tamanho de um int: 4 (bytes) = 4x8bites = 32bites em memória
    //utilizando a short int vamos utlizar apenas 16 bits para cada variável (número pequeno), economizando 16 bits.

    // cuidados para não ultrapassar o intervalo de números inteiros que é possível armazenar em uma variável do tipo short int.
}
