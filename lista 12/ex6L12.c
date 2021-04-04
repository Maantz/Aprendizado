#include <stdio.h>

double fat(double *x){
    double fatorial=1;
    for(int i=*x;i>0;i--){
        fatorial *=i;
    }
    return fatorial;
}
double neperiaNumber(double *n){
    double e=1,fatTemp;
    for(double i=1;i<=*n;i++){
        fatTemp = fat(&i);
        e += 1/fatTemp;
    }
    return(e);
}

int main(){
    double  n, e;
    printf("Numero neperiano\n");
    printf("Digite quantidade de termos: ");
    scanf("%lf", &n);
    e = neperiaNumber(&n);
    printf("e ~ %.14lf", e);    
    return 0;
}