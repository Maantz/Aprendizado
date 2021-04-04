#include <stdio.h>

typedef struct pontos{
    int pontoX, pontoY;
}ponto;

int imprime_ponto( ponto * p){

    printf("(%d,%d)", p->pontoX, p->pontoY);

}

calc_area(ponto p1, ponto p2){
    int x, y;
    x = p1.pontoX - p2.pontoX;
    y = p1.pontoY - p2.pontoY;
    if(x<0){
        x = x * (-1);
    }
    if(y<0){
        y = y*(-1);
    }
    return(x*y);
}


int main(){
    ponto p1, p2;
    int area;
    printf("Calcula Area do Retangulo\n");
    printf("Entre com o valor do X1:");
    scanf("%d", &p1.pontoX);
    printf("Entre com o valor do Y1:");
    scanf("%d", &p1.pontoY);
    printf("==================\n");
    printf("Entre com o valor do X2:");
    scanf("%d", &p2.pontoX);
    printf("Entre com o valor do Y2:");
    scanf("%d", &p2.pontoY);
    printf("==================\n");
    area = calc_area(p1,p2);
    printf("A area do retangulo definido por "); imprime_ponto(&p1); printf("e ");imprime_ponto(&p2); printf("e %d\n", area);
}