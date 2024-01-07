#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*aula 56 ex 5
o IMC Iíndice de Massa Corporal), pode ser calculado dividindo-se o peso da pessoas (em Kg pela altura (h em metros) elevada ao quadrado (IMC= m/(h^2)).
escreva um pg que leia o peso e a altura de uma pessoa, calcule e mostre o IMC e a faixa em que o indivíduo se enquarda de acordo com tabela abaixo.
==========imc=======================interpretação
18,5 >   x                           abaixo do peso
18,15 <= x <25                       peso normal
25 <=    x <30                       sobrepeso
30 <=    x <35                       obsidade grau 1
35 <=    x <40                       obsidade grau 2
40 <=    x                           obsidade grau 3

*/

int main()
{
    //setlocale(LC_ALL,"");
    float p, h, imc;



    printf("Digite seu peso(em kg), e sua altura (em metros): ");
    scanf("%f%f", &p, &h);

    imc = p/(h*h);

    if(imc < 18.5)
        printf("IMC: %.1f\tabaixo do peso", imc);

    else if(imc >= 18.5 && imc <25)
        printf("IMC: %.1f\tpeso normal", imc);

    else if(imc >= 25 && imc < 30)
        printf("IMC: %.1f\tsobrepeso", imc);

    else if(imc >= 30 && imc < 35)
        printf("IMC: %.1f\tobsidade grau 1", imc);

    else if(imc >= 35 && imc < 40)
        printf("IMC: %.1f\tobsidade grau 2", imc);

    else
        printf("IMC: %.1f\tobsidade grau 3", imc);
   // return 0;
}
