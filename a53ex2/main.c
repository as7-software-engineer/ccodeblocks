#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Escreva um pg em C que l� 5 n�meros inteiros, um por vez. conte quantos destes valores s�o negativos e quantos s�o positivos.
ao final, imprima na tela a quantidade de n�meros



*/


int main()
{
    setlocale(LC_ALL,"");

    //int a, b, c, d, e, p = 0, n = 0 ;// temos que iniar, pois em c temos que ter cuidaados, pois v�riveis podem estar armazenando dados impertinetes de outras execu��es.
    int a, p = 0, n = 0 ;


    /*
    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    printf("Digite o terceior valor: ");
    scanf("%d", &c);

    printf("Digite quarto valor: ");
    scanf("%d", &d);

    printf("Digite o quinto valor: ");
    scanf("%d", &e);*/

    printf("Digite o valor: ");
    scanf("%d", &a);

    if(a < 0)
        n +=1;//n ++ ou n = n +1
    else
        p+=1;

    printf("Digite o valor: ");
    scanf("%d", &a);

    if(a < 0)
        n +=1;//n ++ ou n = n +1
    else
        p+=1;

    printf("Digite o valor: ");
    scanf("%d", &a);

    if(a < 0)
        n +=1;//n ++ ou n = n +1
    else
        p+=1;

    printf("Digite o valor: ");
    scanf("%d", &a);

    if(a < 0)
        n +=1;//n ++ ou n = n +1
    else
        p+=1;

    printf("Digite o valor: ");
    scanf("%d", &a);

    if(a < 0)
        n +=1;//n ++ ou n = n +1
    else
        p+=1;
   /* if(a < 0)
        n +=1;//n ++ ou n = n +1
    else
        p+=1;
    if(b>0)
        p+=1;
    else
        n+=1;
    if (c>0)
        p+=1;
    else
        n+=1;
    if (d>0)
        p+=1;
    else
        n+=1;
    if (e>0)
        p+=1;
    else
        n+=1;*/
    printf("ao todo temos: negativos: %d\tpositivos: %d\n",n, p);






    return 0;
}
