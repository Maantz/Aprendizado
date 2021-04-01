#include <stdio.h>

int potencia(int *x, int *n){
    int result=1;
    for(int i=0;i<*n;i++){
        result*= *x;
    }
    return(result);
}

int main(){
    int x, n, res;
    printf("<<Calculando as potencias>>\n");
    printf("declare o valor x: ");
    scanf("%d", &x);
    printf("Declare o valor do expoente n:");
    scanf("%d", &n);
    res = potencia(&x,&n);
    printf("%d", res);

}