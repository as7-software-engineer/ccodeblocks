#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* aula 50 = estrutura de sele��o switch case, alatamente recomendada para quem vai comparar igualdades.
op��es  1 cadastrar pdt ; 2 vender pdt; 3 buscar pdt, 4 imprimir relat�rio; 0 sair

cada case precisa se seu break, senn�o tudo � acumulado, ou imprimido
n�o podemos fazer verifica��o de range
*/

int main()
{
    setlocale(LC_ALL, "");// eu poderia "Portuguese"

    int opcao;

    printf("\n 1 - cadastrar produto\n 2 - vender pdt\n 3 - buscar pdt\n 4 - imprimir relat�rio\n 0 - sair\n ");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("\nCadastrando novo produto.");
        break;

    case 2:
        printf("\nproduto vendido.");
        break;

    case 3:
        printf("\nbuscando produto.");
        break;

    case 4:
        printf("\nimprimindo relat�rio.");
        break;

    case 0:
        printf("\nsaindo....");
        break;//quebrar
    default:
        printf("\nOpcao invalida!\n");
    }
    return 0;
}
