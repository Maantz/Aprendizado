#include <stdio.h>

int main(){
    int *p;
    p = (int *)calloc(5,sizeof(int));
    for(int i=0;i<5;i++){
        printf("Informe um numero:", i+1);
        scanf("%d", &p[i]);
    }
    for(int i=0;i<5;i++){
        printf("%d ", p[i]);
    }
    printf("\n");
    free(p);

    return 0;
}