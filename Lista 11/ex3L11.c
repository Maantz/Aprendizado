#include <stdio.h>

typedef struct pontos{
    int pontoX, pontoY;
}ponto;

int main(){
    ponto *vet;
    int n;
    printf("Quantos pontos deseja digitar ?\n");
    scanf("%d", &n);
    vet = (int*)calloc(n,sizeof(int));
    for(int i=0; i<n; i++){
        printf("Vetor %d\n", i+1);
        printf("Entre com a coordenada X do ponto %d: ", i+1);
        scanf("%d", &vet[i].pontoX);
        printf("Entre com a coordenada Y do  ponto %d: ", i+1);
        scanf("%d", &vet[i].pontoY);
        printf("===================\n");
    }
    printf("Pontos Digitados:");
    for(int i=0;i<n;i++){
        printf("(%d,%d);", vet[i].pontoX, vet[i].pontoY);
    }

    free(vet);
    return 0;

}