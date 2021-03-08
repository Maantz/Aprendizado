#include <stdio.h>
#include <math.h>

int main(void){
    int binario, nBit, i=0,j, k;
    printf("<<<<<Conversor de Binarios>>>>>\n");
    printf("Entre com o numero de Bits: ");
    scanf("%d", &nBit);
    int bit[nBit];
    j=nBit-1;
    k=0;
    while(i<nBit&&j>-1){
    printf("Digite o %do Bit: ", i+1);
    scanf("%d", &bit[i]);
    if(bit[i]==1){
        binario = 1*(pow(2,j));
        k=k+binario;
    }
    else{
        binario = binario+0;
    }
    j--;
    i++;
    }
    printf("O numero binario ");
    for(int pf=0;pf<nBit;pf++){
        printf("%d", bit[pf]);
    }
    printf(" em decimal e %d", k);
    
    return 0;
}