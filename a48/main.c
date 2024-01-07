#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* aula 48: Operador lógico ou(||)
tabela verdade a b   a || b
                v  v  v
                v  f  v
                f  v  v
                f  f  f

*/

int main()
{
    setlocale(LC_ALL, "");// eu poderia "Portuguese"

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade <= 5 || idade >=60)
            printf("\n\tvc tem direito a passagem gratuita;)\n");
    else
        printf("\n\tsai daí piema.\n");

    return 0;

}
