#include <stdio.h>

int main(){
    int i,j,n,var=0;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            var++;
            printf("%d ", var);
        }
        printf("\n");
    }

    return 0;
}