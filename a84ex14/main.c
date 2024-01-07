#include <stdio.h>
#include <stdlib.h>
/*14 pg quer calcule a média de salários de uma empresa, pedindo qtd de func e o slario.
ao final, o pg deve imprimir a média dos slários informados, o sal mais alto e o mais baixo.


*/
int main()
{
    int qdf, i;
    float sal, tdsal = 0, salmenor = 99999, salmaior = 0;

    do{
            printf(" quantos f a empresa tem? ");
            scanf("%d", &qdf);
    }while(qdf<0);
    for(i = 1; i <= qdf; i++){
        printf("%d salario: ", i);
        scanf("%f", &sal);

        tdsal += sal;
        if(salmenor > sal)
            salmenor = sal;
        if(salmaior < sal)
            salmaior = sal;
    }
    printf("Salario medio R$%.2f\n", tdsal/qdf);
    printf("Maior Salario R$%.2f\n", salmaior);
    printf("Menor Salario R$%.2f\n", salmenor);


    return 0;
}
