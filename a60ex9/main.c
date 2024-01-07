#include <stdio.h>
#include <stdlib.h>
//#include <locale.h>
/*aula 60 ex 9 - um usuário deseja  um pg onde possa escolher o tipo de média deseja calcular a partir de três notas.
e o tipo da média escolhida pelo usuário e calcule a e apresente a média:
opções
a = aritimetica
p - ponderada; o pesos predefinidos ( 3 3 4)

obs, o ultimo enter preciso limpar o buffer do teclado
*/

int main()
{
    //setlocale(LC_ALL,"");
    float n1, n2, n3;
    char escolha;

    printf("\n\tqual media deseja?\n A==aritimetica\n P==ponderada\n");
    scanf("%c", &escolha);

    if(escolha == 'a' || escolha == 'b'){
        printf("\n\tDigite as 3 notas: ");
        scanf("%f%f%f", &n1, &n2, &n3);
}

    if (escolha == 'a')
        printf("media artimetica: %.2f\n", (n1 + n2 + n3)/3);
    else
        if(escolha =='p')
            printf("media ponderada: %.2f\n",(n1*3 + n2*3 + n3*4)/10);
        else
            printf("\nopcao invalida\n");


    /*printf("\n\tDigite as 3 notas: ");
    scanf("%f%f%f", &n1, &n2, &n3);


    if (escolha == 'a')
        printf("media artimetica: %.2f\n", (n1 + n2 + n3)/3);
    else
        if(escolha =='p')
            printf("media ponderada: %.2f\n",(n1*3 + n2*3 + n3*4)/10);
        else
            printf("\nopcao invalida\n");*/
    /*switch (opc){
    case 'a':
        printf("\n\tDigites as 3 notas (n1 n2 n3)\n");
        scanf("\t%f %f %f", &n1, &n2, &n3);
        m = (n1 + n2 + n3)/3;
        printf(" a média aritmética é igual a %.1f", m);
        break;

    case 'p':
        printf("\n\tDigites as 3 notas (n1 n2 n3)\n");
        scanf("\t%f %f %f", &n1, &n2, &n3);
        m = (n1*3 + n2*3 + n3*4)/10;
        printf(" a média ponderada é igual a %.1f", m);
        break;

    default:
        printf("opção inválida");

    }*/
    return 0;
}
