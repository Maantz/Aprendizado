#include <stdio.h>

int main(void){
    int a,b;
    printf("Operadores Boleanos>>\n");
    printf("||||||USE 0 PARA FALSO E QUALQUER OUTRO PARA VERDADEIRO||||||\n");
    printf("Entre com o valor de A: ");
    scanf("%d", &a);
    printf("Entre com o valor de B: ");
    scanf("%d", &b);
    switch(a){
        case 0:
            printf("A and B = FALSO\n");
        if(b!=0){
            printf("A or B = VERDADEIRO\n");
            printf("A xor B = VERDADEIRO\n");
        }
            else{
            printf("A or B = FALSO\n");
            printf("A xor B = FALSO\n");
        }
            printf("not A = VERDADEIRO\n");break;
        default:
        if(b!=0){
            printf("A and B = VERDADEIRO\n");
            printf("A or B = VERDADEIRO\n");
            printf("A xor B = FALSO\n");
        }
        else{
            printf("A and B = FALSO\n");
            printf("A or B = VERDADEIRO\n");
            printf("A xor B = VERDADEIRO\n");}
            printf("not A = FALSO\n");break;
    }
    return 0;
}