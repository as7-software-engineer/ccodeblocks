#include <stdio.h>
#include <stdlib.h>
//aula 22 = operador long para o tipo double
//double -> lf
//long double -> Lf em qq distribuição linux ou mac vai funcionar.
// para windows usamos outro método:
//
  // __mingw_print();

int main()
{

  float x = 3.1415; // precisão simples

  //double y = 3.14152535353535;//precisão dupla
  long double y = 3.14152535353535;//precisão dupla

    printf("Valor de y: %Lf\n", y);// para imprimir um double, usamos %lf de long float.
    __mingw_printf("Valor de y: %.15Lf\n", y);
    printf("um long double precisa de %d bytes de memoria.\n", sizeof y);
    //Valor de y: 3.141525 6 digitos por padrão
    // 8*8 bytes = 64 bites de memória


  return 0;
}
