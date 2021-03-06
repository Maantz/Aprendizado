#include <stdio.h>

int main(){
    float venda, pagamento;
    printf("Calculo de Comissao dos Funcionarios\n");
    printf("Digite o valor da venda: ");
    scanf("%f",&venda);
    if(venda>=100000){
        pagamento = 700.00+ (0.16*venda);
        printf("Valor da Comissao : R$%.2f\n", pagamento);
    }else if(venda<100000&&venda>=80000){
        pagamento = 650.00+ (0.14*venda);
        printf("Valor da Comissao : R$%.2f\n", pagamento);
    }else if(venda<80000&&venda>=60000){
        pagamento = 600.00+ (0.14*venda);
        printf("Valor da Comissao : R$%.2f\n", pagamento);
    }else if(venda<60000&&venda>=40000){
        pagamento = 550.00+ (0.14*venda);
        printf("Valor da Comissao : R$%.2f\n", pagamento);
    }else if(venda<40000&&venda>=20000){
        pagamento = 500.00+ (0.14*venda);
        printf("Valor da Comissao : R$%.2f\n", pagamento);
    }else if(venda<20000){
        pagamento = 400.00+ (0.14*venda);
        printf("Valor da Comissao : R$%.2f\n", pagamento);
    }
    return 0;



}