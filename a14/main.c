#include <stdio.h>
#include <stdlib.h>
/*
Aula 14 = ler dois caracteres
como limpar o buffer do teclado com a função scanf()


*/
int main()
{
    char a, b;

    printf("Digite uma letra: ");
    scanf("%c", &a);
    // ESPAÇO ENTRE OS %C -> COMANDO PARA O COMPUTADOR DESCONSIDERAR O ENTER , TAB E ESPAÇO=>
    // BUFFER =>F\n reserva
    // Fflush();não recomendamos, pois alem de rodar só no windows, pode demonstrar alguns erros.
    // buffer => \n
    //se eu não quiser usar espeço entre %C,
    scanf("%c");

    printf("Digite outra letra: ");
    scanf("%c", &b);


    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    return 0;
}
