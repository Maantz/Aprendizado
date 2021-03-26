#include <stdio.h>
typedef struct telefone{
    int ddd,telefone;
}tele;
int main(){
    tele tel[3];
    printf("Cadastro de Telefones\n");
    for(int i=0;i<3;i++){
        printf("Entre com o ddd: ");
        scanf("%d", &tel[i].ddd);
        printf("Entre com o telefone: ");
        scanf("%d", &tel[i].telefone);
    }
    
    printf("|DDD   |  Telefone|\n");
    
    for(int j=0;j<3;j++){
        printf("%d       %d\n", tel[j].ddd, tel[j].telefone);
    }
    
    
    return 0;
}