#include <stdio.h>

int main(){
    int i;
    printf("<<Contagem regressiva>>\n");
    printf("Qual o numero inicial ? ");
    scanf("%d", &i);
    while(i>-1){
        printf("%d...", i);i--;
    }
    printf("FIM!");
    return 0;
}