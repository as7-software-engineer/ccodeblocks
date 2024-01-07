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
    // ESPAÇO ENTRE OS %C -> COMANDO PARA O COMPUTADOR DESCONSIDERAR O ENTER , TAB E ESPAÇO=>
    // BUFFER =>F\n reserva
    // Fflush();não recomendamos, pois alem de rodar só no windows, pode demonstrar alguns erros.


    printf("Primeira letra: %c\nSegunda letra: %c\n", &a, &b);

    return 0;
}
