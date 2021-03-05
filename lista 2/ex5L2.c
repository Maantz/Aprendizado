#include <stdio.h>

int main(void){
    int b1, b2, b3, b4, binario;
    printf("<<<<<Conversor de Binarios>>>>>\n");
    printf("Digite o 1o Bit: ");
    scanf("%d", &b1);
    printf("Digite o 2o Bit: ");
    scanf("%d", &b2);
    printf("Digite o 3o Bit: ");
    scanf("%d", &b3);
    printf("Digite o 4o Bit: ");
    scanf("%d", &b4);
    binario = (b4*1+b3*2+b2*4+b1*8);
    printf("%d%d%d%d em decimal e %d\n", b1,b2,b3,b4,binario);
    return 0;
}
