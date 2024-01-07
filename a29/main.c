#include <stdio.h>
#include <stdlib.h>
/*    aula 29
operador de unsigned = serve para quando temos uma int, notamos que há um intervalo
trocar o %d por %u
limite para o tipo int: 2.147.483.647

short int -> %d ou %hi
unsigned short int %hu ou %d->
unsigned long int %lu->


*/

int main()
{
    //unsigned int x; // o pc não relevará partes negativa do range. assim gerando um aumento somente de números positivos nos 4 bytes.
    //antigo limite = 2.147.483.647
    //novo limite = 4.294.967.295

    //int x = 2147483647;
   // printf("\n\t%d\n\n",x);

    //int x = 2147483647;
    //x++;
    //printf("\n\t%d\n\n",x);// gerou um estouro de memória, pois o resultado gerou um número que não cabe em 4 bytes de mem.

    unsigned int x = 2147483647;//novo limite = 4.294.967.295
    //4 * 8 = 32 -> 31 -> 1
    x++;
    //printf("\n\t%u\n\n",x);//troque o d por u(%u)

    unsigned short int y = 55000;//
    printf("\n\t%hu\n\n",y); //55000 se colocar %hi o erro de estourar memória aparece.


    return 0;
}
