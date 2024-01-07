#include <stdio.h>
#include <stdlib.h>
/*    aula 29
operador de unsigned = serve para quando temos uma int, notamos que h� um intervalo
trocar o %d por %u
limite para o tipo int: 2.147.483.647

short int -> %d ou %hi
unsigned short int %hu ou %d->
unsigned long int %lu->


*/

int main()
{
    //unsigned int x; // o pc n�o relevar� partes negativa do range. assim gerando um aumento somente de n�meros positivos nos 4 bytes.
    //antigo limite = 2.147.483.647
    //novo limite = 4.294.967.295

    //int x = 2147483647;
   // printf("\n\t%d\n\n",x);

    //int x = 2147483647;
    //x++;
    //printf("\n\t%d\n\n",x);// gerou um estouro de mem�ria, pois o resultado gerou um n�mero que n�o cabe em 4 bytes de mem.

    unsigned int x = 2147483647;//novo limite = 4.294.967.295
    //4 * 8 = 32 -> 31 -> 1
    x++;
    //printf("\n\t%u\n\n",x);//troque o d por u(%u)

    unsigned short int y = 55000;//
    printf("\n\t%hu\n\n",y); //55000 se colocar %hi o erro de estourar mem�ria aparece.


    return 0;
}
