#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    printf("<<VETOR DE CHAR\n");
    char nome[20], nome2[20];
    printf("Digite o nome: ");
    setbuf(stdin,NULL);
    gets(nome);
    int tamanho;
    tamanho = strlen(nome);
    int j=0;
    for(int i=0;i<=tamanho+1;i++){
        switch(nome[i])
        {
            case 'a':
                break;
            case 'e':
                break;
            case 'i':
                break;                
            case 'o': 
                break;
            case 'u': 
                break;
            case 'A':
                break;
            case 'E':
                break;
            case 'I':
                break;                
            case 'O': 
                break;
            case 'U': 
                break;
            default:
                nome2[j]=nome[i];
                j++;
                break;
        }
        if(nome2[j]=='\0'){
            break;
        }
    }
    printf("Saida sem vogais:");
    for(int k=0;k<=j;k++){
        printf("%c", nome2[k]);
    }
    
    
    return 0;
}