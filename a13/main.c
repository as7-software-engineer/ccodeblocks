#include <stdio.h>
#include <stdlib.h>
/*
Aula 13 = ler dois caracteres


*/
int main()
{
    char a, b;

    printf("Digite duas letras: ");
    scanf("%c %c", &a, &b);
    // ESPA�O ENTRE OS %C -> COMANDO PARA O COMPUTADOR DESCONSIDERAR O ENTER , TAB E ESPA�O=>
    // BUFFER =>F\n reserva
    // Fflush();n�o recomendamos, pois alem de rodar s� no windows, pode demonstrar alguns erros.


    printf("Primeira letra: %c\nSegunda letra: %c\n", &a, &b);

    return 0;
}
