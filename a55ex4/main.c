#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* aula 54 ex4 pg que permita fazer a conversão de real para dolar ou de dolar para real
utilize como tx de cambio $1 igual a 5.30.

*/


int main()
{
    setlocale(LC_ALL,"");

    int opc ;
    float conversao=0, v, r=5.3, d=1;

    printf("\t======conversão======\n 1====dolar\n 2====real\n 0====fechar\n");
    printf("\n\tescolha sua opção: \n");
    scanf("%d",&opc);

    switch (opc){
    case 1:
        printf("\n\tdigite o valor em reais a ser convertido: R$\n");
        scanf("%f",&v);
        conversao = v/r ;//vou saber quantos dolares vou poder ter
        printf("\n\tconvertendo de  real p/ dolar...\n");
        printf("\n\t vc tem direito a $%.2f dólares.\n",conversao);
        break;

    case 2:
        printf("\n\tdigite o valor em dólares a ser convertido: U$$\n");
        scanf("%f",&v);
        conversao = v*r; //vou saber quantos reais vou poder ter
        printf("\n\tconvertendo de dolar p/ real...\n");
        printf("\n\t vc tem direito a R$%.2f reais.\n",conversao);
        break;

    case 0:
        printf("\n\t saindo...\n");
        break;

    default:
        printf("\nOpcao invalida!\n.");}


    return 0;
}
