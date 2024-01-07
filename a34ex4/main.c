#include <stdio.h>
#include <stdlib.h>
/* pg que leia um valor de despesa de restaurante, o valor da gorgeta (em %)
e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
 assuma que a conta será dividida igualmente.



*/

int main()
{
   int numpessoas;
   float valordespesa, gorjeta, valortotal;

   printf("Digite o valor da conta, da gorjeta e a quantidade de pessoas: ");
   scanf("%f%f%d", &valordespesa, &gorjeta, &numpessoas);
   valortotal = (valordespesa + (valordespesa*(gorjeta/100)))/numpessoas;
   printf("Cada pessoa vai pegar um total de R$: %.2f reais\n", valortotal);





    return 0;
}
