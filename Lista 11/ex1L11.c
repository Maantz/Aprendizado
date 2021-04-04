#include <stdio.h>

int main(){
    double *produtos; 
    int n;
    printf("Informe o numero de produtos"); 
    scanf("%d",&n);
    produtos = (double *)malloc(n*sizeof(double));

    for(int i=0;i<n;i++){
        printf("Informe o valor do produto %d R$:", i+1);
        scanf("%lf", &produtos[i]);
    }
    printf("\nProdutos cadastrados\n");
    for(int i=0; i<n; i++){
        printf("Produto %d - R$%.2lf\n", i+1, produtos[i]);
    }

    free(produtos);
}