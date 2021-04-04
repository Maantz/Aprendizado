#include <stdio.h>
#include <stdlib.h>

int imprime_vet_int(int *i, int n){
    for(int j=0;j<n;j++){
    printf("Vetor[%d] = %d\n", j, i[j]);
    }
}
int *aloca_inteiro(int n){
    int *vetor;
    vetor = (int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        vetor[i]=0;
    }
    return vetor;
}
int main(){
    int *vet;
    vet = aloca_inteiro(10);
    imprime_vet_int(vet,10);
    free(vet);
    return 0;
}