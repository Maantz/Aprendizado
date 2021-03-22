/*10)Imprima o conteúdo de um vetor de int de 10 posições da última posição até a primeira utilizando aritmética de ponteiros e 
SEM declarar variáveis do tipo ponteiro (ou seja, o nome do vetor terá que ser usado como o ponteiro)*/     

#include<stdio.h>

int main(){
    int vet[10] = {10,9,20,22,211,305,13,45,90,100};
        for(int i=0;i<10;i++){
        printf("vet[%d] = %d\n", i, *vet);
        *vet = *(vet + (i+1));
        }

    return 0;
}