#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
aula 110 como gerar números aleatórios para preencher uma matriz?
*/
int main()
{
    //int vet[10];

    int i, j, mat1[3][3] = {1,2,3,4,5,6,7,8,9} ;// matriz precisa de dois colchetes linha e coluna

    //
    //   c0  c1  c2
    //
    //l0  1   2  3
    //l1   4   5  6
    //l2   7   8  9
    //int mat2[3][3] = {0} ;

    //para dinheiros reias
   // float mat4[4][5]; //o identificador tem que ser diferente.

    /*for(i = 0; i<=2;i++)// PAR DE CHAVES POIS TEMOS DUAS INTRUCOES
            for(j=0;j<=2;j++){
                printf("digite a pos l[%d]c[%d]: ",i, j);
                scanf("%d", &mat1[i][j]);//tira o espaço senao vai ler o caracter e vai bugar
                }


    */
    srand(time(NULL));//time retorna a hora do pc
    for(i = 0; i<=2;i++)// PAR DE CHAVES POIS TEMOS DUAS INTRUCOES
            for(j=0;j<=2;j++){
                //mat1[i][j] *= 2;// aqui vamos ter os valores dobrando.
                mat1[i][j] = 1 + rand()%10;// temos que usar uma semente para gera valores aleatórios distintos(#include..
                }

    for(i = 0; i<=2;i++){// PAR DE CHAVES POIS TEMOS DUAS INTRUCOES
            for(j=0;j<=2;j++)
                printf("%5d ",mat1[i][j]);// aqui alteramos de mat 1 para 3, pois somamos duas mats 1 2
            printf("\n\n");
}



    return 0;

    }
