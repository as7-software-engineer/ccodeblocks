#include <stdio.h>
#include <stdlib.h>
/* aula 64: estrutura de repeti��o para
 //para (condi��o de inicio; condi��o de parada; incremento)
   for(;;)
 mesma regras uma instru��o chaves opcionais, 2 ou mais obrigat�rio as chaves.
*/


int main()
{
    /*int i = 0;
    printf("%d", i++);
    printf("%d", i++);
    printf("%d", i++);
    printf("%d", i++);
    printf("%d", i++);
    printf("%d", i++);
    printf("%d", i++);
    printf("%d", i++);
    printf("%d", i++);
    printf("%d", i++);
    printf("%d\n\n", i++);

    for(i = 0; i <= 10; i++)
        printf("%d", i);*/

    int i = 10;
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d ", i--);
    printf("%d\n\n", i--);

    for(i = 10; i >= 0; i--)
        printf("%d ", i);



    return 0;



    return 0;
}
