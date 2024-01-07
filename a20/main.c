#include <stdio.h>
#include <stdlib.h>
//aula 20 = tamanho de um float na memória
// %f
int main()
{
// um float ocupa mesma quantidade de bytes de um inteiro, porém a froma coomo os
//dados são guardados é diferenete:
  float x = 3.1415;
    // não podemos usar shor ou long e float na mesma statement.
  //printf("um float precisa de %d bytes de memoria.\n", sizeof(float));
    printf("um float precisa de %d bytes de memoria.\n", sizeof x);
// na next aula vamos saber como aumentar as variáveis. relacioando a um número real


  return 0;
}
