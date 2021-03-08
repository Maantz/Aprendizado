#include <stdio.h>

int main(){
    float fat=1, i, n, e=1;
    scanf("%f", &n);
    for(i=1;i<=n;i++){
        fat*=i;
        e += 1/fat;
    }
    printf("e ~ %f", e);

    return 0;
}