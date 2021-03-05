#include <stdio.h>

int main(void){
    float media, n1, n2, n3, n4;
    printf("===Media Aritmetica===\n");
    printf("Digite a 1a nota: ");
    scanf("%f", &n1);
    printf("Digite a 2a nota: ");
    scanf("%f", &n2);
    printf("Digite a 3a nota: ");
    scanf("%f", &n3);
    printf("Digite a 4a nota: ");
    scanf("%f", &n4);
    printf("===NOTAS===\n");
    printf("nota 1 = %.1f, nota 2 = %.1f, nota 3 = %.1f, nota 4 = %.1f\n", n1, n2, n3, n4);
    media = (n1+n2+n3+n4)/4;
    printf("Media = %.1f", media);
    return 0;
}   