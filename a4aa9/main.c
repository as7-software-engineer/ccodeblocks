#include <stdio.h>
#include <stdlib.h>
/* aula 4 = lendo n inteiros
   aula 5 = lendo real
   aula 6 = lendo caractere(1)
   aula 7 = lendo caratere funçao getchar()(1)
   aula 8 = lendo caracter funcao getc();
   aula 9 = lendo caracter funcao fgetc();


*/
int main() {
    //funções que utilizamos arquivos ( fgetc()) obs, no nosso caso será lido do teclado. ainda usaremos a pr stdin
    char letra;

    printf("Digite um caracter: ");
    letra = fgetc(stdin);

    printf("Caracter lido: %c\n", letra);






         //8888888
//===============================
    /*
    char letra;

    printf("Digite um caracter: ");
    letra = getc(stdin);//pode ser utilizada para ler de outras fontes, ler de um arquivo texto,
    //no exmplo vamos ler a entrada padrao do computador(teclado por definição, basta usar a palavra reservada stdin
    printf("Caracter lido: %c\n", letra); //pega a primeira considerando os espaços também.*/

                      //777777
    //===================================
    /*
    char letra;
    printf("Digite uma letra: ");
    //scanf("%c",&letra);
    letra = getchar();//pega a primeira letra desconsiderando os espaços

    printf("Caracter lido: %c\n", letra);*/

                                  //66666
    //====================================
    /*
    //tipo nome; cactere
    char sexo = 'k';// tenho que colocar o elemento entre aspas, para o pg reconhhecer o mesmo como uma string.
    //usamos %c
    printf("Valor lido: %c\n",sexo);
    //int dados
    printf("Digite seu sexo: (f, F, m ou M)");
    scanf("%c",&sexo);
    printf("Valor lido na variavel sexo: %c\n", sexo);
*/


                                //55555
    //=============================================================

  /*  //tipo de var do tipo reais(tipo:) para reais utilizamos %f float
    float numero = 3.1415;

    printf("Valor da minha variavel: %.2f\n", numero);
    //Valor da minha variavel: 3.141500, por padrão ele exibi o número float com seis casas depois da vírgula.
    //para modificar-mos isso %(.(x))f (x)= quantidade de casas.
    printf("digite um numero real: ");
    scanf("%f", &numero);
    printf("Valor lido: %.3f\n", numero);*/
                                  //4444444
//==================================================================
   /* int valor, valor2; //var para guaedar um valor do tipo inteiro
    // posso também fazer uma atribuição, abixo:
    valor = 50;
    printf("\n\nvalor da minha var: %d\n\n", valor);

    printf("Digite um valor inteiro: ");
    //entrada de dados com scanf, duas partes: tipo e var (inteiro, var)
    //devo usar o & para associar o valor recebido ao local da variável definida.
    scanf("%d",&valor);

    printf("Digite um segundo valor inteiro: ");
    //entrada de dados com scanf, duas partes: tipo e var (inteiro, var)
    //devo usar o & para associar o valor recebido ao local da variável definida.
    scanf("%d",&valor2);

    printf("\n\nPrimero valor: %d\nSegundo valor: %d\n\n", valor,valor2);
*/
    return 0;
}
