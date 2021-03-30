#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    printf("<<VETOR DE CHAR\n");
    char nome[50];
    int i=0;
    printf("Digite o nome: ");
    setbuf(stdin,NULL);
    gets(nome);
    char *token;
    token = strtok(nome," ");
    while(token != NULL){
        if(i==0){
            printf("Nome:%s\n", token);
            }else{
                printf("Sobrenome:%s\n", token);
                }
         token = strtok(NULL," ");
         i++;
    }
 return 0;
}