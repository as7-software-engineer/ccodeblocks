#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* p que pe�a ao usu�rio um caracter e diga se � uma vogal ou n�o.

*/
int main()
{
    int m�s;
    setlocale(LC_ALL,"");
    char l;


    printf("Digite um caracter: ");
    scanf("%c", &l);

    //a e i o u A E I O U

    if(l == 'a' || l == 'A' || l == 'e' || l == 'E'
       || l == 'i' || l == 'I' || l == 'o' || l == 'O' || l == 'U' || l == 'u')
        printf("\t� uma vogal");
    else
        printf("� uma consoante");

    return 0;
}
