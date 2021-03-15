#include <stdio.h>

int main(void){
    char nome;
    float media,p1, p2, p3,peso1,peso2,peso3;
    printf("Media das provas >>>>>>>>\n");
    printf("Digite o Nome do ALuno: ");
    scanf("%c", &nome);
    printf("Digite a nota da Prova 1: ");
    scanf("%f", &p1);
    printf("Digite a nota da Prova 2: ");
    scanf("%f", &p2);
    printf("Digite a nota da Prova 3: ");
    scanf("%f", &p3);
    printf("Informe o peso da Prova 1: ");
    scanf("%f", &peso1);
    printf("Informe o peso da Prova 2: ");
    scanf("%f", &peso2);
    printf("Informe o peso da Prova 3: ");
    scanf("%f", &peso3);
    media = (p1*peso1+p2*peso2+p3*peso3)/(peso1+peso2+peso3);
    printf("A nota media do aluno %c. e %.2f\n", nome, media);
    return 0;
}