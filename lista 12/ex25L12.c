#include <stdio.h>

double *aloca_double(double n){
    double *vetor;
    vetor = (double *)calloc(n,sizeof(double));
    for(int i=0;i<n;i++){
        vetor[i]=0;
    }
    return vetor;
}

double *copiavet(double *vet, int n){
    double *vetcopy;
    vetcopy = (double *)calloc(n,sizeof(double));
    for(int i=0;i<n;i++){
        vetcopy[i]= vet[i];
    }
    return vetcopy;
}

double imprime_vet_double(double *i, int n){
    for(int j=0;j<n;j++){
    printf("Vetor[%d] = %.2lf\n", j, i[j]);
    }
}

int main(){
    double *vetorigem, *vetDestino;
    int n=5;
    vetorigem = aloca_double(n);
    vetDestino =  copiavet(vetorigem,n);
    printf("Vetor Origem:\n");
    imprime_vet_double(vetorigem, n);
    printf("Vetor Copia:\n");
    imprime_vet_double(vetDestino, n);
    free(vetorigem);
    free(vetDestino);
    return 0;
}