#include <stdio.h>
#include <stdlib.h>
/*a115 ex5 temp média de cada mes do ano, armazenando em um vetor,
ao final mostre maior e menor temp e em que mes ocorreram (mostar o mês por extenso: janeiro . descisdere empates.

*/
int main()
{
    int i, indicemaior, indicemenor;
    float maior=0, menor=99, temp[12];

    for(i=0; i<= 11; i++){
        printf("digite a temperatura do mes %d: ",i+1);
        scanf("%f", &temp[i]);
    }

    for(i = 0; i<=11; i++){
        if(menor > temp[i]){
            menor = temp[i];
            indicemenor = i;
            }
        if(maior < temp[i]){
            maior = temp[i];
            indicemaior = i;
            }
    }
    printf("a menor temperatura foi %.2f e ocorreu no mes ", menor);
    switch(indicemenor){
    case 0:
        printf("janeiro\n");
        break;

    case 1:
        printf("fevereiro\n");
        break;

    case 2:
        printf("marco\n");
        break;

    case 3:
        printf("abril\n");
        break;

    case 4:
        printf("maio\n");
        break;

    case 5:
        printf("junho\n");
        break;

    case 6:
        printf("julho\n");
        break;

    case 7:
        printf("agosto\n");
        break;

    case 8:
        printf("setembro\n");
        break;

    case 9:
        printf("outubro\n");
        break;

    case 10:
        printf("novembro\n");
        break;

    case 11:
        printf("dezembro\n");
        break;


    }
    printf("a maior temperatura foi %.2f e ocorreu no mes ", maior);
    switch(indicemaior){
    case 0:
        printf("janeiro\n");
        break;

    case 1:
        printf("fevereiro\n");
        break;

    case 2:
        printf("marco\n");
        break;

    case 3:
        printf("abril\n");
        break;

    case 4:
        printf("maio\n");
        break;

    case 5:
        printf("junho\n");
        break;

    case 6:
        printf("julho\n");
        break;

    case 7:
        printf("agosto\n");
        break;

    case 8:
        printf("setembro\n");
        break;

    case 9:
        printf("outubro\n");
        break;

    case 10:
        printf("novembro\n");
        break;

    case 11:
        printf("dezembro\n");
        break;


    }

    return 0;
}
