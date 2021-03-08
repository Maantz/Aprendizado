#include <stdio.h>

int main(){
    int i;
    printf("<<Contagem Progressiva ate 0>>\n");
    printf("Qual o numero inicial ? ");
    scanf("%d", &i);
    while(i<=0){
        printf("%d...", i);i++;
    }
    printf("FIM!");
    return 0;
}