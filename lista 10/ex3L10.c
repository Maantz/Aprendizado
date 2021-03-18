#include <stdio.h>

int main(){
    int val[5] = {2,4,5,8,10};
    unsigned int *pointer;
    pointer = &val[0];
    for(int i=0;i<5;i++){
        printf("val[%d] = %d\n",i,  *pointer);
        *pointer++;
    }

    return 0;
}