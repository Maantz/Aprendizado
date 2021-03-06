#include <stdio.h>
#include <math.h>
int main(){
    int num,teste;
    printf("QUADRADO PERFEITO ??\n");
    printf("Digite um numero pra saber se ele e quadrado perfeito: ");
    scanf("%d", &num);
    teste = sqrt(num);
    if(teste*teste==num&&teste>0){
        printf("E quadrado perfeito!\n");
        printf("e sua raiz e %d", teste);
    }
    else{
        printf("Nao e quadrado perfeito\n");
    }
    return 0;
}