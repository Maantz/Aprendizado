#include <stdio.h>

int main(){
    printf("<<Vetor de Char>>\n");
    unsigned char nome[50], c;
    int i=0;
    printf("Digite um nome : ");
    setbuf(stdin,NULL);
    c = getchar();
    while( c != '\n'){
        nome[i]=c;
        c=getchar();
        i++;
    }
    printf("O nome digitado e : ");
    for(int ind=0;ind<i;ind++){
        if(nome[ind]>96){
        printf("%c", nome[ind]-32);
        }else{
            printf("%c", nome[ind]);
        }
    }
    return 0;
}