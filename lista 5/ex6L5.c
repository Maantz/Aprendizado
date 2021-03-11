#include <stdio.h>

int main(){
    int vet[5], maior, menor, imaior, imenor;
    float media=0;
    printf("<< 5 valores>>\n");
    for(int i=0;i<5;i++){
    printf("Entre com o numero %d: ", i+1);
    scanf("%d", &vet[i]);
    media+=vet[i];
    }
    maior=vet[0];
    menor=vet[0];
    printf("Os numeros digitados sao: ");
    for(int j=0;j<5;j++){
        printf("%d ", vet[j]);
        if(maior<vet[j]){
            maior = vet[j];
            imaior = j;
        }
        if(menor>vet[j]){
            maior = vet[j];
            imenor = j;
        }
    }
    
    printf("\no maior valor e: %d,localizado na posicao %d \n", maior, imaior);
    printf("o menor valor e: %d,localizado na posicao %d\n", menor, imenor);
    printf("a media e : %g\n", media/5);
    return 0;
}