#include <stdio.h>
#include <stdlib.h>
// aula 19 = operador long para o tipo int
//intervalo: -2.147.483.648 até 2.147.483.647; para armazenar um valor maior que esse?
//pois bem:
//%li ou %ld
int main()
{
    short int a = 0; //não conseguimos usar o short duas vezes.
    // um int ocupava 2 bytes de memória, e um long int 4 bytes.
    // mas atualmente, por padrão uma int também ocupa 4 bytes.
    // porem possso clonar o long ( long long int
    long long int x = 2147483647;// 31*1(111...), o 32° bit é usado para o sinal, + ou negativo.
    //usamos o %li ou %ld
    printf("tamanho de x em bytes: %d\n", sizeof x);

    printf("valor de x: %lld\n ", x);
    x++;

    printf("valor de x: %lli\n", x); //aqui eu quero saber o tamanho de um tipo primitivo.
    // 4 bytes = 43 bites

    //tamanho de x em bytes: 8 AGORA TEMOS UM VAR inteiro ocupando 8 bytes = 64 bits.
    //o maximo é 8 bytes. pois não podemos usar long long long
    //valor de x: 2147483647
    //valor de x: 2147483648

    return 0;
}
