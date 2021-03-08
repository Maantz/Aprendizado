#include <stdio.h>

int main(){
    float jose=50000, carlos=25000;
    int cont=0;
    while(jose>carlos){
        carlos+=3000;
        jose+=800;
        cont++;
    }
    if(cont%12==0){
        if(cont/12==1){
            printf("levara %d ano para carlos ficar com mais dinheiro que jose\n", cont/12);
        }else{
            printf("levarao %d anos para carlos ficar com mais dinheiro que jose\n", cont/12);
    }
    }
    else{
        printf("levarao %d anos e %d meses para carlos ficar com mais dinheiro que jose\n", cont/12, cont%12);
    }
    return 0;
}