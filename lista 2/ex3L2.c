#include <stdio.h>

int main(void){
    int p1, p2, p3, media;
    char nome;
    printf("Media das provas >>>>>>>>\n");
    printf("Digite o Nome do ALuno: ");
    scanf("%c", &nome);
    printf("Digite a nota da Prova 1: ");
    scanf("%d", &p1);
    printf("Digite a nota da Prova 2: ");
    scanf("%d", &p2);
    printf("Digite a nota da Prova 3: ");
    scanf("%d", &p3);
    media = (p1*1+p2*1+p3*2)/4;
    printf("A nota media do aluno %c. e %d\n", nome, media);
    return 0;
}