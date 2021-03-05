#include <stdio.h>

int main(void){
    int dias;
    float sal_bruto, sal_liquido, inss, renda;
    printf("===Salario do Encanador===\n");
    printf("Digite o numero de dias trabalhados: ");
    scanf("%d", &dias);
    sal_bruto = dias*30;
    renda = sal_bruto*0.08;
    inss = sal_bruto*0.04; 
    sal_liquido = sal_bruto - renda - inss;
    printf("Valor Bruto: R$%.2f\nValor Liquido: R$%.2f\nDesconto INSS: R$%.2f\nDesconto Imposto de Renda: R$%.2f\n", sal_bruto, sal_liquido, inss, renda);
    return 0;

}