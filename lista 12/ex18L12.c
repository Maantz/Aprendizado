#include <stdio.h>

double imprime_vet_double(double *i, int n){
    printf("Vetor[%d] = %.0lf", n, i[n]);
}
double maior_vet(double *vet, int n){
    double maior;
    maior =  vet[0];
    for(int i=0;i<n;i++){
        if(maior<vet[i]){
            maior = vet[i];
        }
    }
    return maior;
}
double menor_vet(double *vet, int n){
    double menor;
    menor =  vet[0];
    for(int i=0;i<n;i++){
        if(menor>vet[i]){
            menor = vet[i];
        }
    }
    return menor;
}





int main(){
    double vet[5]={1,2,3,4,5};
    int tam=5;
    double maior, menor;
    for(int n=0;n<5;n++){
        imprime_vet_double(vet, n);
        printf("\n");
    }
    maior = maior_vet(vet, tam);
    menor = menor_vet(vet, tam);
    printf("Maior = %0.lf\n", maior);
    printf("Menor = %0.lf\n", menor);

    return 0;
}