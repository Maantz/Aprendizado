#include <stdio.h>

int main(void){
    int p1, p2;
    char nome[10];
    printf("Media das provas >>>>>>>>\n");
    printf("Digite o Nome do ALuno: ");
    scanf("%s", nome);
    printf("Digite a nota da Prova 1: ");
    scanf("%d", &p1);
    printf("Digite a nota da Prova 2: ");
    scanf("%d", &p2);
    printf("A nota media do aluno %s e %d\n", nome, (p1+p2)/2);
    return 0;
}