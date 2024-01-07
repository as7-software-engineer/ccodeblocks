#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* aula 51= estrutura de seleção switch case com caracter, altamente recomendada para quem vai comparar igualdades.
opções  a cadastrar pdt ; b vender pdt; c buscar pdt, d imprimir relatório; z sair

cada case precisa se seu break, sennão tudo é acumulado, ou imprimido
não podemos fazer verificação de range
*/

int main()
{
    setlocale(LC_ALL, "");// eu poderia "Portuguese"

    char opcao;

    printf("\n A - cadastrar produto\n B - vender pdt\n C - buscar pdt\n D - imprimir relatório\n Z - sair\n ");
    scanf("%c", &opcao);

    switch (opcao){
    case 'a':
        printf("\nCadastrando novo produto.");
        break;

    case 'b':
        printf("\nproduto vendido.");
        break;

    case 'c':
        printf("\nbuscando produto.");
        break;

    case 'd':
        printf("\nimprimindo relatório.");
        break;

    case 'z':
        printf("\nsaindo....");
        break;//quebrar
    default:
        printf("\nOpcao invalida!\n");
    }
    return 0;
}
