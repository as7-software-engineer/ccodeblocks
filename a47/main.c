#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* aula 47: Operador lógico e(&)
tabela verdade a b   a & b
                v  v  v
                v  f  f
                f  v  f
                f  f  f

*/

int main()
{
    setlocale(LC_ALL, "");// eu poderia "Portuguese"

    int idade;
    char sexo;

    printf("Digite seu sexo f ou m e sua idade: ");
    scanf("%c%d", &sexo, &idade);

   /* if(sexo == 'm') {
        if(idade == 18)
            printf("Alistamento obrigatório!\n");
        else
            printf("Dispensado!\n");
    }
    else
        printf("dispensado!\n");*/
//podemos usar o operador &
    if(sexo == 'm' && idade == 18)
        printf("Alistamento obrigatório!\n");
    else
        printf("dispensado!\n");




    return 0;

}
