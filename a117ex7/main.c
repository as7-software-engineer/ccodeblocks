#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*a 117 pg para ordeenar um vetor com 100 números inteiros. imprima o vetor antes e após a ordenação.
indice: 0 1 2 3 4
        7 5 8 2 1


*/
int main()
{
    int i, cont=0, troca , copia, v[100];

    srand(time(NULL));

    for(i = 0; i<= 99; i++)
        v[i] = 1 + rand()%999;

    printf("antes da ordenacao:\n");
    for(i = 0; i<= 99; i++)
        printf("%3d ", v[i]);


    do{
        troca = 0;
        cont++;
    // ele executa 100 vezes sem necessidade(usando o for
        for(i = 0; i<= 99 - 1 ; i++){
            if(v[i] > v[i+1]){
               copia = v[i];
               v[i] = v[i+1];
               v[i+1] = copia;
               troca = 1;
            }
        }

    }while(troca);
    printf("\ndepois da ordenacao: contador: %d\n", cont);
    for(i = 0; i<= 99; i++){
        printf("%3d ", v[i]);
        }
    return 0;
}
