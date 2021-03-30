#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    char str[20];
    printf("<<Invertendo>>\n");
    printf("Digite uma String: ");
    gets(str);
    int tamanho;
    tamanho = strlen(str);
    printf("Saida Invertida: ");
    for(int i=0;i<tamanho;i++){
        for(tamanho;tamanho>=0;tamanho--){
            printf("%c", str[tamanho]);
        }
    }
    return 0;
}