#include <stdlib.h>
#include <stdio.h>

int main (void){

    int i = 13, soma = 0, k = 0;

    while (k < i)
    {
        k = k + 1;
        soma = soma + k;
        printf("k = %d\n", k);
        printf("soma = %d\n\n", soma);
    }
    
    printf("soma = %d\n", soma);


    return 0;
}