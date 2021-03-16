#include <stdio.h>

int main(void){
    float salario, salplus;
    printf("===Calculadora de Salarios===\n");
    printf("Digite o salario: ");
    scanf("%f", &salario);
    salplus = salario + salario*0.25;
    printf("Apos 25%% de Aumento o Salario fica em R$%.2f", salplus);
    return 0;
}