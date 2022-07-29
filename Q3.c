#include <stdio.h>
#include <stdlib.h>


void maiorMenor(float *vet, int tam, float *menor, float *maior, int *diasMediaM, float mediaM){
    int i;
    *menor = *vet;
    *maior = *vet;
    printf("valor: %.2f\n", mediaM);
    for(i = 1; i < tam; i++){
        if(*maior < *(vet + i))
            *maior = *(vet + i);
        if(*menor > *(vet + i))
            *menor = *(vet + i);
    }
    for (int i = 0; i < tam; i++)
    {
       if (vet[i] > mediaM) 
        {
            *diasMediaM = *diasMediaM + 1;
        }
    }
}


int main(void){
    
    float dia[30] = {22174.1664,24537.6698,26139.6134,00.00,00.00,26742.6612,00.00,42889.2258,46251.174,11191.4722,
    00.00,00.00,3847.4823,373.7838,2659.7563,48924.2448,18419.2614,00.00,00.00,35240.1826,43829.1667,18235.6852,4355.0662,
    13327.1025,00.00,00.00,25681.8318,1718.1221,13220.495,814.61},
    maior, menor, mediaM = 0;
    int diasMediaM = 0, diasI = 0, tam = 30;
    
    for (int i = 0; i < tam; i++)
    {
        mediaM = mediaM + dia[i];
    }
    for (int i = 0; i < tam; i++)
    {
        if (dia[i] == 00.00)
        {
            diasI = diasI + 1;
        }
    }
    mediaM = mediaM/(30-diasI);
    maiorMenor(dia, tam, &menor, &maior, &diasMediaM, mediaM);
    printf("Menor: %.2f\nMaior: %.2f\n", menor, maior);

    
    for(int i = 0; i < tam; i++){
        if (dia[i] > mediaM) 
        {
            diasMediaM = diasMediaM + 1;
        }
        
        
        
    }
    printf("Media mensal: %.2f\n", mediaM);
    printf("Dias com Faturamento maior que o mensal: %d\n", diasMediaM);
    return 0;
}


