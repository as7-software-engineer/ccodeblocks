#include <stdio.h>
#include <stdlib.h>
/* elabore um pg que receba, por meio do teclado, 2 valores, um para var A e
outro pra var B. em seguida, faça os passos que julgar neccessário para que ao final, a  variavel A possua o valor que inicialmente estava em b e  vice versa.
 é necessaário uma var auxiliar

*/

int main()
{
    int a, b, c;


    printf("digite dois valores: \n");
    scanf("%d%d", &a, &b);
    printf("Valores lidos: a: %d\tb: %d\n", a, b);

     //a = 35;
     //b = 15;//atribuiçao
     //c = 15;
     c = a;
     a = b;//atribuição
     b = c;

    printf("Valores lidos: a: %d\tb: %d\n", a, b);


    return 0;
}
