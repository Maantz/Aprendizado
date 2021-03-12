#include <stdio.h>

int main(){
    int vet[5];
    printf("Zerando negativos\n");
    for(int i=0;i<5;i++){
        printf("Entre com o numero %d: ", i+1);
        scanf("%d", &vet[i]);
        if(vet[i]<0){
            vet[i]=0;
        }
    }
    printf("Zerando os negativos obtem-se: ");
    for(int j=0;j<5;j++){
        printf("%d ", vet[j]);
    }

}