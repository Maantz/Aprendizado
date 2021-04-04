#include <stdio.h>

float change(float *a, float *b){
    float c;
    c = *a;
    *a = *b;
    *b = c;
}

int main(){
    printf("<<Troca de Valores>>\n");
    float A, B, a, b;
    printf("Digite o valor de A:");
    scanf("%f", &A);
    printf("Digite o valor de B:");
    scanf("%f", &B);
    change(&A,&B);
    printf("A = %.2f\nB = %.2f", A, B);



}