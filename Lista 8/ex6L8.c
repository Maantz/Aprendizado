#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    printf("<<VETOR DE CHAR\n");
    char nome[50];
    printf("Digite o nome: ");
    setbuf(stdin,NULL);
    gets(nome);
    int tamanho;
    tamanho = strlen(nome);
    for(int i=0;i<tamanho;i++){
        printf("%da Letra:%c\n", i+1, nome[i]);
    }
    
 return 0;
}