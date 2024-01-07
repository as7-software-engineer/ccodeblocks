#include <stdio.h>
#include <stdlib.h>
/*um determinado material radiotivo perde metade de sua massa  a cada 50 segundo.
dada a massa inicial, em grama , fc pg que determine o tempo necessário
para que essa massa se torne menor que 0,05 g.


*/
int main()
{
    float massa;
    int tempo = 0;// pois pode haver lixo de memória.
    printf("digite a massa do material em gramas: ");
    scanf("%f", &massa);

    while(massa >= 0.05){
        massa /= 2;
        tempo+=50;


    }
    printf("massa final: %f\n", massa);
    printf("o tempo decorrido foi de %d segundos.\n\n", tempo);


    return 0;
}
