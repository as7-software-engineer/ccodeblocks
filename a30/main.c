#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // vai corrigir o problema da acentuação

/* aula 30: tabela ascii e acentuação
1 byte 8bits -> -128 até 127
unsigned 1 byte -> 0 até 255

9 é o caractere de tabulação \t; 10 é o caractere de nova linha \n(enter);
65 é a letra A maiúscula; 66 é a letra B maiúscula;
90 é a letra Z maiúscula.

1° = setelocale(LC_ALL, NULL); padrão da linguagem C
2° = setelocale(LC_ALL, ""); padrão do os
3° = setelocale(LC_ALL, "Portuguese"); português br

*/
int main()
{
    //setlocale(LC_ALL, NULL);// NAO AGRADOU
    //setlocale(LC_ALL, ""); //FUNCIONOU, POIS O SISTEMA OPERACIONAL INFLUENCIOU.
    //setlocale(LC_ALL, "Portuguese");// top
    printf("%s\n", setlocale(LC_ALL,"Portuguese"))
    printf("coração\n");





  //  char letra = 'f';//102
   // printf("%c", 70);//f



    return 0;
}
