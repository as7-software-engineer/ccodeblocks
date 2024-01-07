#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 4
/*a126 ex 15 dada uma matriz 4x4  faça pg que diga se ela é um quadrado magico
soma de todas as linhas colunas e diagonais são iguais.
*/
int main()
{
    int l, c, total, soma, falhou = 0, mat[tam][tam] = {16, 3, 2, 13, 5, 10, 11, 8, 9, 6, 7, 12, 4, 15, 14, 1};
    soma = 0;
    for(l = 0; l<tam; l++)
        soma += mat[l][l];
    printf("\ndiagonal principal : %d\n", soma);

    total = soma;

    soma = 0;
    for(l = 0; l < tam; l++)
        soma += mat[l][tam - 1 - l ];
    printf("\ndiagonal secundaria: %d\n", soma);

    if(total != soma){
        printf("diagonal secundaria diferente\n");
        falhou = 1;
        }

    for(l = 0; l< tam; l++){
        soma = 0;
        for(c=0;c<tam;c++)
            soma +=  mat[l][c];
        printf("Linha %d: %d\n", l, soma);

        if(total!= soma){
            printf("a linha %d eh diferente!\n",l);
            falhou =1;
            }
    }
    //
    for(c = 0; c < tam; c++){
        soma = 0 ;
        for(l=0;l<tam;l++)
            soma +=  mat[l][c];
        printf("Linha %d: %d\n", soma);

        if(total!= soma){
            printf("a coluna %d eh diferente!\n",c);
            falhou = 1;
            }
    }
    if(falhou)
        printf("\nnao é um quadrado magico!\n");
    else
        printf("\n eh um quadrado magico\n");


    return 0;
}
