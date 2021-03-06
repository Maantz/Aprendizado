#include <stdio.h>
#include <math.h>

int main(){
    printf("Equacoes de segundo grau com raizes nao reais\n");
    printf("Digite os valores de a, b, c respectivamente: ");
    double a, b, c, delta, x1, x2;
    scanf("%lf%lf%lf", &a,&b,&c);
    delta = (b*b)- 4*(a*c);
    if(delta>0){
    x1 = - b + sqrt(delta)/(2*a);
    x2 = - b - sqrt(delta)/(2*a);

    printf("x1=%lf x2=%lf\n", x1, x2);
    }
    else{
        double x3,x4;
        delta=delta*-1;
        x1 = - b /(2*a); 
        x2 = - b /(2*a);
        x3 = sqrt(delta)/(2*a);
        x4 = - sqrt(delta)/(2*a);
        printf("x1=%lf+(%lfi) x2=%lf+(%lfi)\n", x1, x3, x2, x4);
    }
    return 0;
}
