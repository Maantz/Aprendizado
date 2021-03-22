/*8)Ponteiros void: é um ponteiro genérico, que aponta para qualquer tipo. Sua declaração é deste tipo:
void *nome_ponteiroUm ponteiro void pode apontar para qualquer tipo. Entretanto, antes de usá-los, é necessário fazer um type cast
para o tipo que ele aponta. Por exemplo: (int *)  ou (float *)  ou  (double *).Faça um programa com dois números, um inteiro e um double. 
Crie um ponteiro void e use-o para ler os valores desses dois números com o comando scanf. Após a leitura, 
mostre na tela os números lidos, mas use no printf somente o ponteiro para mostrar os valores.
*/
#include <stdio.h>

int main(){
    int intero;
    double duble;
    void *pointer;
    pointer = &intero;
    printf("Entre com o numero inteiro: ");
    scanf("%d", (int *)pointer);
    printf("O numero Inteiro e: %d\n", *(int *)pointer);
    pointer = &duble;
    printf("Entre com o numero de Dupla Precisao: ");
    scanf("%lf", (double *)pointer);
    printf("O numero de Dupla Precisao e: %.2lf\n", *(double *)pointer);
    return 0;
}