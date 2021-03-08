#include <stdio.h>

int main(){
    int n, i=0, j=0;
    printf("<<Soma de Valores Naturais>>\n");
    printf("Quantos numeors deseja somar ? ");
    scanf("%d", &n);
    do{
        j += i;i++; 
    }while(i<=n);
    printf("A soma dos %d primeiros termos e:%d",n,  j);
    return 0;
}