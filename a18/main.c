#include <stdio.h>
#include <stdlib.h>
// aula 18 = tamanho de um int na mem�ria
//intervalo: -2.147.483.648 at� 2.147.483.647
//%hi ou %d
int main()
{

    //temos como economizar mem�ria usando o operador short.

    int x = 2147483647;// 31*1(111...), o 32� bit � usado para o sinal, + ou negativo.

                     // sizeof � um operador ou uma constante.
    //float x = 1.0;
    //printf("Tamanho de um int na memoria:  %d bytes\n ",sizeof y);// par de () n�o � obrigat�rio
    printf("valor de x: %d\n ", x);// par de () n�o � obrigat�rio
    x++;
    //printf("Tamanho em memoria de short int: %d bytes\n", sizeof x); //aqui eu quero saber o tamanho de um tipo primitivo.
    printf("valor de x: %d\n", x); //aqui eu quero saber o tamanho de um tipo primitivo.
    //valor de x: 32767
    //valor de x: -32768 porque negativo? 32767(10) = 111111111111111; j� 32768(10) = 1000000000000000
    //ocorreu um estouro de mem�ria



    //Tamanho de um int: 4 (bytes) = 4x8bites = 32bites em mem�ria
    //utilizando a short int vamos utlizar apenas 16 bits para cada vari�vel (n�mero pequeno), economizando 16 bits.

    // cuidados para n�o ultrapassar o intervalo de n�meros inteiros que � poss�vel armazenar em uma vari�vel do tipo short int.
}
