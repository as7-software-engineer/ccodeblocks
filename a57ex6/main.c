#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*aula 57 ex 6 - pg pra ler n inteiro e verificar se corresponde a um M�s v�lido no calendario. caso corresponda, escrever o nome do m�s, caso contr�rio, escrever a mensagem ' M�s inv�lido

*/

int main()
{
    setlocale(LC_ALL,"");
    int m;

    printf("Digite um n�mero: ");
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
        printf("m�s inv�lido");
        break;

    }
    return 0;
}
