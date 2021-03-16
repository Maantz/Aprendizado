#include <stdio.h>

int main(void){
    int x=780000, p1, p2, p3;
    p1 = x*0.46;
    p2 = x*0.32;
    p3 = x*0.22;
    printf("===Loteria===\n");
    printf("Valor total : %d\n", x);
    printf("Primeiro ganhador: %d\nSeguno ganhador: %d\nTerceiro ganhador: %d\n", p1, p2, p3);
    return 0;
}