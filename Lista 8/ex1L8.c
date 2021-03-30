#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    printf("<<VETOR DE CHAR\n");
    char nome[50];
    printf("Digite o nome: ");
    setbuf(stdin,NULL);
    gets(nome);
    printf("O nome digitado e: %s", nome);
    return 0;
}