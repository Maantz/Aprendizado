#include <stdio.h>

typedef struct pontos{
    int pontoX, pontoY;
}ponto;

multiplica(ponto *x, int consst){
    x->pontoX = x->pontoX * consst;
    x->pontoY = x->pontoY * consst;
}

int imprime_ponto( ponto  p){

    printf("(%d,%d)", p.pontoX, p.pontoY);

}

int main(){
    ponto p;
    int constante;
    printf("Entre com o valor do X:");
    scanf("%d", &p.pontoX);
    printf("Entre com o valor do Y:");
    scanf("%d", &p.pontoY);
    printf("==================\n");
    printf("Digite a constante: ");
    scanf("%d", &constante);
    printf("Resultado: ");imprime_ponto(p);
    printf("* %d = ", constante);
    multiplica(&p, constante);
    imprime_ponto(p);
    return 0;
}