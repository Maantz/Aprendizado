#include <stdio.h>

int main(){
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    if(A>B+C||B>A+C||C>A+B){
        printf("Nao e triangulo!!!\n");
    }
    else if(A*A==B*B+C*C||B*B==A*A+C*C||C*C==A*A+B*B){
        printf("Triangulo Retangulo!!!\n");
    } else if(A*A>B*B+C*C||B*B>A*A+C*C||C*C>A*A+B*B){
        printf("Triangulo Obtusangulo!!!\n");
    }else if(A*A<B*B+C*C||B*B<A*A+C*C||C*C<A*A+B*B){
        printf("Triangulo Acutangulo!!!\n");
    }
    return 0;
}





/*(i)Se algum dos lados for maior que a soma dos outros dois, nenhum triângulo é formado
(ii)Se A2 = B2 + C2 é   formando um triângulo retângulo
(iii)Se A2 > B2 + C2 é formando um triangulo obtusângulo
(iv)Se A2 < B2 + C2 é formando um triangulo acutânguloCaso um número negativo seja digitado, mostrar uma mensagem de erro*/