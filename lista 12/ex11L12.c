#include <stdio.h>

typedef struct pontos{
    int pontoX, pontoY;
}ponto;



int imprime_ponto( ponto * p){

    printf("(%d,%d)", p->pontoX, p->pontoY);

}
ponto soma_ponto(ponto p1, ponto p2){
    ponto pn;
    pn.pontoX = p1.pontoX + p2.pontoX;
    pn.pontoY = p1.pontoY + p2.pontoY;
    return(pn);
}





int main(){
    
    ponto p1, p2, p3;


    
    printf("<<Soma das cordenadas de um ponto>>\n");
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
    p3 = soma_ponto(p1,p2);
    printf("A soma de "); imprime_ponto(&p1);printf("com ");imprime_ponto(&p2);printf("e ");imprime_ponto(&p3);
    return 0;
}