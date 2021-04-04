#include<stdio.h>
#include<math.h>
int vet_abs(int *vet, int n){
    for(int i=0;i<n;i++){
        vet[i]=abs(vet[i]);
    }
}
int main(){
    int *vet, n;
    printf("Quantos Vetores ira usar ?\n");
    scanf("%d", &n);
    vet = (int *)calloc(n,sizeof(int));
    for(int j=0;j<n;j++){
        printf("---------------------------\n");
        printf("Entre com o valor %d: ", j+1);
        scanf("%d", &vet[j]);
    }
    vet_abs(vet, n);
    printf("O vetor com os valores absolutos e:\n");
    for(int i=0;i<n;i++){
        printf("Vetor[%d] = %d\n", i, vet[i]);
    }
    free(vet);
    return 0;
}