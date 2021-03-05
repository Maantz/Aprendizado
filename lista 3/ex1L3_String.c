#include <stdio.h>
#include <stdlib.h>

int main(void){
    int p1, p2, p3, media;
    char nome[10], situacao[9];
    printf("Media das provas >>>>>>>>\n");
    printf("Digite o Nome do ALuno: ");
    setbuf(stdin,NULL);
    scanf("%s", nome);
    printf("Digite a nota da Prova 1: ");
    setbuf(stdin,NULL);
    scanf("%d", &p1);
    printf("Digite a nota da Prova 2: ");
    setbuf(stdin,NULL);
    scanf("%d", &p2);
    printf("Digite a nota da Prova 3: ");
    setbuf(stdin,NULL);
    scanf("%d", &p3);
    media = (p1*1+p2*1+p3*2)/4;
    printf("A nota media do aluno %s e %d =>", nome, media);
    if(media>=60){
        int i;
       char situacao[10] = "APROVADO!";
       for(i=0;i<10;i++){
       printf("%c", situacao[i]);
       }printf("\n");
    } else{
        int i;
        char situacao[10] = "REPROVADO!";
        for(i=0;i<10;i++){
        printf("%c", situacao[i]);
       }printf("\n");
    }
    return 0;
}

