#include <stdio.h>
#include <stdlib.h>
/*  aula 24
convers�o de tipos
(float)var
*/
int main()
{
    int a = 10, b = 20;
    float pi = 3.1415;

    b =(int)pi;
    printf("valor de b: %d\n", b);
    printf("soma: %d\n", a + b);
    printf("subtra��o: %d\n", a - b);
    printf("multiplicacao: %d\n", a * b);
    printf("divisao: %f\n", (float)a / b);// temos que dividir e tranformar no m�nimo 1 n�mero
    // inteiro/inteiro= 0 ou inteiro
    //real / inteiro = real


    return 0;
}
