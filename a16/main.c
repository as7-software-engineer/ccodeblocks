#include <stdio.h>
#include <stdlib.h>
//aula 16 = operador sizepf
//     sizeof x ou sizeof(int)




int main()
{
                                 // sizeof é um operador ou uma constante.
    float x = 1.0;
    printf("Tamanho de um float na memória:  %d bytes\n ",sizeof x) ;// par de () não é obrigatório

    printf("Tamanho de um int: %d bytes\n ",sizeof(int)); //aqui eu quero saber o tamnho de um tipo primitivo.
    //Tamanho de um int: 4 (bytes) = 4x8bites = 32bites em memória



    return 0;
}
