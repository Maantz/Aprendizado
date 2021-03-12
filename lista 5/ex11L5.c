#include <stdio.h>

int main(){
    int v[5], v1[5], v2[5], i=0, j=0,k=0;
    printf("<< Pares e Impares >>\n");
    while(i<5){
        printf("Digite o Valor %d: ", i+1);
        scanf("%d", &v[i]);
        if(v[i]%2!=0){
            v1[j]=v[i];j++;
        }
        else{
            v2[k]=v[i];k++;
        }
        i++;
    }
    printf("Impares: ");
    for(int l=0;l<j;l++){
        if(l>0){
            printf(",%d", v1[l]);
        }else{
        printf("%d", v1[l]);
        }
        
        
        
    }
    printf("\nPares: ");
    for(int m=0;m<k;m++){
        if(m>0){
            printf(",%d", v2[m]);
        }else{
        printf("%d", v2[m]);
    }
    }
    return 0;
}