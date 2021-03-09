#include <stdio.h>
#include <stdlib.h>


int main(){
    int p ,i=2, cont=0;
    printf("<<Numeros Primos>>\n");
    printf("Entre com o valor: ");
    scanf("%d", &p);
    
    while(i<p){
        if(p%i==0){
            cont++;
            break;     
        }
        i++;
    }
    
    if(p==0||p==1){
        cont++;
    }
    if(cont == 0){
        printf("O numero %d e primo\n", p);
    }else{
        printf("O numero %d nao e primo\n", p);
    }
    
    return 0;
    
}