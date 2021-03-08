#include <stdio.h>

int main(){
    int n, i, j=0;
    printf("<<Soma de Valores Naturais>>\n");
    printf("Quantos numeors deseja somar ? ");
    scanf("%d", &n);
    for(i=0;i<=n;i++){
        j += i; 
    }
    printf("A soma dos %d primeiros termos e:%d",n,  j);
    return 0;
}