#include <stdio.h>
#include <stdlib.h>

int main(void){
    float num;
    printf("====Calculo da Quadrado de X===\n");
    printf("Digite um numero: ");
    scanf("%f", &num);
    printf("O valor de %.2f ao quadrado e %.2f\n", num, num*num);
    system("pause");
    return 0;
}