#include <stdio.h>

int main(){
    int i;
    printf("<<Contagem regressiva>>\n");
    for(i=10;i>-1;i--){
        printf("%d...", i);
    }
    printf("FIM!");
    return 0;
}