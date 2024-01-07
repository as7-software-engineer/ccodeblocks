#include <stdio.h>
#include <stdlib.h>
/* pg que leia coordenadas(x,y) de uma quantidade  indeterminada de pontos no sistema cartesiano. pra cada pnto escrever o quadrante a que ele pertence.
o algoritmo será ebcerrado quando pelo menos uma das coordenadas for nula(nesta situação sem excrever mensagem alguma).




*/
int main()
{
    int x, y;

    do{
               printf("Digite x e y: ");
               scanf("%d%d", &x, &y);
               if(x != 0 & y != 0) {
                    //1° quadrante
                    if(x > 0 && y > 0)
                        printf("Primeiro quadrante\n");
                    else if(x<0 && y >0)
                        printf("Segundo quadrante\n");
                    else if(x<0 && y <0)
                        printf("terceiro quadrante\n");
                    else
                        printf("quarto quadrante\n");

//ao contrario do operador & binário bta bit, o perador && garante a avaliação da esquerda para a diewita;
//se o segundo operando for avaliado, ha um ponto de sequencia entre as avs do primeiro e do segundo op. se o primeiro for igual  a zero, o segundo nao sera avaliado.

        }
      }while(x != 0 & y != 0);









    return 0;
}
