#include <stdio.h>

int main(){
    int vet[6];
    printf("<< Listando um vetor em ordem Inversa >>\n");
    for(int i=0;i<6;i++){
    printf("Entre com o numero %d: ", i+1);
    scanf("%d", &vet[i]);
    }
    
    printf("Os valores lidos sao: ");
    for(int j=5;j>=0;j--){
        printf("%d ", vet[j]);
    }
    return 0;
}