#include <stdio.h>
#include <stdlib.h>
/*
Aula 11 = ler sexo,idade,pesp e altura.


*/
int main()
{
    char sexo;
    int idade;
    float peso, altura;
    //definição do pedido
    printf("Digite sexo (f, f, m ou M), idade, peso e altura: \n");
    //leitura das informações
    //sexo = getchar();
    scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);
    printf("sexo informado: %c\nidade: %d\npeso: %.2f\naltura: %.2f\n",sexo, idade, peso, altura);



    return 0;
}
