#include<stdio.h>

int imprime_vet_int(int *i, int n){
    printf("Vetor[%d] = %d", n, i[n]);
}
int copiarvet( int *vetorigem, int *vetDestino, int n){
    for(int i=0;i<n;i++){
        vetDestino[i]=vetorigem[i];
    }
    return;
}

int main(){
    int vet[5]={-1,2,3,-4,5}, vet2[5], v=5;
    copiarvet(vet, vet2, v);
    printf("Vetor 1: \n");
    for(int g=0;g<v;g++){
    imprime_vet_int(vet, g);
    printf("\n");
    }
    printf("Vetor 2: \n");
    for(int k=0;k<v;k++){
    imprime_vet_int(vet2, k);
    printf("\n");
    }
    return 0;
}