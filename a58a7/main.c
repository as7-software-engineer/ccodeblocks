#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* p que peça ao usuário um caracter e diga se é uma vogal ou não.

*/
int main()
{
    int mês;
    setlocale(LC_ALL,"");
    char l;


    printf("Digite um caracter: ");
    scanf("%c", &l);

    //a e i o u A E I O U

    if(l == 'a' || l == 'A' || l == 'e' || l == 'E'
       || l == 'i' || l == 'I' || l == 'o' || l == 'O' || l == 'U' || l == 'u')
        printf("\té uma vogal");
    else
        printf("é uma consoante");

    return 0;
}
