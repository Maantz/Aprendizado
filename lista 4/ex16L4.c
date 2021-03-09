#include <stdio.h>
#include <math.h>

int main(){
    int bits=2;
    double result, base, exp;
    while(bits<=4){
        base=bits;
        result= pow(base,2);
        printf("Com %d bits e possivel enderecar %.14lf posicoes de memoria.\n", bits, result);bits=bits*2;
        exp=base;
    }
    bits=8;
    while(bits<=128){ 
        base=bits;
        result= pow(2,base);
        printf("Com %d bits e possivel enderecar %.14g posicoes de memoria.\n", bits, result);bits=bits*2;
        exp=base;
    }

    return 0;
}