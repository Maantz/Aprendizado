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
    printf("A distancia entre os pontos (%.0f,%.0f) e (0,0) eh %.1f", X, Y, distancia);
    return 0;
}