#include <stdio.h>
#include <stdlib.h>
//aula 20 = tamanho de um float na mem�ria
// %f
int main()
{
// um float ocupa mesma quantidade de bytes de um inteiro, por�m a froma coomo os
//dados s�o guardados � diferenete:
  float x = 3.1415;
    // n�o podemos usar shor ou long e float na mesma statement.
  //printf("um float precisa de %d bytes de memoria.\n", sizeof(float));
    printf("um float precisa de %d bytes de memoria.\n", sizeof x);
// na next aula vamos saber como aumentar as vari�veis. relacioando a um n�mero real


  return 0;
}
