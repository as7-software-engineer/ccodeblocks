#include <stdio.h>
#include <stdlib.h>
/*
5) uma empresa contrata um encanador a 45 por dia. faça im progrma que solicite o número de dias trabalhados pelo
encanador e imprima a quantia que devera ser paga, sabendo que são descontados 8% para idr.imposto de renda



*/

int main()
{
    float dias, valorFinal, desconto;

    printf("Quantos dias trabalhados? ");
    scanf("%f", &dias);

    valorFinal = dias * 45;
    desconto = valorFinal*0.08;
    valorFinal = valorFinal - desconto;

    printf("A receber: R$%.2f\nDesconto R$%.2f\n", valorFinal, desconto);






    return 0;
}
