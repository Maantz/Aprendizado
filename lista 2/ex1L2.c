#include <stdio.h>

int main(void){
    int p1, p2;
    printf("Media das provas >>>>>>>>\n");
    printf("Digite a nota da Prova 1: ");
    scanf("%d", &p1);
    printf("Digite a nota da Prova 2: ");
    scanf("%d", &p2);
    printf("A nota media e %d\n", (p1+p2)/2);
    return 0;
}