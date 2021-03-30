#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    char str[20], strINV[20];
    printf("<<Palindromos>>\n");
    printf("Digite uma String: ");
    setbuf(stdin,NULL);
    gets(str);
    int tamanho, tam2;
    tamanho = strlen(str);
    tam2 = 0;
    for(int i=tamanho-1;i>=0;i--){
        strINV[tam2] = str[i];
        tam2++;
    }
    strINV[tam2]='\0';
    
    printf("%s \n", strINV);
    if(strcmpi(strINV,str)==0){
        printf("%s e palindromo\n", strINV);
    }
    else{
        printf("%s nao e palindromo\n", str);
    }
    return 0;
}