#include <stdio.h>
#include <math.h>

int main(void){
    float X, Y, distancia;
    printf("====Distancia entre os pontos no Plano====\n");
    printf("Digite a coordenada X: ");
    scanf("%f", &X);
    printf("Digite a coordenada Y: ");
    scanf("%f", &Y);
    distancia=sqrt((X*X)+(Y*Y));
    printf("distancia = %.1f", distancia);
    return 0;
}