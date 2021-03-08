#include <stdio.h>

int main(){
    int i;
    printf("<<Contagem regressiva>>\n");
    printf("Qual o numero inicial ? ");
    scanf("%d", &i);
    do{
        printf("%d...", i);i--;
    }while(i>-1);
    printf("FIM!");
    return 0;
}