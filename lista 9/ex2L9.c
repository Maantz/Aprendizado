#include <stdio.h>
typedef struct datA{
    int dia,mes,ano;
}data;
int main(){
    data date[3];
    printf("Cadastro de Datas\n");
    for(int i=0;i<3;i++){
        printf("Entre com o dia: ");
        scanf("%d", &date[i].dia);
        printf("Entre com o mes: ");
        scanf("%d", &date[i].mes);
        printf("Entre com o ano: ");
        scanf("%d", &date[i].ano);
    }
    printf("_____________________\n");
    printf("|Dia   |  Mes  | Ano |\n");
    printf("|______|_______|_____|\n");
    for(int j=0;j<3;j++){
        printf("%d       %d      %d\n", date[j].dia, date[j].mes, date[j].ano);
    }
    
    
    return 0;
}