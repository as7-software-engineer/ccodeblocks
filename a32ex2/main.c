#include <stdio.h>
#include <stdlib.h>
/* elabore um pg que receba, por meio do teclado, 2 valores, um para var A e
outro pra var B. em seguida, fa�a os passos que julgar neccess�rio para que ao final, a  variavel A possua o valor que inicialmente estava em b e  vice versa.
 � necessa�rio uma var auxiliar

*/

int main()
{
    int a, b, c;


    printf("digite dois valores: \n");
    scanf("%d%d", &a, &b);
    printf("Valores lidos: a: %d\tb: %d\n", a, b);

     //a = 35;
     //b = 15;//atribui�ao
     //c = 15;
     c = a;
     a = b;//atribui��o
     b = c;

    printf("Valores lidos: a: %d\tb: %d\n", a, b);


    return 0;
}
