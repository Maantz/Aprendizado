#include <stdio.h>

int linha_(int *x){
    for(int i=0;i<*x;i++){
        printf("=");
    }
}

int main(){
    int tamanho;
    printf("Qual o tamanho da linha ? ");
    scanf("%d", &tamanho);
    linha_(&tamanho);
}