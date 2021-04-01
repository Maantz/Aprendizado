#include <stdio.h>

int fat(int *x){
    int fatorial=1;
    for(int i=*x;i>0;i--){
        fatorial *=i;
    }
    return fatorial;
}

int main(){
    int num, a;
    printf("<<FATORIAL>>\n");
    printf("Digite um numero para calcular o fatorial:");
    scanf("%d", &num);
    a=fat(&num);
    printf("%d", a);

}