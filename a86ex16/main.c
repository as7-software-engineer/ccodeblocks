#include <stdio.h>
#include <stdlib.h>
/* pg para encontrar o menor número inteiro que seja divisivel
por todos os numeros inteiros entre 1 e 10.

*/
int main()
{
    int i, divisores, valor = 8;

    do{
        divisores = 0;
        valor+=2;
        for(i = 1; i <= 10; i++){
            if(valor % i == 0)
                divisores++;
       }
   }while(divisores != 10);
   printf("valor: %d\n\n", valor);



    return 0;
}
