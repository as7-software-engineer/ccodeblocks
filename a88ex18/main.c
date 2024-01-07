#include <stdio.h>
#include <stdlib.h>
/*pesquisa entre habitantes coletados idade sexo salario de x pessoas.
x captado pelo usuario, informe:
a média do salario do grupo, maior e e menor idade do grupo e quantidade de mulheres com sal ate 2000.
*/
int main()
{
   int i, x, mni=0, moi=0,idade, quantM= 0;
   char sx;
   float sal, mediasal = 0 ;

   printf("Digite a quantidade de entrevistados: ");// precisamos limpar o buffer do teclado, colocando ( )
   scanf("%d", &x);

   for(i = 1; i<=x; i++){
       printf("digite sua idade, seu sexo e seu salario: ");
       scanf("%d %c%f", &idade, &sx, &sal);
       mediasal+=sal;
       if(x == 1){
            moi = idade;
            mni = idade;}
       else if(idade < mni)
            mni = idade;
            if (idade > moi)
                moi = idade;

       if(sx == 'F' && sal <= 2000)
            quantM++;

   }
   printf("media salarial: R$%.2f\n", mediasal/x);
   printf("menor idade: %d\nMaior idade: %d\n", mni, moi);
   printf("quantidade de mulhres com salario ate R$2000,00: %d\n\n", quantM);




    return 0;
}
