#include <stdio.h>

int main(){
    float preco;
    int COD;
    printf("Valor do Produto com Imposto\n");
    printf("Informe o valor do produto R$: ");
    scanf("%f", &preco);
    printf("Agora Insira o Codigo do Estado de acordo com a tabela.\n-MG--- 1\n-SP--- 2\n-RJ--- 3\n-MS--- 4\nCodigo de Estado: ");
    scanf("%d", &COD);
    switch(COD){
        case 1: printf("Valor final com Impostos: R$%.2f", preco+(preco*0.07));break;//MG 7%
        case 2: printf("Valor final com Impostos: R$%.2f", preco+(preco*0.12));break;//SP 12%
        case 3: printf("Valor final com Impostos: R$%.2f", preco+(preco*0.15));break;//RJ 15%
        case 4: printf("Valor final com Impostos: R$%.2f", preco+(preco*0.08));break;//MS 8%
        default: printf("Codigo de Estado Desconhecido!!\n"); 
    }
    return 0;
}