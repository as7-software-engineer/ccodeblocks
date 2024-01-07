#include <stdio.h>
#include <stdlib.h>
/*pg para ler as notas da primeira e da segunda av de um aluno, calcule e imprima a media semestral. po pg deverá aceitar apenas notas vávlidas no intervalo
0 a 10, . cada nota deve ser validada separadamante. ao final, deve ser impressa a mensagem "novo calculo? 1sim 2 nao), solicitando ao usuarioque informe um dodigo 1 ou 2
indicando se ele deseja ou não executar o programa  novamnete.
1 executar novamente  o pg.
2 encerrar.

*/
int main()
{
    float n1, n2, media;
    int opc;
        do{
        do{
            printf("Digite a primeira nota: ");
            scanf("%f", &n1);
        }while(n1<0 || n1>10);
         do{
            printf("Digite a segunda nota: ");
            scanf("%f", &n2);
        }while(n1<0 || n2>10);

        media = (n1 + n2) / 2;
        printf("media: %.2f\n\n", media);

        printf("novo calculo? (1-sim-2-nao");
        scanf("%d", &opc);
    }while(opc!=2);



    return 0;
}
