#include <stdio.h>
#include <stdlib.h>
/*    aula 27
operador de incremento


*/

int main()
{
    int resultado, contador = 10;

    //sin�nimos
    //contador++;
   // contador += 1;
    //contador = contador + 1;

   // resultado = contador++; // 10 pois primeiro rola atribui��o e depois incremento
    resultado = ++contador;// 11 primeiro rola incremento e depois atribui��o
    printf("Valor: %d\n", resultado);



    //printf("Valor: %d\n", contador);

    //printf("Valor: %d\n", contador++);//10 ++ no final
    //printf("Valor: %d\n", ++contador);//11 ++ no inicio

    return 0;
}