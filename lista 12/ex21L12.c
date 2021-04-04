#include<stdio.h>

int imprime_vet_int(int *i, int n){
    printf("Vetor[%d] = %d", n, i[n]);
}

int multvet(int *vet,int n, int escalar){
    for(int j=0;j<n;j++){
        vet[j] = vet[j]*escalar;
    }
    return;
}



int main(){
    int vet[5]={1,2,3,4,5}, n;
    n=5;
    printf("Vetor Antes da Multiplicacao\n");
    for(int g=0;g<n;g++){
    imprime_vet_int(vet, g);
    printf("\n");
    }
    multvet(vet, n, 2);
    printf("Vetor Depois da Multiplicacao\n");
    for(int g=0;g<n;g++){
    imprime_vet_int(vet, g);
    printf("\n");
    }

}