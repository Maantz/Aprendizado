#include <stdio.h>

int main(){
    unsigned char asc[96];
    int i=32,j=1;
    
    while(i<127){
        asc[j]= i;
        j++;
        i++;
    }
    for(int k=1;k<96;k++){
        printf("%d %c\t", asc[k], asc[k]);
        if(k%7==0&&k!=0){
            printf("\n");
        }
    }


    return 0;
}