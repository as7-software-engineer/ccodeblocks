#include <stdio.h>
#include <stdlib.h>
/*5 fa�a um pg que leia as notas referentes as duas av de um aluno.
calcule imprima mdia semetral. fa�a com que o pg s� aceite notas v�lidas (uma nota de 0 a 10.
cada nota deve ser validada separadamente.
*/
int main()
{
    float n1, n2, ms;
    do{
        printf("Digite a primeira nota: ");
        scanf("%f", &n1);
    }while(n1 <0 || n1 >10);

    do{
        printf("Digite a nota 2: ");
        scanf("%f", &n2);
    }while(n2 <0 || n2 >10);

    ms = (n1 + n2)/2;
    printf("Nota final: %.2f\n", ms);

    return 0;
}
