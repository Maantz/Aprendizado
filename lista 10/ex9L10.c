/*9)Imprima o conteúdo de um vetor de double de 10 posições utilizando aritmética de ponteiros e 
SEM declarar variáveis do tipo ponteiro (ou seja, o nome do vetor terá que ser usado como o ponteiro)*/

#include<stdio.h>

int main(){
    double vet[10] = {10.1,9.82,20.4,22.3,211,305.1,13,45,90.8,100};
        for(int i=0;i<10;i++){
        printf("vet[%d] = %.1lf\n", i, *vet);
        *vet = *(vet + (i+1));
        }

    return 0;
}