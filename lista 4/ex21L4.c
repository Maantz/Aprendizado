#include <stdio.h>

int main(){
    int fat=1, i;
    for(i=1;i<=10;i++){
        fat*=i;
        printf("%d!=%d\n", i, fat);
    }

    return 0;
}