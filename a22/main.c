#include <stdio.h>
#include <stdlib.h>
//aula 22 = operador long para o tipo double
//double -> lf
//long double -> Lf em qq distribui��o linux ou mac vai funcionar.
// para windows usamos outro m�todo:
//
  // __mingw_print();

int main()
{

  float x = 3.1415; // precis�o simples

  //double y = 3.14152535353535;//precis�o dupla
  long double y = 3.14152535353535;//precis�o dupla

    printf("Valor de y: %Lf\n", y);// para imprimir um double, usamos %lf de long float.
    __mingw_printf("Valor de y: %.15Lf\n", y);
    printf("um long double precisa de %d bytes de memoria.\n", sizeof y);
    //Valor de y: 3.141525 6 digitos por padr�o
    // 8*8 bytes = 64 bites de mem�ria


  return 0;
}
