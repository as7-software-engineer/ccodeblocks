#include <stdio.h>
#include <stdlib.h>
/*chico tem 1,50 metro e cresce 2 centímetros por ano enquanto ze tem 1,10 metro  e cresce 3
centimeto por ano contrua um pg que calcule e imprima quantos anos serao neccesarios para que ze seja maior que chico
*/
int main()
{
    float chico = 1.5, ze = 1.1;
    int ano=0;

    while (chico >= ze){
        chico+= 0.02;
        ze += 0.03;
        ano++;
        printf("chico: %.2f\tze: %.2f\tano: %d\n", chico, ze, ano);
    }
    printf("sao necessarios %d anos!", ano);


    return 0;
}
