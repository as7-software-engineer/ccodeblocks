#include <stdio.h>
#include <stdlib.h>
/*aula 77 ex 8 pg em c que funcione como uma calculadora. o pg deve apresentar um menu
ao usuario da seguinte forma:
1-somar
2-subtrair
3-multiplicar
4-dividir
0-sair
uma estrutura do tipo switch deve ser utilizada ´para relaizar cada operação em um case. após a escolha da op
, dois valores devem ser pedidos ao usuário para realizar a op escolhida. se a op escolhida for 4 o dividendo não pode
ser zero, um novo deve ser solicitado. o pg deve funcionar até que o usuario digite 0.

*/
int main()
{
    int opc,n1,n2;
    do
    {
        printf("\n\t[1] somar\n\t[2] subtrair\n\t[3] multiplicar\n\t[4] dividir\n\t[0] sair\n\tqual opc vc deseja?\n");
        scanf("%d", &opc);

        if(opc > 0 && opc <5){
            printf("digite dois valores:\n");
            scanf("%d%d", &n1,&n2);
}
        switch(opc)
        {
        case 0:
            printf("\tsaindo;)");
            break;

        case 1:
            printf("\tvamos somar;)\n");
            printf("\tsoma: %d", n1 + n2);
            break;
        case 2:
            printf("\tvamos subtrair;)\n");
            printf("\tsubtração: %d", n1 - n2);
            break;
        case 3:
            printf("\tvamos multiplicar;)\n");
            printf("\tmultiplicacao: %d", n1 * n2);
            break;
        case 4:
            while(n2==0)
            {
                printf("nao existe divisao por zero!\ndigite outro numero: ");
                scanf("%d", &n2);
            }
            printf("\tvamos dividir;)\n");
            printf("\tdivisao: %d", n1 / n2);
            break;

        default:
            printf("\tvalor invalido;)");
            break;

        }
    }
    while(opc!=0);
    return 0;
}
