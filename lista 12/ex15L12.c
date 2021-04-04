#include <stdio.h>

typedef struct pontos{
    int pontoX, pontoY;
}ponto;

int imprime_ponto( ponto  p){

    printf("(%d,%d)", p.pontoX, p.pontoY);

}
int inc_dir(ponto *p, char dir){
    if(dir=='N'||dir=='n'){
    p->pontoY = p->pontoY + 1;
    }
    if(dir=='S'||dir=='s'){
    p->pontoY = p->pontoY -1;
    }
    if(dir=='L'||dir=='l'){
    p->pontoX = p->pontoX +1;
    }
    if(dir=='O'||dir=='o'){
    p->pontoX = p->pontoX -1;
    }
    return;
}

int main(){
    ponto p;
    char direction[6];
    printf("Entre com o valor do X:");
    scanf("%d", &p.pontoX);
    printf("Entre com o valor do Y:");
    scanf("%d", &p.pontoY);
    printf("==================\n");
    printf("Entre com a direcao: ");
    setbuf(stdin,NULL);
    gets(direction);
    imprime_ponto(p);
    printf("%s => ", direction);
    inc_dir(&p, direction[0]);
    imprime_ponto(p);
    return 0;
}



