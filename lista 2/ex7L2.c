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
        case 0:printf("A and B = %d\n", a);
        if(b!=0){printf("A or B = 1\n");}else{printf("A or B = 0\n");}
        printf("A xor B = %d\n", a);
        printf("not A = 1\n");break;
        default:
        if(b!=0){
        printf("A and B = 1\n");}else{printf("A and B = 0\n");}
        printf("A or B = 1\n");
        if(b==0){
        printf("A xor B = 1\n");}else{printf("A xor B = 0\n");}
        printf("not A = 0\n");break;
    }
    return 0;
}//pensei em usar o switch pra não usar o IF, porém tava me confundindo.Então acabei usando mesmo...