#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*aula 59 ex 8 - elabore um p dado o número do mês, indica quantos dias tem esse mês.
utilize para isso a estrutura de seleção switch.
obs.: considere fevereiro como tendo 28 dias.

*/

int main()
{
    setlocale(LC_ALL,"");
    int m;

    printf("Digite um número: ");
    scanf("%d", &m);

    switch (m) {
    /*case 1:
        printf("jan com 31 dias");
        break;

    case 2:
        printf("fev com 28 dias");
        break;

    case 3:
        printf("mar com 31 dias");
        break;

    case 4:
        printf("abr com 30 dias");
        break;

    case 5:
        printf("mai com 31 dias");
        break;

    case 6:
        printf("jun com 30 dias");
        break;

    case 7:
        printf("jul com 31 dias");
        break;

    case 8:
        printf("ago com 31 dias");
        break;

    case 9:
        printf("set com 30 dias");
        break;

    case 10:
        printf("out com 31 dias");
        break;

    case 11:
        printf("nov com 30 dias");
        break;

    case 12:
        printf("dez com 31 dias");
        break;*/

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\nO mes possui 31 dias \n");
        break;

    case 2:
        printf("\nO mes possui 28 dias\n");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
    default:
        printf("\nO mes possui 31 dias \n");
        break;

    }
    return 0;
}
