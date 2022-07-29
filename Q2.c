#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(void) {


    int a, b, auxiliar, i, n, n_verifica =2, validador;

    a = 0;
    b = 1;
    //printf("Digite um numero para verificar dentro da Serie de Fibonacci: ");
    //scanf("%d", &n_verifica);
    printf("Digite um numero para quantidade de elementos a ser calculado: ");
    scanf("%d", &n);
    printf("\nSerie de Fibonacci:\n\n");
    printf("%d\n", b);

    for(i = 0; i < n; i++) {

        auxiliar = a + b;
        if (n_verifica == auxiliar){
            validador = 1;
        }
        else{
            validador = 0;
        }
        a = b;
        b = auxiliar;


        
        printf("%d\n", auxiliar);
    }

    if (validador == 1)
    {
        printf("O numero %d pertence a Serie de Fibonacci!\n", n_verifica);
    }
    else{
        printf("O numero %d nao pertence a Serie de Fibonacci!\n", n_verifica);
    }
    
    return 0;
}