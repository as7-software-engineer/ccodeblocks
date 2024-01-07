#include <stdio.h>
#include <stdlib.h>
/*a105 matrizes
 varivaies homogenas bidimmencionais (arreys bidimensionais linhas e colunas
ponteiros vao nos ajudar a entender o porque de indice 0 21 x
                                                         14 x
                                                        mat[1][0] = 14
 aula 106: como criar uma matriz?

 aula7 imprimir conteudo?

 AULA  108, como ler matriz pelo teclado.


*/
int main()
{
    //int vet[10];

    int i, j, mat1[3][3] = {11,2,3,444,5,6,7,8,9}, mat2[3][3] = {1,2,3,4,5,6,7,8,9}, mat3[3][3] = {1,2,3,4,5,6,7,8,9} ;// matriz precisa de dois colchetes linha e coluna

    //
    //   c0  c1  c2
    //
    //l0  1   2  3
    //l1   4   5  6
    //l2   7   8  9
    //int mat2[3][3] = {0} ;

    //para dinheiros reias
   // float mat4[4][5]; //o identificador tem que ser diferente.
    //char mat4[10][10];
    char mat5[3][4]= {'a','b','c','d','e','f','g','h','i','j','k','l'};
    /*for(i = 0; i<=2;i++)// PAR DE CHAVES POIS TEMOS DUAS INTRUCOES
            for(j=0;j<=2;j++){
                printf("digite a pos l[%d]c[%d]: ",i, j);
                scanf("%d", &mat1[i][j]);//tira o espaço senao vai ler o caracter e vai bugar
                }


    */

    for(i = 0; i<=2;i++)// PAR DE CHAVES POIS TEMOS DUAS INTRUCOES
            for(j=0;j<=2;j++){
                //mat1[i][j] *= 2;// aqui vamos ter os valores dobrando.
                mat3[i][j] = mat2[i][j] + mat1[i][j] ;
                }

    for(i = 0; i<=2;i++){// PAR DE CHAVES POIS TEMOS DUAS INTRUCOES
            for(j=0;j<=2;j++)
                printf("%3d ",mat3[i][j]);// aqui alteramos de mat 1 para 3, pois somamos duas mats 1 2
            printf("\n");
}



    return 0;

    }








