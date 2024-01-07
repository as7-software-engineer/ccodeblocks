#include <stdio.h>
#include <stdlib.h>
/*aula 72 ex 2
pg que repita a leitura de uma senha até que ela seja válida.
p cada leitura de senha incorreta a mensagem inválida seja mostrada. senha inválida
caso acerte senha o pg deve ser encerrado com msg accesso permitido.  12345


*/
int main()
{
    int sd;
    printf("digite a senha: ");
    scanf("%d", &sd);

    switch(sd){
    case 123456:
        printf("acesso permitido;)");
        break;
    default:
        while(sd!=123456){

                printf("senha invalida, tente outra senha:\n");
                scanf("%d", &sd);
        }
        printf("acesso permitido;)");
        break;

    }




   /* while(sd != s){
        printf("senha invalida, tente outra senha:\n");
        scanf("%d", &sd);
    }
    printf("acesso permitido;)");*/

    return 0;
}
