#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    printf("<<VETOR DE CHAR\n");
    char nome[50], nome2[50];
    printf("Digite o nome 1: ");
    setbuf(stdin,NULL);
    gets(nome);
    printf("Digite o nome 2: ");
    setbuf(stdin,NULL);
    gets(nome2);
    if(strcmp(nome,nome2)==0){
        printf("Os nomes sao iguais\n");
    }else{
        printf("Os nome sao diferentes\n");
    }
    return 0;
}