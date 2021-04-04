#include <stdio.h>
#include <stdlib.h>

typedef struct pontos{
    int pontoX, pontoY;
}ponto;

int main(){
    ponto *vet, *mAcima, *mAbaixo, *mDireita, *mEsquerda;
    int n;
    printf("Quantos pontos deseja digitar ?\n");
    scanf("%d", &n);
    vet = (int*)calloc(n,sizeof(int));
    mAcima = (int*)calloc(1,sizeof(int));
    mAbaixo = (int*)calloc(1,sizeof(int));
    mEsquerda = (int*)calloc(1,sizeof(int));
    mDireita =  (int*)calloc(1,sizeof(int));
    for(int i=0; i<n; i++){
        printf("Vetor %d\n", i+1);
        printf("Entre com a coordenada X do ponto %d: ", i+1);
        scanf("%d", &vet[i].pontoX);
        printf("Entre com a coordenada Y do  ponto %d: ", i+1);
        scanf("%d", &vet[i].pontoY);
        printf("===================\n");
    }
    mDireita->pontoY = vet[0].pontoY;
    mEsquerda->pontoY = vet[0].pontoY;
    mAcima->pontoX = vet[0].pontoX;
    mAbaixo->pontoX = vet[0].pontoX;
    mDireita->pontoX = vet[0].pontoX;
    mEsquerda->pontoX = vet[0].pontoX;
    mAcima->pontoY = vet[0].pontoY; 
    mAbaixo->pontoY = vet[0].pontoY; 
    
    for(int i=0;i<n;i++){
        if(mAcima->pontoY < vet[i].pontoY ){
            mAcima->pontoY = vet[i].pontoY;
            mAcima->pontoX = vet[i].pontoX;
        }
        if(mAbaixo->pontoY > vet[i].pontoY){
            mAbaixo->pontoY = vet[i].pontoY;
            mAbaixo->pontoX = vet[i].pontoX;
        }
        if(mEsquerda->pontoX>vet[i].pontoX){
            mEsquerda->pontoX = vet[i].pontoX;
            mEsquerda->pontoY = vet[i].pontoY;
        }
        if(mDireita->pontoX < vet[i].pontoX){
            mDireita->pontoX = vet[i].pontoX;
            mDireita->pontoY = vet[i].pontoY;
        }
    }
    printf("Pontos Digitados:");
    for(int i=0;i<n;i++){
        printf("(%d,%d);", vet[i].pontoX, vet[i].pontoY);
    }
    printf("\nPonto mais acima: (%d,%d)\n", mAcima->pontoX, mAcima->pontoY);
    printf("Ponto mais abaixo: (%d,%d)\n", mAbaixo->pontoX, mAbaixo->pontoY);
    printf("Ponto mais a Direita: (%d,%d)\n", mDireita->pontoX, mDireita->pontoY);
    printf("Ponto mais a Esquerda: (%d,%d)\n", mEsquerda->pontoX, mEsquerda->pontoY);


    free(vet);
    return 0;

}