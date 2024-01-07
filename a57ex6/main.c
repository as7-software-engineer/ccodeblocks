#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*aula 57 ex 6 - pg pra ler n inteiro e verificar se corresponde a um Mês válido no calendario. caso corresponda, escrever o nome do mês, caso contrário, escrever a mensagem ' Mês inválido

*/

int main()
{
    setlocale(LC_ALL,"");
    int m;

    printf("Digite um número: ");
    scanf("%d", &m);

    switch (m) {
    case 1:
        printf("jan");
        break;

    case 2:
        printf("fev");
        break;

    case 3:
        printf("mar");
        break;

    case 4:
        printf("abr");
        break;

    case 5:
        printf("mai");
        break;

    case 6:
        printf("jun");
        break;

    case 7:
        printf("jul");
        break;

    case 8:
        printf("ago");
        break;

    case 9:
        printf("set");
        break;

    case 10:
        printf("out");
        break;

    case 11:
        printf("nov");
        break;

    case 12:
        printf("dez");
        break;

    default:
        printf("mês inválido");
        break;

    }
    return 0;
}
