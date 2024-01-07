#include <stdio.h>
#include <stdlib.h>
/*vc decidiu fc rico guardando dinheiro por 30 dias consecutivos. para tal, decidiu guardar 1 centavo no primeiro dia,
2 cent, 8 cents por 30 dias . quantos centavos tera:



*/
int main()
{


    int i, vi = 1, vf = 1;

    for (i = 1; i <= 29; i++){
            vi *= 2;
            vf += vi;


    }
    printf("valor em centavos: %d\n", vf);
    printf("R$%.2f\n\n", vf/100.0);//aqui convertemos para real. colocando apenas .o depois da constante.








    return 0;
}
