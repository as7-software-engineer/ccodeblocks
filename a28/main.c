#include <stdio.h>
#include <stdlib.h>
/*    aula 28
operador de decremento--


*/

int main()
{
    int resultado, contador = 10;

    //sinônimos
    //contador--;
   // contador -= 1;
    //contador = contador -1 ;

   // resultado = contador-- // 10 pois primeiro rola atribuição e depois incremento
    resultado = --contador;// 9 primeiro rola incremento e depois atribuição
    printf("Valor: %d\n", resultado);



    //printf("Valor: %d\n", contador);

    //printf("Valor: %d\n", contador++);//10 -- no final
    //printf("Valor: %d\n", --contador);//9 -- no inicio

    return 0;
}
