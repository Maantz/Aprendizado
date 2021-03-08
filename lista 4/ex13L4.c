#include <stdio.h>

int main(){
    int n, i, j, k=0,cont=0;
    printf("<<Multiplos>>\n");
    printf("Entre com o valor de n: ");
    scanf("%d", &n);
    printf("Entre com o valor de i: ");
    scanf("%d", &i);
    printf("Entre com o valor de j: ");
    scanf("%d", &j);
    printf("Os multiplos de i ou j sao: ");
    while(cont<n){
        switch(k){
        case 0:
        if(k%i==0||k%j==0){printf("%d", k);cont++;}
        k++;break;
        default:
        if(k%i==0||k%j==0){printf(",%d", k);cont++;}
        k++;
        }
        
    }
    return 0;
}