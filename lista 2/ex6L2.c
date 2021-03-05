#include <stdio.h>

int main(void){
    int A, B, c;
    printf("================\n");
    printf("TROCA DE VALORES!!\n\n");
    printf("================\n");
    printf("Digite o Valor de A: ");
    scanf("%d", &A);
    printf("Digite o Valor de B: ");
    scanf("%d", &B);
    c = A;
    A = B;
    B = c;
    printf("Apos a troca, o valor de A e %d e de B e %d\n", A, B);
    return 0;
}