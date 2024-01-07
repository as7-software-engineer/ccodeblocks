#include <stdio.h>
#include <stdlib.h>
/* pg que tem 64 casas,1 grao no primeiro quadro, sempre dobrando ate chegar em 64.


*/
int main()
{

    int i;
    long double id=1, casas=64, total=1, acu=1; //%Lf

    for (i = 2; i<= 64;i++){
        id *= 2;
        acu+=id;
    }
    __mingw_printf("o total foi de: %Lf", acu);

    //18446744073709551615.000000
    //===int i;
   // long double somatorio = 1, inicio=1;
    //long long int somatorio = 1, inicio=1;// trocamos %d por %lld ou %lli>>>>vamos trocar o int de 8 bit para double de 16 bit, porem temos que remover um long(long double e nao long long=8bytes de mem
// lnng double trocamos o %lf por 5Lf
//precisaremos recorrer a uma função do compilador mingw. gcc
//imprindo os falores atraves de __mingw_printf("%d %Lf \n", i, inicio);


   /* for(i = 2; i <=64; i++){// pois a primeira casa ja tem 1 grao
        inicio *= 2;
        somatorio += inicio;
        //printf("%d %Lf \n", i, inicio);
        __mingw_printf("%d %Lf\n", i, inicio);

    }
    //printf("->%Lf \n", somatorio);// preciso aumentar a memoria de incio e somatorio(vars)
    __mingw_printf("-> %Lf\n", somatorio);
*/


    return 0;
}
