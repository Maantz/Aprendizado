#include <stdio.h>
#include <math.h>

int imprime_vet_int(int *i, int n){
    for(int j=0;j<n;j++){
        if(j==0){
            printf("%d",  i[j]);    
        }else{
            printf(";%d",  i[j]);
        }
    
    }
}

int maior_vet(int *vet, int n){
    int maior;
    maior =  vet[0];
    for(int i=0;i<n;i++){
        if(maior<vet[i]){
            maior = vet[i];
        }
    }
    return maior;
}

int menor_vet(int *vet, int n){
    int menor;
    menor =  vet[0];
    for(int i=0;i<n;i++){
        if(menor>vet[i]){
            menor = vet[i];
        }
    }
    return menor;
}

int negativos(int *vet, int n){
    int cout=0;
    for(int i=0;i<n;i++){
        if(vet[i] < 0){
            cout ++;
        }
    }
    return cout;
}

int vet_abs(int *vet, int n){
    for(int i=0;i<n;i++){
        vet[i]=abs(vet[i]);
    }
}

int copiarvet( int *vetorigem, int *vetDestino, int n){
    for(int i=0;i<n;i++){
        vetDestino[i]=vetorigem[i];
    }
    return;
}

int multvet(int *vet,int n, int escalar){
    for(int j=0;j<n;j++){
        vet[j] = vet[j]*escalar;
    }
    return;
}
int main(){
    int *vet, n, maior, menor, neg;
    printf("Quantos Vetores ira usar ?\n");
    scanf("%d", &n);
    vet = (int *)calloc(n,sizeof(int));
    for(int j=0;j<n;j++){
        printf("---------------------------\n");
        printf("Entre com o valor %d: ", j+1);
        scanf("%d", &vet[j]);
    }
    printf("---------------------------\n");
    int *vetcopy, *vetabs, esc;
    vetcopy = (int *)calloc(n,sizeof(int));
    vetabs = (int *)calloc(n,sizeof(int));
    copiarvet(vet, vetabs, n);
    printf("Vetor: ");
    imprime_vet_int(vet, n);
    maior = maior_vet(vet, n);
    menor = menor_vet(vet, n);
    printf("\nMaior: %d,  Menor: %d", maior, menor);
    neg= negativos(vet, n);
    printf("\nNumero de negativos: %d", neg);
    copiarvet(vet, vetcopy, n);
    printf("\nVetor Original: ");
    imprime_vet_int(vet,n);
    printf("\nVetor Copiado: ");
    imprime_vet_int(vetcopy, n);
    printf("\nVetor Absoluto:");
    vet_abs(vetabs, n);
    imprime_vet_int(vetabs, n);
    printf("\nEntre com o valor escalar para multiplicar o vetor original: ");
    scanf("%d", &esc);
    multvet(vet, n,esc);
    printf("\nVetor Original: ");
    imprime_vet_int(vet,n);
    printf("\nVetor Copiado: ");
    imprime_vet_int(vetcopy, n);

    free(vet);
    free(vetcopy);
    return 0;
}