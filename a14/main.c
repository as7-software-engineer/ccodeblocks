#include <stdio.h>
#include <stdlib.h>
/*
Aula 14 = ler dois caracteres
como limpar o buffer do teclado com a fun��o scanf()


*/
int main()
{
    char a, b;

    printf("Digite uma letra: ");
    scanf("%c", &a);
    // ESPA�O ENTRE OS %C -> COMANDO PARA O COMPUTADOR DESCONSIDERAR O ENTER , TAB E ESPA�O=>
    // BUFFER =>F\n reserva
    // Fflush();n�o recomendamos, pois alem de rodar s� no windows, pode demonstrar alguns erros.
    // buffer => \n
    //se eu n�o quiser usar espe�o entre %C,
    scanf("%c");

    printf("Digite outra letra: ");
    scanf("%c", &b);


    printf("Primeira letra: %c\nSegunda letra: %c\n", a, b);

    return 0;
}
