#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* aula 53 ex3 escreva um pg que leia  um n e infomre se ele � divis9ivel por 2, por 3 ou por 5, ou se nm�o � divis�vel por nehum dels.





*/


int main()
{
    setlocale(LC_ALL,"");

    int num;

    printf("Digite um valor: ");
    scanf("%d",&num);

    if (num%2==0 || num % 3 == 0 || num %5)
        printf("\n� divis�vel por 2, 3 ou 5.\n");
    else
        printf("\nn�o � divis�vel por 2, 3 ou 5.\n");
    /*switch (num){
    case %2==0:
        printf("\n� divisivel por 2;)");
        break;

    case %3==0:
        printf("\n� divisivel por 3;)");
        break;

    case %2==0:
        printf("\n� divisivel por 5;)");
        break;

    default:
        printf("\nOpcao invalida!\nOu n�o s�o divisiveis pelos valores anteriores.");}*/


    return 0;
}
