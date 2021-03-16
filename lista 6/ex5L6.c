#include <stdio.h>

int main(){
    char nome1[50],nome2[50],c1,c2;
    int i=0,j=0,k=0, cont=0;
    printf("<<Compara Nomes>>\n");
    printf("Digite o nome 1: ");
    setbuf(stdin,NULL);
    c1=getchar();
    while(c1!='\n'){
        nome1[j]=c1;
        c1 = getchar();
        j++;
    }
    printf("Digite o nome 2: ");
    setbuf(stdin,NULL);
    c2=getchar();
    while(c2!='\n'){
        nome2[k]=c2;
        c2 = getchar();
        k++;
        
    }
     while(nome1[i]!='\0'){
          if(nome2[i]!=nome1[i]){
              if(nome2[i]-32!=nome1[i]&&nome2[i]+32!=nome1[i])
            cont++;
        }
        i++;
     }
    
    
        if(cont==0){
            printf("Os nomes digitados sao iguais");
        }else{
            printf("Os nomes digitados sao diferentes");
        }

    

return 0;
}