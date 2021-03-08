#include <stdio.h>

int main(){
    int fat=1, i;
    for(i=1;i<=15;i++){
        fat*=i;
        printf("%d!=%d\n", i, fat);
    }
    printf("Acredito que o erro deste problema ocorre devido ao fato de usarmos apenas variaveis inteiras\ne como a resposta e um numero grande precisaria de variaveis mais precisas\n");
    return 0;
}