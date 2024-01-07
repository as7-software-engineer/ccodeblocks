#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*7) pg para ler qtd de segundo e mostrar na tela a conversão para horas, minutos e segundos.
ex 3672 segundos out1:1:12
*/

int main()
{
    setlocale(LC_ALL, "");

    int segundos, h, m, s, resto;

    printf("Digite uma quantidade de segundos: ");
    scanf("%d", &segundos);
    h = segundos/3600;
    resto = segundos % 3600;
    m = resto / 60;
    s = resto % 60;
    printf("%d:%d:%d\n",h, m, s);




    return 0;
}
