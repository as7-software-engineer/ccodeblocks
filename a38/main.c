#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* aula 38 = operadores relacionais
menor que (a < b); 1
maior que (a > b); 0
maior ou igual (a >= b); 0
menor ou igual (<= b); 1
igual (a == b) 0
diferente (a != b) 1

*/

int main()
{
    int a = 10, b = 20;
    setlocale(LC_ALL, "");// eu poderia "Portuguese"
    printf("\n\tResultado: %d\n\n", a < b );





    return 0;
}
