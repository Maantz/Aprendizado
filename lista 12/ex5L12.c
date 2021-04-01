#include <stdio.h>
#include <math.h>

perfectsquare(int *x){
    int test,verificador=0;
    test = sqrt(*x);
    if(test*test==*x&&test>0){
        verificador=1;
    }
    return(verificador);
}
int main(){
    int num, ver;
    printf("QUADRADO PERFEITO ??\n");
    printf("Digite um numero pra saber se ele e quadrado perfeito: ");
    scanf("%d", &num);
    ver = perfectsquare(&num);
    if(ver==1){
        printf("Verdadeiro\n");
    }
    else{
        printf("Falso\n");
    }
    return 0;
}