#include <stdio.h>

int main(){
    char nome2[20],nome1[20], sobrenome[20],c1;
    int i=0,k=0,j=0, m=0;
    printf("<<Nomes>>\n");
    printf("Digite o primeiro nome e o ultimo nome: ");
    setbuf(stdin,NULL);
    c1 = getchar();
    while(c1!='\n'){
        nome1[j]=c1;
        c1 = getchar();
        j++;
        if(c1==' '){
            i=j;
        }
    }
    while(k<=i){
        nome2[k]=nome1[k];
        k++;
    }
    
    while(k<j){
        sobrenome[m]=nome1[k];
        k++;m++;
    }
    printf("Nome: ");
    for(int z=0;z<i;z++){
        printf("%c", nome2[z]);
    }
    printf("\nSobrenome: ");
    for(int w=0;w<m;w++){
        printf("%c", sobrenome[w]);
    }
    
    //printf("Sobrenome: %s\n", sobrenome);
    return 0;
}