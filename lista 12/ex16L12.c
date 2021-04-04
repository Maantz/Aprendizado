#include <stdio.h>
#include <string.h>

typedef struct pontos{
    int pontoX, pontoY;
}ponto;

int imprime_ponto( ponto  p){

    printf("(%d,%d)", p.pontoX, p.pontoY);

}
int inc_dir(ponto *p, char *dir){
    if(strcmpi(dir,"norte")==0){
    p->pontoY = p->pontoY + 1;
    }
    if(strcmpi(dir,"Sul")==0){
    p->pontoY = p->pontoY -1;
    }
    if(strcmpi(dir,"Leste")==0){
    p->pontoX = p->pontoX +1;
    }
    if(strcmpi(dir,"Oeste")==0){
    p->pontoX = p->pontoX -1;
    }
    if(strcmpi(dir,"Noroeste")==0){
    p->pontoX = p->pontoX -1;
    p->pontoY = p->pontoY +1;
    }
    if(strcmpi(dir,"Nordeste")==0){
    p->pontoX = p->pontoX +1;
    p->pontoY = p->pontoY +1;
    }
    if(strcmpi(dir,"Sudoeste")==0){
    p->pontoX = p->pontoX -1;
    p->pontoY = p->pontoY -1;
    }
    if(strcmpi(dir,"Sudeste")==0){
    p->pontoX = p->pontoX +1;
    p->pontoY = p->pontoY -1;
    }

    return;
}

int main(){
    ponto p;
    char direction[12];
    printf("Entre com o valor do X:");
    setbuf(stdin,NULL);
    scanf("%d", &p.pontoX);
    printf("Entre com o valor do Y:");
    setbuf(stdin,NULL);
    scanf("%d", &p.pontoY);
    printf("==================\n");
    printf("Entre com a direcao: ");
    setbuf(stdin,NULL);
    gets(direction);
    imprime_ponto(p);
    printf("%s => ", direction);
    inc_dir(&p, &direction);
    imprime_ponto(p);
    return 0;
}



