#include <stdio.h>
#include <stdlib.h>

int main (void){
    float sp = 67.83643, rj = 36.67866 ,mg = 29.22988, es = 27.16548 ,out = 19.84953, total = sp + rj + mg + es + out;
    float psp = 0, prj = 0, pmg = 0, pes = 0, pout = 0;



    printf("Valor Total: %.2f\nv", total);
    psp = ((sp*total)/100);
    prj = ((rj*total)/100);
    pmg = ((mg*total)/100);
    pes = ((es*total)/100);
    pout = ((out*total)/100);

    printf("Porcentagem de SP: %.2f\n", psp);
    printf("Porcentagem de RJ: %.2f\n",prj);
    printf("Porcentagem de MG: %.2f\n",pmg);
    printf("Porcentagem de ES: %.2f\n",pes);
    printf("Porcentagem de OUT: %.2f\n",pout);

    return 0;
}