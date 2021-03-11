#include <stdio.h>

int main(){
    int vet[5], maior, mult;
    printf("<<Normalizando as notas>>\n");
    for(int i=0;i<5;i++){
    printf("Entre com a nota do aluno %d: ", i+1);
    scanf("%d", &vet[i]);
    }
    maior=vet[0];
    printf("Notas normalizadas\n");
    for(int j=0;j<5;j++){
        if(maior<vet[j]){
            maior = vet[j];
            
        }
        
    }
    mult = 100/maior;
    for(int k=0;k<5;k++){
        printf("A nota do aluno %d e %d\n",k+1,(vet[k]*mult));
    }
    return 0;
}
