#include <stdio.h>

int main(){
    int val[5] = {2,4,5,8,10};
    int   a = 40, *p;
    p = &a;
    unsigned int *pointer, *pointer2;
    pointer = &val[2];
    pointer2 = &val[4];
    printf("Digite o substituto de 5: ");
    scanf("%d", pointer);
    printf("Digite o novo valor de a: ");
    scanf("%d", p);
    printf("Digite o substituto de 10: ");
    scanf("%d", pointer2);
    printf("Usando & = %d\n", &a);
    printf("Usando ponteiro p= %d\n", p);
    for(int i=0;i<5;i++){
        printf("val[%d] = %d\n",i,  val[i]);
    }
    printf("a = %d\n", a);
    return 0;
}