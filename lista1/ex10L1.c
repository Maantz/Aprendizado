#include <stdio.h>

int main(void){
    float b1, b2, b3, premio, p1, p2, p3, soma;
    printf("===Loteria===\n");
    printf("Bolao jogador 1: ");
    scanf("%f", &b1);
    printf("Bolao jogador 2: ");
    scanf("%f", &b2);
    printf("Bolao jogador 3: ");
    scanf("%f", &b3);
    printf("Valor do Premio: ");
    scanf("%f", &premio);
    soma= b1 + b2 + b3;
    p1 = premio * (b1 * (soma/100));
    p2 = premio * (b2 * (soma/100));
    p3 = premio * (b3 * (soma/100));
    printf("Jogador 1 recebera: R$%.2f\n", p1);
    printf("Jogador 1 recebera: R$%.2f\n", p2);
    printf("Jogador 1 recebera: R$%.2f\n", p3);
    return 0;
}