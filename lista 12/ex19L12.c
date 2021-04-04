#include <stdio.h>

float imprime_vet_float(float *i, int n){
    printf("Vetor[%d] = %.0f", n, i[n]);
}

int negativos(float *vet, int n){
    int cout=0;
    for(int i=0;i<n;i++){
        if(vet[i] < 0){
            cout ++;
        }
    }
    return cout;
}

int main(){
    float vet[5]={-1,2,3,-4,5};
    int n=5, recebe;
    recebe = negativos(vet, n);
    printf("Ha %d numeros negativos no vetor\n", recebe);
    return 0;
}