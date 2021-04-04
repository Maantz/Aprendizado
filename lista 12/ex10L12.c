#include <stdio.h>
typedef struct pontos{
    int pontoX, pontoY;
}ponto;

int imprime_ponto( ponto * p){
    printf("(%d,%d)\n", p->pontoX, p->pontoY);
}

int main(){
    ponto points;
    printf("<<Cordenadas de um ponto>>\n");
    printf("Entre com o valor do X:");
    scanf("%d", &points.pontoX);
    printf("Entre com o valor do Y:");
    scanf("%d", &points.pontoY);
    imprime_ponto(&points);
    
    return 0;
}