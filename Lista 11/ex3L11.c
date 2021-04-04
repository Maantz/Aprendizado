#include <stdio.h>

int main(){
    int *p, n, par=0, impar=0;
    printf("Quantos numeros desejar alocar ?\n");
    scanf("%d", &n);
    p = (int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("Informe um numero:", i+1);
        scanf("%d", &p[i]);
    }
    for(int i=0;i<5;i++){
        if(p[i]%2==0){
            par ++;
        }
        else{
            impar ++;
        }
    }
    printf("%d sao pares\n", par);
    printf("%d sao impares\n", impar);
    printf("\n");
    free(p);

    return 0;
}