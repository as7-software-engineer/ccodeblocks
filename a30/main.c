#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // vai corrigir o problema da acentua��o

/* aula 30: tabela ascii e acentua��o
1 byte 8bits -> -128 at� 127
unsigned 1 byte -> 0 at� 255

9 � o caractere de tabula��o \t; 10 � o caractere de nova linha \n(enter);
65 � a letra A mai�scula; 66 � a letra B mai�scula;
90 � a letra Z mai�scula.

1� = setelocale(LC_ALL, NULL); padr�o da linguagem C
2� = setelocale(LC_ALL, ""); padr�o do os
3� = setelocale(LC_ALL, "Portuguese"); portugu�s br

*/
int main()
{
    //setlocale(LC_ALL, NULL);// NAO AGRADOU
    //setlocale(LC_ALL, ""); //FUNCIONOU, POIS O SISTEMA OPERACIONAL INFLUENCIOU.
    //setlocale(LC_ALL, "Portuguese");// top
    printf("%s\n", setlocale(LC_ALL,"Portuguese"))
    printf("cora��o\n");





  //  char letra = 'f';//102
   // printf("%c", 70);//f



    return 0;
}
