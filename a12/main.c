#include <stdio.h>
#include <stdlib.h>
/*
Aula 12 = ler idade, peso , altura e sexo


*/
int main()
{
    char sexo;
    int idade;
    float peso, altura;
    //definição do pedido
    printf("Digite idade, peso, altura e sexo (f, f, m ou M):\n");
    //leitura das informações
    //sexo = getchar();
    scanf("%d%f%f %c", &idade, &peso, &altura, &sexo);

    // buffer do teclado => 45\n56.2\n1.63\n
    // para resolver, precisamos dar um espaço
    printf("Idade: %d\nPeso: %.2f\nAltura: %.2f\nSexo: %c\n", idade, peso, altura, sexo);



    return 0;
}
