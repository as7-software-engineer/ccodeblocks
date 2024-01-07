#include <stdio.h>
#include <stdlib.h>
/* aula114 ex4 10 objetos, sal 1100 + 5% do valor total de vendas.
preciso de valor uniario, guardar em vetor, outro vetor a quantidade vendidda de cada obejto dos 10.
crie um pg que receba os preços e as quantidades vendidas, armazenando em seus respectivos vetores. depois, determine e mostre:
a quntidade vendida, valor unitário e vaslor total de cada objeto. ao final, deverão se mostrados o valor total dasa vendas e o valor da comissao que sera paga ao vendedor.
b) o valor do objeto mais vendido e sua posicao no vetor (em caso de empates mostre todos empatados.



*/

int main()
{
    int i, maisvendido=0, quant[10];
    float vp, valortotal = 0, valor[10];

    for(i=0;i<=9; i++){
        printf("digite valor unitario e qtd vendida: ");
        scanf("%f%d", &valor[i], &quant[i]);
    }

    //letra a
    for(i=0;i<=9; i++){
        vp = quant[i] * valor[i];
        printf("vendido: %d\tvalor unitario R$%.2f\tvalor total R$%.2f\n", quant[i], valor[i], vp);
        valortotal += vp;
    }
    printf("valor total das vendas R$%.2f\n", valortotal);
    printf("comissao paga ao vendedor R$%.2f\n", valortotal * 0.05);


    //letra b
    for(i=0;i<=9;i++)
        if(quant[i] > maisvendido)
            maisvendido = quant[i];

    for(i = 0; i <=9; i++){
        if(quant[i] == maisvendido)
            printf("posicion: %d\tvalor R$%.2f\n", i, valor[i]);


    }

    return 0;
}
