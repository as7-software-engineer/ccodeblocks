#include <stdio.h>
#include <stdlib.h>
/*para uma rurma de 45 alunos.
pg que idade média dos alunos com menos de 1,7m
pg a altura média dos alunos com mais de 20 anos.


*/
int main()
{
    int i, y, ymnor170= 0, qymnor170=0, qhdcmd20a=0;
    float im, am, h, hmior20=0;

    for(i = 1; i<= 4; i++){
            printf("digite sua idade e sua altura(m): ");
            scanf("%d%f", &y, &h);

            if(h < 1.7){
                ymnor170 += y;
                qymnor170++;
            }

            if(y > 20){
                hmior20 += h;
                qhdcmd20a++;
            }



    }
    im = (float)ymnor170/qymnor170; //inteiro por int, precisamos usar o float()
    am = hmior20/qhdcmd20a;
    printf("idade media dos alunos com menos de 1,7m: %.1f\n", im);
    printf("altura media dos alunos com mais de 20 anos: %.2f\n", am);


    return 0;
}
