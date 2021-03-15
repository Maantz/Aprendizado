#include <stdio.h>

int main(){
    printf("<<Valores Iguais>>\n");
    int vet[8], cont=0;
    for(int i=0;i<8;i++){//leitura
        printf("Entre com o numero %d: ", i+1);
        setbuf(stdin,NULL);
        scanf("%d", &vet[i]);
    }

    printf("Valores repetidos: ");
    for(int k=0;k<8;k++){
        for(int j=8;j>0;j--){
        if(vet[k]==vet[j]&&k!=j&&vet[k]!=vet[k-1]){
            vet[j]=-30000000;
            if(vet[k]!=-30000000){
                if(cont==0){
            printf("%d", vet[k]);cont++;break;
                }
            if(cont>0){
                printf(", %d", vet[k]);cont++;break;
            }
        }
        
    }

    }

    
}
return 0;
}