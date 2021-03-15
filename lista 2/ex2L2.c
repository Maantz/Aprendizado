#include <stdio.h>

int main(void){
    float p1, p2;
    char nome;
    printf("Media das provas >>>>>>>>\n");
    printf("Digite o Nome do ALuno: ");
    scanf("%c", &nome);
    printf("Digite a nota da Prova 1: ");
    scanf("%f", &p1);
    printf("Digite a nota da Prova 2: ");
    scanf("%f", &p2);
    printf("A nota media do aluno %c. e %.1f\n", nome, (p1+p2)/2);
    return 0;
}