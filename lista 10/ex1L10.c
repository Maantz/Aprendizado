#include <stdio.h>

int main(){
    int val[5] = {2,4,5,8,10};
    unsigned int *pointer;
    pointer = &val[2];
    scanf("%d", pointer);
    for(int i=0;i<5;i++){
        printf("val[%d] = %d\n",i,  val[i]);
    }

    return 0;
}